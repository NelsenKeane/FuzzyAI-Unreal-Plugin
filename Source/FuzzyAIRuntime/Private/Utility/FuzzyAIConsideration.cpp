// Pure scoring implementations never sample observations or execute gameplay.
// Uncertainty scores normalize by total sample weight, not input range width.
#include "Utility/FuzzyAIConsideration.h"
#include "Core/FuzzyAIComponent.h"

float UFuzzyAIConsideration::Evaluate_Implementation(const UFuzzyObservationStore* Store) const { return 0.f; }
float UFuzzyAIConsideration::EvaluateContext_Implementation(const FFuzzyAIContext& Context) const
{
    return Evaluate(Context.Component ? Context.Component->GetObservationStore() : nullptr);
}
float UFuzzyAIInputConsideration::EvaluateContext_Implementation(const FFuzzyAIContext& Context) const
{
    float Score = 0.f;
    return Factor.Evaluate(Context, Score) ? Score : 0.f;
}
bool UFuzzyAIInputConsideration::Validate(FString& Error) const
{
    return Factor.Input.Validate(Error) && Factor.Response.Validate(Error);
}
TArray<FFuzzyAIWeightedSample> UFuzzyAIUncertainConsideration::GetSamples_Implementation(const FFuzzyAIContext& Context) const
{
    return Samples;
}
float UFuzzyAIUncertainConsideration::EvaluateContext_Implementation(const FFuzzyAIContext& Context) const
{
    double Total = 0., Mass = 0.;
    const auto Values = GetSamples(Context);
    for (int32 i = 0; i < Values.Num(); ++i)
    {
        const auto& Sample = Values[i];
        const bool bValid = FMath::IsFinite(Sample.Value) && FMath::IsFinite(Sample.Weight) && Sample.Weight >= 0.f;
        const float Utility = bValid ? UtilityResponse.Evaluate(Sample.Value) : 0.f;
        FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Sample");
        Entry.Path = Context.DebugPath + FString::Printf(TEXT(" / Sample %d"), i + 1);
        Entry.Input = Sample.Value; Entry.bHasInput = bValid; Entry.Weight = Sample.Weight; Entry.bHasWeight = bValid;
        Entry.Value = Utility; Entry.bHasValue = bValid; Entry.bValid = bValid;
        Entry.State = bValid ? TEXT("Weighted") : TEXT("Invalid"); Entry.Source = TEXT("Uncertainty");
        Entry.Details = FString::Printf(TEXT("Utility %.3f | Weighted %.3f"), Utility, Utility * (bValid ? Sample.Weight : 0.f));
        FuzzyAI::Trace(Context, MoveTemp(Entry));
        if (!bValid) return 0.f;
        Total += Utility * static_cast<double>(Sample.Weight);
        Mass += Sample.Weight;
    }
    const float Score = Mass > 0. ? static_cast<float>(Total / Mass) : 0.f;
    FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Uncertainty"); Entry.Value = Score; Entry.bHasValue = Mass > 0.;
    Entry.Input = Total; Entry.bHasInput = Mass > 0.; Entry.Weight = Mass; Entry.bHasWeight = true;
    Entry.bValid = Mass > 0.; Entry.State = Mass > 0. ? TEXT("Valid") : TEXT("No mass"); Entry.Source = TEXT("Weighted mean");
    FuzzyAI::Trace(Context, MoveTemp(Entry));
    return Score;
}
bool UFuzzyAIUncertainConsideration::Validate(FString& Error) const
{
    if (!UtilityResponse.Validate(Error)) return false;
    for (const auto& Sample : Samples)
    {
        if (!FMath::IsFinite(Sample.Value) || !FMath::IsFinite(Sample.Weight) || Sample.Weight < 0.f)
        { Error = TEXT("Samples need finite values and nonnegative finite weights."); return false; }
    }
    return true;
}
