#include "Knowledge/FuzzyAIKnowledgeSubsystem.h"

FFuzzyAIStageResult UFuzzyAIKnowledgeSubsystem::PublishProfile(AActor* SourceObserver, const FFuzzyAIProfileSnapshot& Profile)
{
    // TODO: Define which evidence may be shared, who can receive it, retention and source attribution.
    return FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotImplemented, TEXT("Shared knowledge policy and storage are not implemented."));
}

bool UFuzzyAIKnowledgeSubsystem::TryGetProfile(AActor* Target, FFuzzyAIProfileSnapshot& OutProfile) const
{
    OutProfile = FFuzzyAIProfileSnapshot();
    return false;
}
