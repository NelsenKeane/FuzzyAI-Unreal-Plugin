// Selects deterministic highest-utility actions with hysteresis, bounded execution and retry cooldowns.
// Active actions use continuation gates rather than rechecking start-only GAS activation costs.
#include "Utility/FuzzyAIDecisionRuntime.h"
#include "Utility/FuzzyAIAction.h"
#include "Utility/FuzzyAIConsideration.h"
#include "Utility/FuzzyAIInterpretation.h"
#include "Utility/FuzzyAIDecisionProfile.h"
#include "Core/FuzzyAIComponent.h"
#include "Engine/World.h"
#include "Misc/ScopeExit.h"

FFuzzyAIContext UFuzzyAIDecisionRuntime::MakeContext() const
{
    FFuzzyAIContext Context;
    Context.Component = Component.Get();
    Context.Observer = Component.IsValid() ? Component->GetOwner() : nullptr;
    Context.Target = Component.IsValid() ? Component->GetTarget() : nullptr;
    return Context;
}

bool UFuzzyAIDecisionRuntime::Initialize(UFuzzyAIComponent* Owner, TArray<FString>& Errors)
{
    Stop();
    Component = Owner;
    Actions.Reset(); Interpretations.Reset(); Scores.Reset(); Values.Reset();
    Debug = FFuzzyAIDecisionDebugSnapshot();
    if (!Owner->bEnableDecisions) return true;
    if (!FMath::IsFinite(Owner->DecisionInterval) || Owner->DecisionInterval < 0.01f ||
        !FMath::IsFinite(Owner->SwitchingMargin) || Owner->SwitchingMargin < 0.f || Owner->SwitchingMargin > 1.f)
    { Errors.Add(TEXT("DecisionInterval must be >= 0.01 and SwitchingMargin must be in [0,1].")); return false; }
    TArray<TObjectPtr<UFuzzyAIAction>> ActionTemplates;
    TArray<TObjectPtr<UFuzzyAIInterpretation>> InterpretationTemplates;
    if (Owner->DecisionProfile)
    {
        ActionTemplates = Owner->DecisionProfile->Actions;
        InterpretationTemplates = Owner->DecisionProfile->Interpretations;
    }
    ActionTemplates.Append(Owner->Actions);
    InterpretationTemplates.Append(Owner->Interpretations);
    TSet<FName> InterpretationIds;
    TSet<FGameplayTag> ActionIds;
    for (const UFuzzyAIInterpretation* Template : InterpretationTemplates)
    {
        FString Error;
        if (!IsValid(Template) || !Template->Validate(Error))
        { Errors.Add(Error.IsEmpty() ? TEXT("Null interpretation.") : Error); continue; }
        if (InterpretationIds.Contains(Template->InterpretationId))
        { Errors.Add(TEXT("Duplicate interpretation ID: ") + Template->InterpretationId.ToString()); continue; }
        TArray<FFuzzyAIInput> Inputs;
        Template->GetInputs(Inputs);
        for (const auto& Input : Inputs)
            if (Input.Source == EFuzzyAIInputSource::Interpretation && !InterpretationIds.Contains(Input.InterpretationId))
                Errors.Add(TEXT("Interpretations must reference earlier interpretations: ") + Input.InterpretationId.ToString());
        InterpretationIds.Add(Template->InterpretationId);
        Interpretations.Add(DuplicateObject<UFuzzyAIInterpretation>(Template, this));
    }
    for (const UFuzzyAIAction* Template : ActionTemplates)
    {
        FString Error;
        if (!IsValid(Template) || !Template->Validate(Error))
        { Errors.Add(Error.IsEmpty() ? TEXT("Null action.") : Error); continue; }
        if (ActionIds.Contains(Template->ActionId))
        { Errors.Add(TEXT("Duplicate action ID: ") + Template->ActionId.ToString()); continue; }
        auto CheckInput = [&](const FFuzzyAIInput& Input)
        {
            if (Input.Source == EFuzzyAIInputSource::Interpretation && !InterpretationIds.Contains(Input.InterpretationId))
                Errors.Add(TEXT("Unknown interpretation: ") + Input.InterpretationId.ToString());
        };
        for (const auto& Requirement : Template->Requirements) CheckInput(Requirement.Input);
        for (const UFuzzyAIConsideration* Consideration : Template->Considerations)
            if (const auto* Input = Cast<UFuzzyAIInputConsideration>(Consideration)) CheckInput(Input->Factor.Input);
        ActionIds.Add(Template->ActionId);
        Actions.Add(DuplicateObject<UFuzzyAIAction>(Template, this));
    }
    bRunning = Errors.IsEmpty();
    LastUpdate = Owner->GetWorld()->GetTimeSeconds();
    return bRunning;
}

bool UFuzzyAIDecisionRuntime::ReadInterpretation(FName Id, float& Value) const
{
    Value = 0.f;
    for (const auto& Entry : Values)
        if (Entry.Id == Id) { Value = Entry.Value; return Entry.bValid; }
    return false;
}

void UFuzzyAIDecisionRuntime::EndActive(EFuzzyAIActionResult Result, double Time)
{
    UFuzzyAIAction* Previous = Active;
    if (!Previous) return;
    Active = nullptr;
    Previous->bActive = false;
    Previous->bFinished = false;
    Previous->ReadyAt = Time + (Result == EFuzzyAIActionResult::Failed ? Previous->FailureCooldown : Previous->Cooldown);
    AddExecutionEvent(Previous->ActionId, StaticEnum<EFuzzyAIActionResult>()->GetNameStringByValue(static_cast<int64>(Result)), Previous->ExecutionDetail, Time);
    Previous->CleanupExecution(Result);
    Previous->End(Result);
    if (Component.IsValid()) Component->OnActionFinished.Broadcast(Previous->ActionId, Result);
}

void UFuzzyAIDecisionRuntime::Stop()
{
    bRunning = false;
    const double Time = Component.IsValid() && Component->GetWorld() ? Component->GetWorld()->GetTimeSeconds() : 0.;
    EndActive(EFuzzyAIActionResult::Cancelled, Time);
    for (auto& Score : Scores) Score.bActive = false;
    Debug.Selection = TEXT("Stopped");
    CaptureExecution(Time);
}

bool UFuzzyAIDecisionRuntime::DebugEnabled() const
{
#if UE_BUILD_SHIPPING
    return false;
#else
    return Component.IsValid() && Component->bCaptureDecisionDebug;
#endif
}
void UFuzzyAIDecisionRuntime::RecordDebug(FFuzzyAIDebugEntry Entry)
{
    if (!bCollectingDebug) return;
    if (Debug.Entries.Num() >= 512) { ++Debug.DroppedEntries; return; }
    Entry.bHasInput &= FMath::IsFinite(Entry.Input);
    Entry.bHasNormalized &= FMath::IsFinite(Entry.Normalized);
    Entry.bHasValue &= FMath::IsFinite(Entry.Value);
    Entry.bHasWeight &= FMath::IsFinite(Entry.Weight);
    Debug.Entries.Add(MoveTemp(Entry));
}
void UFuzzyAIDecisionRuntime::AddExecutionEvent(FGameplayTag Id, const FString& Event, const FString& Details, double Time)
{
    if (!DebugEnabled()) return;
    if (Debug.History.Num() >= 64) Debug.History.RemoveAt(0);
    FFuzzyAIExecutionEvent Entry; Entry.ActionId = Id; Entry.Event = Event; Entry.Details = Details; Entry.Time = Time;
    Debug.History.Add(MoveTemp(Entry));
}
void UFuzzyAIDecisionRuntime::CaptureExecution(double Time)
{
    Debug.Executions.Reset();
    if (!DebugEnabled()) return;
    for (const UFuzzyAIAction* Action : Actions)
    {
        FFuzzyAIExecutionDebug Entry;
        Entry.ActionId = Action->ActionId; Entry.bInterruptible = Action->bInterruptible;
        Entry.Cooldown = FMath::Max(0., Action->ReadyAt - Time);
        Entry.Phase = Action == Active ? (Action->bFinished ? TEXT("Ending") : TEXT("Running")) :
            !bRunning ? TEXT("Stopped") : Entry.Cooldown > 0.f ? TEXT("Cooldown") : TEXT("Idle");
        if (Action == Active)
        {
            Entry.Elapsed = FMath::Max(0., Time - Action->StartedAt);
            Entry.Remaining = FMath::Max(0.f, Action->Timeout - Entry.Elapsed);
        }
        Entry.Target = GetNameSafe(Action->StartTarget.Get());
        Entry.Details = Action->ExecutionDetail;
        Debug.Executions.Add(MoveTemp(Entry));
    }
}

void UFuzzyAIDecisionRuntime::Update()
{
    if (!bRunning || bUpdating || !Component.IsValid() || !Component->IsObserving()) return;
    TGuardValue<bool> Guard(bUpdating, true);
    const double Time = Component->GetWorld()->GetTimeSeconds();
    const float Delta = FMath::Max(0., Time - LastUpdate);
    LastUpdate = Time;
    Debug.Entries.Reset(); Debug.Executions.Reset(); Debug.DroppedEntries = 0;
    Debug.EvaluationTime = Time; Debug.bCaptureEnabled = DebugEnabled();
    if (!Debug.bCaptureEnabled) Debug.History.Reset();
    TGuardValue<bool> CaptureGuard(bCollectingDebug, Debug.bCaptureEnabled);
    ON_SCOPE_EXIT { CaptureExecution(Time); };
    const FFuzzyAIContext Context = MakeContext();
    Values.Reset();
    for (const UFuzzyAIInterpretation* Interpretation : Interpretations)
    {
        FFuzzyAIInterpretationValue Value;
        Value.Id = Interpretation->InterpretationId;
        FFuzzyAIContext Scope = Context; Scope.DebugOwner = Value.Id; Scope.DebugLayer = EFuzzyAIDebugLayer::Fuzzy;
        Scope.DebugPath = TEXT("Estimate");
        Value.bValid = Interpretation->Evaluate(Scope, Value.Value) && FMath::IsFinite(Value.Value);
        Value.Value = Value.bValid ? FMath::Clamp(Value.Value, 0.f, 1.f) : 0.f;
        if (!bRunning) return;
        Values.Add(Value);
    }
    if (Active)
    {
        UFuzzyAIAction* Updating = Active;
        FFuzzyAIContext Scope = Context; Scope.DebugOwner = Updating->ActionId.GetTagName(); Scope.DebugActionId = Updating->ActionId;
        Scope.DebugLayer = EFuzzyAIDebugLayer::Execution; Scope.DebugPath = TEXT("Continue");
        if (Updating->bFinished) EndActive(Updating->PendingResult, Time);
        else
        {
            const bool bTargetChanged = Updating->bCancelOnTargetChange && Updating->StartTarget.Get() != Context.Target;
            const bool bCanContinue = !bTargetChanged && Updating->CanContinue(Scope);
            if (!bRunning || Active != Updating) return;
            if (!bCanContinue)
            {
                Updating->ExecutionDetail = bTargetChanged ? TEXT("Target changed") : TEXT("Continuation failed");
                EndActive(EFuzzyAIActionResult::Cancelled, Time);
            }
            else if (Time - Updating->StartedAt >= Updating->Timeout)
            {
                Updating->ExecutionDetail = TEXT("Timeout");
                EndActive(EFuzzyAIActionResult::Failed, Time);
            }
            else
            {
                Updating->Update(Delta);
                if (!bRunning || Active != Updating) return;
                if (Updating->bFinished) EndActive(Updating->PendingResult, Time);
            }
        }
    }
    if (!bRunning) return;
    Scores.Reset();
    UFuzzyAIAction* Best = nullptr;
    float BestScore = 0.f, ActiveScore = 0.f;
    for (UFuzzyAIAction* Action : Actions)
    {
        FFuzzyAIActionScore Entry;
        Entry.ActionId = Action->ActionId;
        FFuzzyAIContext Scope = Context; Scope.DebugOwner = Action->ActionId.GetTagName(); Scope.DebugActionId = Action->ActionId; Scope.DebugPath = TEXT("Start");
        Entry.bActive = Active == Action;
        Entry.bEligible = Entry.bActive ? Action->MeetsRequirements(Scope) :
            (Time >= Action->ReadyAt && Action->MeetsRequirements(Scope) && Action->CanExecute(Scope));
        if (!bRunning) return;
        if (Entry.bEligible)
        {
            Scope.DebugPath = TEXT("Score");
            const float Raw = Action->EvaluateScore(Scope);
            Entry.Score = FMath::IsFinite(Raw) ? FMath::Clamp(Raw, 0.f, 1.f) : 0.f;
            if (!FMath::IsFinite(Raw)) Entry.Reason = TEXT("Non-finite score rejected");
        }
        else Entry.Reason = Time < Action->ReadyAt ? TEXT("Cooldown") : TEXT("Requirements / activation unavailable");
        if (!bRunning) return;
        if (Entry.Score > BestScore) { Best = Action; BestScore = Entry.Score; }
        if (Entry.bActive) ActiveScore = Entry.Score;
        Scores.Add(Entry);
    }
    if (Active && Best != Active)
    {
        if (!Best) { Debug.Selection = TEXT("No challenger"); return; }
        if (!Active->bInterruptible) { Debug.Selection = TEXT("Locked"); return; }
        if (Time - Active->StartedAt < Active->MinimumRunTime) { Debug.Selection = TEXT("Min time"); return; }
        if (BestScore <= ActiveScore + Component->SwitchingMargin) { Debug.Selection = TEXT("Margin"); return; }
        Debug.Selection = TEXT("Switch");
        Active->ExecutionDetail = TEXT("Higher score");
        EndActive(EFuzzyAIActionResult::Cancelled, Time);
    }
    else Debug.Selection = Active ? TEXT("Best active") : Best ? TEXT("Best score") : TEXT("No candidate");
    if (!bRunning || Active || !Best) return;
    Active = Best;
    Best->Component = Component;
    Best->StartTarget = Context.Target;
    Best->StartedAt = Time;
    Best->bActive = true;
    Best->bFinished = false;
    Best->ExecutionDetail.Reset();
    AddExecutionEvent(Best->ActionId, TEXT("Started"), Best->GetClass()->GetName(), Time);
    Best->Start(Context);
    if (!bRunning || Active != Best) return;
    Component->OnActionStarted.Broadcast(Best->ActionId);
    for (auto& Score : Scores) Score.bActive = Score.ActionId == Best->ActionId;
    if (Active && Active->bFinished) EndActive(Active->PendingResult, Time);
    for (auto& Score : Scores) Score.bActive = Active && Score.ActionId == Active->ActionId;
}
