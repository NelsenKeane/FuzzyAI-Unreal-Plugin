// Reads current numeric facts and bounded behavioral history for decision evaluation.
// Curves normalize input units before mapping to a finite desirability in [0,1].
#include "Utility/FuzzyAITypes.h"
#include "Core/FuzzyAIComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

bool FFuzzyAIInput::Read(const FFuzzyAIContext& Context, float& Value, FString* Detail) const
{
    if (Detail) Detail->Reset();
    auto Fail = [Detail](const TCHAR* Reason) { if (Detail) *Detail = Reason; return false; };
    Value = 0.f;
    if (Source == EFuzzyAIInputSource::Constant) { Value = Constant; return FMath::IsFinite(Value); }
    const UFuzzyAIComponent* Component = Context.Component;
    if (!IsValid(Component)) return Fail(TEXT("No component"));
    if (Source == EFuzzyAIInputSource::Interpretation)
        return Component->GetInterpretation(InterpretationId, Value) || Fail(TEXT("No estimate"));
    const double Now = Component->GetWorld() ? Component->GetWorld()->GetTimeSeconds() : 0.;
    if (Source == EFuzzyAIInputSource::Observation)
    {
        FFuzzyAIObservationRecord Record;
        if (!Component->TryGetObservation(ObservationKey, Record)) return Fail(TEXT("No reading"));
        if (!Record.Result.bIsValid) { if (Detail) *Detail = Record.Result.FailureReason; return false; }
        if (Record.bTargetDependent && Record.Target != Context.Target) return Fail(TEXT("Other target"));
        if (MaxObservationAge > 0.f && Now - Record.LastSuccessTime > MaxObservationAge) return Fail(TEXT("Stale"));
        switch (Record.Result.ValueType)
        {
            case EFuzzyAIObservationValueType::Float: Value = Record.Result.FloatValue; break;
            case EFuzzyAIObservationValueType::Integer: Value = Record.Result.IntegerValue; break;
            case EFuzzyAIObservationValueType::Boolean: Value = Record.Result.BooleanValue ? 1.f : 0.f; break;
            default: return Fail(TEXT("Not numeric"));
        }
        return FMath::IsFinite(Value);
    }
    if (!FMath::IsFinite(WindowSeconds) || WindowSeconds <= 0.f ||
        (bEventsFromCurrentTargetOnly && !IsValid(Context.Target))) return Fail(TEXT("No window/target"));
    int32 Count = 0, Opportunities = 0;
    for (const auto& Event : Component->GetObservedEvents())
    {
        if (Event.Time < Now - WindowSeconds || Event.Time > Now ||
            (bEventsFromCurrentTargetOnly && Event.Source.Get() != Context.Target)) continue;
        if (Event.EventKey == EventKey) ++Count;
        if (Event.EventKey == OpportunityEventKey) ++Opportunities;
    }
    if (Source == EFuzzyAIInputSource::EventRatio)
    {
        if (Opportunities == 0) return Fail(TEXT("No opportunities"));
        Value = FMath::Clamp(static_cast<float>(Count) / Opportunities, 0.f, 1.f);
    }
    else Value = Source == EFuzzyAIInputSource::EventRate ? Count / WindowSeconds : static_cast<float>(Count);
    if (Detail) *Detail = FString::Printf(TEXT("Events %d | Opportunities %d | Window %.2fs | Scope %s"),
        Count, Opportunities, WindowSeconds, bEventsFromCurrentTargetOnly ? TEXT("Target") : TEXT("All"));
    return FMath::IsFinite(Value);
}

FString FFuzzyAIInput::Describe() const
{
    switch (Source)
    {
        case EFuzzyAIInputSource::Observation: return ObservationKey.ToString();
        case EFuzzyAIInputSource::Interpretation: return InterpretationId.ToString();
        case EFuzzyAIInputSource::Constant: return TEXT("Constant");
        case EFuzzyAIInputSource::EventRatio: return EventKey.ToString() + TEXT(" / ") + OpportunityEventKey.ToString();
        case EFuzzyAIInputSource::EventRate: return EventKey.ToString() + TEXT(" / s");
        default: return EventKey.ToString();
    }
}

bool FFuzzyAIInput::Validate(FString& Error) const
{
    if (!FMath::IsFinite(MaxObservationAge) || MaxObservationAge < 0.f || !FMath::IsFinite(Constant))
    { Error = TEXT("Input values and observation age must be finite; age cannot be negative."); return false; }
    if (Source == EFuzzyAIInputSource::Observation && (!ObservationKey.IsValid() ||
        !ObservationKey.MatchesTag(FGameplayTag::RequestGameplayTag(TEXT("Observation")))))
    { Error = TEXT("Observation inputs need a registered Observation.* key."); return false; }
    if (Source == EFuzzyAIInputSource::Interpretation && InterpretationId.IsNone())
    { Error = TEXT("Interpretation input needs an ID."); return false; }
    if (Source == EFuzzyAIInputSource::EventCount || Source == EFuzzyAIInputSource::EventRate || Source == EFuzzyAIInputSource::EventRatio)
    {
        if (EventKey.IsNone() || !FMath::IsFinite(WindowSeconds) || WindowSeconds <= 0.f ||
            (Source == EFuzzyAIInputSource::EventRatio && OpportunityEventKey.IsNone()))
        { Error = TEXT("Event inputs need event names and a positive finite window; ratios also need an opportunity name."); return false; }
    }
    return true;
}

float FFuzzyAIResponse::Evaluate(float Value) const
{
    if (!FMath::IsFinite(Value) || !FMath::IsFinite(InputMin) || !FMath::IsFinite(InputMax) || InputMax <= InputMin) return 0.f;
    float Score = FMath::Clamp((Value - InputMin) / (InputMax - InputMin), 0.f, 1.f);
    if (bUseCurve) Score = Curve.GetRichCurveConst()->Eval(Score, 0.f);
    if (!FMath::IsFinite(Score)) return 0.f;
    Score = FMath::Clamp(Score, 0.f, 1.f);
    return bInvert ? 1.f - Score : Score;
}

bool FFuzzyAIResponse::Validate(FString& Error) const
{
    if (!FMath::IsFinite(InputMin) || !FMath::IsFinite(InputMax) || InputMax <= InputMin)
    { Error = TEXT("Response InputMax must exceed InputMin; both must be finite."); return false; }
    if (bUseCurve && Curve.GetRichCurveConst()->GetNumKeys() == 0)
    { Error = TEXT("Enabled response curve requires keys or an external CurveFloat."); return false; }
    if (bUseCurve)
        for (const auto& Key : Curve.GetRichCurveConst()->GetConstRefOfKeys())
            if (!FMath::IsFinite(Key.Time) || !FMath::IsFinite(Key.Value))
            { Error = TEXT("Response curve keys must be finite."); return false; }
    return true;
}

bool FFuzzyAIFactor::Evaluate(const FFuzzyAIContext& Context, float& Score) const
{
    Score = 0.f;
    float Value = 0.f;
    const bool bTrace = FuzzyAI::IsTracing(Context);
    FString Detail;
    const bool bKnown = Input.Read(Context, Value, bTrace ? &Detail : nullptr);
    if (bKnown) Score = Response.Evaluate(Value);
    if (bTrace)
    {
        FFuzzyAIDebugEntry Entry;
        Entry.Kind = TEXT("Response"); Entry.Source = Input.Describe();
        Entry.bValid = bKnown; Entry.State = bKnown ? TEXT("Valid") : TEXT("Missing");
        Entry.Input = Value; Entry.bHasInput = bKnown;
        Entry.Normalized = bKnown ? FMath::Clamp((Value - Response.InputMin) / (Response.InputMax - Response.InputMin), 0.f, 1.f) : 0.f;
        Entry.bHasNormalized = bKnown;
        Entry.Value = Score; Entry.bHasValue = bKnown;
        Entry.Details = FString::Printf(TEXT("%s | Range %.3g - %.3g | %s%s"), *Detail, Response.InputMin, Response.InputMax,
            Response.bUseCurve ? TEXT("Curve") : TEXT("Linear"), Response.bInvert ? TEXT(" | Inverted") : TEXT(""));
        for (int32 i = 0; i <= 32; ++i)
        {
            const float X = i / 32.f;
            Entry.Curve.Add(FVector2D(X, Response.Evaluate(FMath::Lerp(Response.InputMin, Response.InputMax, X))));
        }
        FuzzyAI::Trace(Context, MoveTemp(Entry));
    }
    return bKnown;
}
bool FFuzzyAIRequirement::Passes(const FFuzzyAIContext& Context) const
{
    float Value = 0.f;
    FString Detail;
    const bool bTrace = FuzzyAI::IsTracing(Context);
    const bool bKnown = Input.Read(Context, Value, bTrace ? &Detail : nullptr);
    const bool bPass = bKnown && Value >= Minimum && Value <= Maximum;
    if (bTrace)
    {
        FFuzzyAIDebugEntry Entry;
        Entry.Kind = TEXT("Gate"); Entry.Source = Input.Describe(); Entry.bValid = bKnown;
        Entry.Input = Value; Entry.bHasInput = bKnown; Entry.Value = bPass ? 1.f : 0.f; Entry.bHasValue = bKnown;
        Entry.State = !bKnown ? TEXT("Missing") : bPass ? TEXT("Pass") : TEXT("Fail");
        Entry.Details = FString::Printf(TEXT("Range %.3g - %.3g | %s"), Minimum, Maximum, *Detail);
        FuzzyAI::Trace(Context, MoveTemp(Entry));
    }
    return bPass;
}
float FuzzyAI::Combine(const TArray<float>& Scores, EFuzzyAICombine Mode)
{
    if (Scores.IsEmpty()) return 1.f;
    float Result = Mode == EFuzzyAICombine::Maximum || Mode == EFuzzyAICombine::Average ? 0.f : 1.f;
    for (float Value : Scores)
    {
        if (!FMath::IsFinite(Value)) return 0.f;
        Value = FMath::Clamp(Value, 0.f, 1.f);
        switch (Mode)
        {
            case EFuzzyAICombine::Product: Result *= Value; break;
            case EFuzzyAICombine::Minimum: Result = FMath::Min(Result, Value); break;
            case EFuzzyAICombine::Maximum: Result = FMath::Max(Result, Value); break;
            case EFuzzyAICombine::Average: Result += Value; break;
        }
    }
    return Mode == EFuzzyAICombine::Average ? Result / Scores.Num() : Result;
}

FString FuzzyAI::CombineName(EFuzzyAICombine Mode)
{
    switch (Mode)
    {
        case EFuzzyAICombine::Product: return TEXT("Product");
        case EFuzzyAICombine::Minimum: return TEXT("Min");
        case EFuzzyAICombine::Maximum: return TEXT("Max");
        default: return TEXT("Mean");
    }
}
bool FuzzyAI::IsTracing(const FFuzzyAIContext& Context)
{
    return Context.Component && Context.Component->IsCapturingDecisionDebug();
}
void FuzzyAI::Trace(const FFuzzyAIContext& Context, FFuzzyAIDebugEntry Entry)
{
    if (!IsTracing(Context)) return;
    Entry.Owner = Context.DebugOwner;
    Entry.ActionId = Context.DebugActionId;
    Entry.Layer = Context.DebugLayer;
    if (Entry.Path.IsEmpty()) Entry.Path = Context.DebugPath;
    Context.Component->RecordDecisionDebug(MoveTemp(Entry));
}
bool FuzzyAI::IsActionId(FGameplayTag Tag)
{
    return Tag.IsValid() && Tag.ToString().StartsWith(TEXT("AI.Action.")) &&
        FGameplayTag::RequestGameplayTag(Tag.GetTagName(), false) == Tag;
}
