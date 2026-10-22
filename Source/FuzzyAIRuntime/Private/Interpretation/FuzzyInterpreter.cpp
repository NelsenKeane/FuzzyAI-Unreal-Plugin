#include "Interpretation/FuzzyInterpreter.h"
#include "Interpretation/FuzzyModelAsset.h"

FFuzzyAIStageResult UFuzzyInterpreter::Interpret(const FFuzzyAIDecisionContext& Context,
    const FFuzzyAIProfileSnapshot& Profile, const UFuzzyModelAsset* Model,
    FFuzzyAIInterpretationSnapshot& OutInterpretation)
{
    OutInterpretation = FFuzzyAIInterpretationSnapshot();
    if (!IsValid(Model))
    {
        return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotConfigured, TEXT("Assign a fuzzy model asset."));
    }
    // TODO: Validate bindings/units, preserve unknown inputs and evaluate memberships or authored FLL rules.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("FLL parsing and fuzzy evaluation are not implemented."));
}
