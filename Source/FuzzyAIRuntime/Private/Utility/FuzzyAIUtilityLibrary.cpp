// Exposes pure decision helpers to Blueprint customizations.
// These functions do not refresh observations or modify runtime selection state.
#include "Utility/FuzzyAIUtilityLibrary.h"
bool UFuzzyAIUtilityLibrary::ReadInput(const FFuzzyAIContext& Context, const FFuzzyAIInput& Input, float& Value) { return Input.Read(Context, Value); }
float UFuzzyAIUtilityLibrary::EvaluateResponse(const FFuzzyAIResponse& Response, float Value) { return Response.Evaluate(Value); }
void UFuzzyAIUtilityLibrary::RecordDebugValue(const FFuzzyAIContext& Context, FName Label, float Value)
{
    FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Custom"); Entry.Path = Label.ToString();
    Entry.Value = Value; Entry.bHasValue = FMath::IsFinite(Value); Entry.bValid = Entry.bHasValue;
    Entry.State = Entry.bValid ? TEXT("Captured") : TEXT("Invalid");
    FuzzyAI::Trace(Context, MoveTemp(Entry));
}
