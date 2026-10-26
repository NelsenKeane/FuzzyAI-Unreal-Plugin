// Evaluates gates and scores, exposes runtime-only Blueprint lifecycle hooks, and implements waiting.
// GAS owner tags remain hard requirements; desirability never bypasses gameplay restrictions.
#include "Utility/FuzzyAIAction.h"
#include "Utility/FuzzyAIConsideration.h"
#include "Core/FuzzyAIComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

bool UFuzzyAIAction::MeetsRequirements(const FFuzzyAIContext& Context) const
{
    auto Gate = [&](const TCHAR* Label, bool bPass, const FString& Detail)
    {
        FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Gate"); Entry.Path = Context.DebugPath + TEXT("/") + Label;
        Entry.Source = Label; Entry.Value = bPass ? 1.f : 0.f; Entry.bHasValue = true;
        Entry.State = bPass ? TEXT("Pass") : TEXT("Fail"); Entry.Details = Detail;
        FuzzyAI::Trace(Context, MoveTemp(Entry));
        return bPass;
    };
    if (!bEnabled) return Gate(TEXT("Enabled"), false, TEXT("Action disabled"));
    if (!IsValid(Context.Observer)) return Gate(TEXT("Owner"), false, TEXT("Owner unavailable"));
    if (bRequiresTarget && !IsValid(Context.Target)) return Gate(TEXT("Target"), false, TEXT("Target required"));
    for (int32 i = 0; i < Requirements.Num(); ++i)
    {
        FFuzzyAIContext Scope = Context; Scope.DebugPath += FString::Printf(TEXT("/Gate %d"), i + 1);
        if (!Requirements[i].Passes(Scope)) return false;
    }
    if (!RequiredOwnerTags.IsEmpty() || !BlockedOwnerTags.IsEmpty())
    {
        const auto* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Context.Observer);
        const bool bPass = ASC && ASC->HasAllMatchingGameplayTags(RequiredOwnerTags) && !ASC->HasAnyMatchingGameplayTags(BlockedOwnerTags);
        if (!Gate(TEXT("Owner tags"), bPass, FString::Printf(TEXT("Required: %s | Blocked: %s"), *RequiredOwnerTags.ToStringSimple(), *BlockedOwnerTags.ToStringSimple()))) return false;
    }
    return true;
}
bool UFuzzyAIAction::CanExecute_Implementation(const FFuzzyAIContext& Context) const { return MeetsRequirements(Context); }
bool UFuzzyAIAction::CanContinue_Implementation(const FFuzzyAIContext& Context) const
{
    return bAbortWhenRequirementsFail ? MeetsRequirements(Context) : IsValid(Context.Observer) && (!bRequiresTarget || IsValid(Context.Target));
}
float UFuzzyAIAction::EvaluateScore_Implementation(const FFuzzyAIContext& Context) const
{
    TArray<float> Scores;
    for (int32 i = 0; i < Considerations.Num(); ++i)
    {
        const UFuzzyAIConsideration* Consideration = Considerations[i];
        if (!IsValid(Consideration)) return 0.f;
        FFuzzyAIContext Scope = Context; Scope.DebugPath = FString::Printf(TEXT("Factor %d"), i + 1);
        const float Score = Consideration->EvaluateContext(Scope);
        if (!FMath::IsFinite(Score)) return 0.f;
        Scores.Add(Score);
        if (FuzzyAI::IsTracing(Scope))
        {
            FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Consideration"); Entry.Input = Score; Entry.bHasInput = true;
            Entry.Value = FMath::Clamp(Score,0.f,1.f); Entry.bHasValue = true;
            Entry.Source = Consideration->GetClass()->GetName(); Entry.State = TEXT("Captured");
            FuzzyAI::Trace(Scope, MoveTemp(Entry));
        }
    }
    const float Combined = FuzzyAI::Combine(Scores, Combine);
    FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Aggregate"); Entry.Path = TEXT("Total");
    Entry.Input = Combined; Entry.bHasInput = true; Entry.Value = BaseScore * Combined; Entry.bHasValue = true;
    Entry.Weight = BaseScore; Entry.bHasWeight = true; Entry.Source = FuzzyAI::CombineName(Combine); Entry.State = TEXT("Scored");
    FuzzyAI::Trace(Context, MoveTemp(Entry));
    return BaseScore * Combined;
}
void UFuzzyAIAction::Start_Implementation(const FFuzzyAIContext& Context) { FinishAction(false); }
void UFuzzyAIAction::Update_Implementation(float DeltaSeconds) {}
void UFuzzyAIAction::End_Implementation(EFuzzyAIActionResult Result) {}
void UFuzzyAIAction::FinishAction(bool bSucceeded, const FString& Reason)
{
    if (bActive && !bFinished)
    {
        bFinished = true;
        PendingResult = bSucceeded ? EFuzzyAIActionResult::Succeeded : EFuzzyAIActionResult::Failed;
        if (!Reason.IsEmpty()) ExecutionDetail = Reason;
    }
}
FFuzzyAIContext UFuzzyAIAction::GetActionContext() const
{
    FFuzzyAIContext Context;
    Context.Component = Component.Get();
    Context.Observer = Component.IsValid() ? Component->GetOwner() : nullptr;
    Context.Target = StartTarget.Get();
    return Context;
}
UWorld* UFuzzyAIAction::GetWorld() const { return Component.IsValid() ? Component->GetWorld() : nullptr; }
bool UFuzzyAIAction::Validate(FString& Error) const
{
    if (!FuzzyAI::IsActionId(ActionId))
    { Error = TEXT("Action ID must be a registered AI.Action.* tag."); return false; }
    if (!FMath::IsFinite(BaseScore) || BaseScore < 0.f || BaseScore > 1.f ||
        !FMath::IsFinite(MinimumRunTime) || MinimumRunTime < 0.f || !FMath::IsFinite(Timeout) || Timeout <= 0.f ||
        !FMath::IsFinite(Cooldown) || Cooldown < 0.f || !FMath::IsFinite(FailureCooldown) || FailureCooldown < 0.f)
    { Error = TEXT("Action needs an ID, a score in [0,1], finite nonnegative times and a positive timeout."); return false; }
    for (const auto& Requirement : Requirements)
        if (!Requirement.Input.Validate(Error) || !FMath::IsFinite(Requirement.Minimum) || !FMath::IsFinite(Requirement.Maximum) || Requirement.Maximum < Requirement.Minimum)
        { if (Error.IsEmpty()) Error = TEXT("Invalid requirement range."); return false; }
    for (const UFuzzyAIConsideration* Consideration : Considerations)
        if (!IsValid(Consideration) || !Consideration->Validate(Error))
        { if (Error.IsEmpty()) Error = TEXT("Null consideration."); return false; }
    return true;
}
UFuzzyAIWaitAction::UFuzzyAIWaitAction() { ActionId = FGameplayTag::RequestGameplayTag(TEXT("AI.Action.Wait"), false); BaseScore = 0.05f; }
void UFuzzyAIWaitAction::Start_Implementation(const FFuzzyAIContext& Context)
{
    ExecutionDetail = FString::Printf(TEXT("Wait %.2fs"), Duration);
    FinishAt = GetWorld()->GetTimeSeconds() + Duration;
    if (Duration == 0.f) FinishAction();
}
void UFuzzyAIWaitAction::Update_Implementation(float DeltaSeconds)
{
    if (GetWorld()->GetTimeSeconds() >= FinishAt) FinishAction();
}
bool UFuzzyAIWaitAction::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (!FMath::IsFinite(Duration) || Duration < 0.f || Duration >= Timeout)
    { Error = TEXT("Wait duration must be finite, nonnegative and below Timeout."); return false; }
    return true;
}
