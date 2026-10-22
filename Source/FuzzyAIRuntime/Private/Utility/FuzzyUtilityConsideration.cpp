#include "Utility/FuzzyUtilityConsideration.h"

FFuzzyAIStageResult UFuzzyUtilityConsideration::Evaluate_Implementation(
    const FFuzzyAIUtilityContext& Context, FFuzzyAIUtilityValue& OutValue) const
{
    OutValue = FFuzzyAIUtilityValue();
    // TODO: Read supplied evidence, apply availability gates and evaluate an authored response.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("Utility consideration evaluation is not implemented."));
}
