#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Core/FuzzyAITypes.h"
#include "Profiling/FuzzyProfileTypes.h"
#include "FuzzyAIKnowledgeSubsystem.generated.h"

/** Abstract sharing boundary; no instance is created for this class and no enemy evidence is published automatically. */
UCLASS(Abstract, BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyAIKnowledgeSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual FFuzzyAIStageResult PublishProfile(AActor* SourceObserver, const FFuzzyAIProfileSnapshot& Profile);
    virtual bool TryGetProfile(AActor* Target, FFuzzyAIProfileSnapshot& OutProfile) const;
};
