#pragma once

#include "CoreMinimal.h"
#include "Core/FuzzyAITypes.h"
#include "Profiling/FuzzyProfileTypes.h"
#include "FuzzyProfileProcessor.generated.h"

class UFuzzyProfileDefinition;

/** Per-enemy extension point for opportunity counts, smoothing and confidence. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyProfileProcessor : public UObject
{
    GENERATED_BODY()

public:
    FFuzzyAIStageResult BuildProfile(const FFuzzyAIDecisionContext& Context,
        const UFuzzyProfileDefinition* Definition, FFuzzyAIProfileSnapshot& OutProfile);
};
