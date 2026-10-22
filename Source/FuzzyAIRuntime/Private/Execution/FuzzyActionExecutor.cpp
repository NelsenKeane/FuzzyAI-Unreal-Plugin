#include "Execution/FuzzyActionExecutor.h"

FFuzzyAIStageResult UFuzzyActionExecutor::ExecuteAction_Implementation(
    const FFuzzyAIDecisionContext& Context, FGameplayTag ActionTag)
{
    // TODO: Recheck authority, target context and action availability before requesting GAS or movement.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("Action execution is not implemented."));
}

void UFuzzyActionExecutor::CancelAction_Implementation()
{
    // TODO: Cancel the active request and release its resources when execution is implemented.
}
