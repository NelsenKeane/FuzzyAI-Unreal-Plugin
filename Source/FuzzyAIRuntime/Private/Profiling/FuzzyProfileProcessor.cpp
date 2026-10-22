#include "Profiling/FuzzyProfileProcessor.h"
#include "Profiling/FuzzyProfileDefinition.h"

FFuzzyAIStageResult UFuzzyProfileProcessor::BuildProfile(const FFuzzyAIDecisionContext& Context,
    const UFuzzyProfileDefinition* Definition, FFuzzyAIProfileSnapshot& OutProfile)
{
    OutProfile = FFuzzyAIProfileSnapshot();
    OutProfile.Target = Context.Target;
    if (!IsValid(Definition))
    {
        return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotConfigured, TEXT("Assign a profile definition."));
    }
    // TODO: Derive behavior and performance metrics separately, including opportunity counts and confidence.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("Profile estimation and smoothing are not implemented."));
}
