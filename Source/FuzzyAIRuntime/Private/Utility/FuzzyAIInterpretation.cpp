// Applies membership conditions to constant rule consequents without changing observations.
// No firing rule produces unavailable knowledge rather than a confident zero.
#include "Utility/FuzzyAIInterpretation.h"

bool UFuzzyAIInterpretation::Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const
{
    Value = 0.f;
    return false;
}
bool UFuzzyAIInterpretation::Validate(FString& Error) const
{
    if (InterpretationId.IsNone()) { Error = TEXT("Interpretation ID is required."); return false; }
    return true;
}
bool UFuzzyAIRuleInterpretation::Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const
{
    double Total = 0., Mass = 0.;
    for (int32 i = 0; i < Rules.Num(); ++i)
    {
        const auto& Rule = Rules[i];
        TArray<float> Strengths;
        bool bKnown = !Rule.Conditions.IsEmpty();
        for (int32 j = 0; j < Rule.Conditions.Num(); ++j)
        {
            const auto& Condition = Rule.Conditions[j];
            FFuzzyAIContext Scope = Context; Scope.DebugPath = FString::Printf(TEXT("Rule %d / Input %d"), i + 1, j + 1);
            float Score;
            if (!Condition.Evaluate(Scope, Score)) { bKnown = false; break; }
            Strengths.Add(Score);
        }
        const float Strength = bKnown ? FuzzyAI::Combine(Strengths, Rule.Combine) * Rule.Weight : 0.f;
        FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Rule"); Entry.Path = FString::Printf(TEXT("Rule %d"), i + 1);
        Entry.Source = FuzzyAI::CombineName(Rule.Combine); Entry.Input = Strength; Entry.bHasInput = bKnown;
        Entry.Weight = Rule.Consequent; Entry.bHasWeight = true; Entry.Value = Strength * Rule.Consequent; Entry.bHasValue = bKnown;
        Entry.State = !bKnown ? TEXT("Missing") : Strength > 0.f ? TEXT("Fired") : TEXT("Idle"); Entry.bValid = bKnown;
        Entry.Details = FString::Printf(TEXT("Strength %.3f | Rule weight %.3f | Consequent %.3f | Numerator %.3f"),
            Strength, Rule.Weight, Rule.Consequent, Strength * Rule.Consequent);
        FuzzyAI::Trace(Context, MoveTemp(Entry));
        if (!bKnown) continue;
        Total += Strength * Rule.Consequent;
        Mass += Strength;
    }
    Value = Mass > 0. ? static_cast<float>(Total / Mass) : 0.f;
    FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Inference"); Entry.Path = TEXT("Total");
    Entry.Input = Total; Entry.bHasInput = Mass > 0.; Entry.Weight = Mass; Entry.bHasWeight = true;
    Entry.Value = Value; Entry.bHasValue = Mass > 0.; Entry.bValid = Mass > 0.;
    Entry.State = Mass > 0. ? TEXT("Valid") : TEXT("No rules"); Entry.Source = TEXT("Sugeno");
    FuzzyAI::Trace(Context, MoveTemp(Entry));
    return Mass > 0.;
}
bool UFuzzyAIRuleInterpretation::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (Rules.IsEmpty()) { Error = TEXT("Fuzzy interpretation needs at least one rule."); return false; }
    for (const auto& Rule : Rules)
    {
        if (Rule.Conditions.IsEmpty() || !FMath::IsFinite(Rule.Weight) || Rule.Weight < 0.f || Rule.Weight > 1.f ||
            !FMath::IsFinite(Rule.Consequent) || Rule.Consequent < 0.f || Rule.Consequent > 1.f)
        { Error = TEXT("Rules need conditions and weights/consequents in [0,1]."); return false; }
        for (const auto& Condition : Rule.Conditions)
            if (!Condition.Input.Validate(Error) || !Condition.Response.Validate(Error)) return false;
    }
    return true;
}
void UFuzzyAIRuleInterpretation::GetInputs(TArray<FFuzzyAIInput>& Inputs) const
{
    for (const auto& Rule : Rules) for (const auto& Condition : Rule.Conditions) Inputs.Add(Condition.Input);
}
bool UFuzzyAIInputInterpretation::Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const
{
    return Factor.Evaluate(Context, Value);
}
bool UFuzzyAIInputInterpretation::Validate(FString& Error) const
{
    return Super::Validate(Error) && Factor.Input.Validate(Error) && Factor.Response.Validate(Error);
}
