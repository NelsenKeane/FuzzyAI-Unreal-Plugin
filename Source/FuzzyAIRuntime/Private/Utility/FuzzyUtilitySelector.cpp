#include "Utility/FuzzyUtilitySelector.h"

FFuzzyAIStageResult UFuzzyUtilitySelector::SelectAction(const FFuzzyAIUtilityContext& Context,
    const TArray<TObjectPtr<UFuzzyUtilityAction>>& Actions, FFuzzyAIUtilityDecision& OutDecision)
{
    OutDecision = FFuzzyAIUtilityDecision();
    if (Actions.IsEmpty())
    {
        return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotConfigured, TEXT("Assign utility action definitions."));
    }
    // TODO: Validate candidates, evaluate hard gates/considerations, then define ties and switching policy.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("Utility scoring and action selection are not implemented."));
}
