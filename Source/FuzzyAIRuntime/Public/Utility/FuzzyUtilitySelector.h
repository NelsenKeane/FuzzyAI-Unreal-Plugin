#pragma once

#include "CoreMinimal.h"
#include "Utility/FuzzyUtilityTypes.h"
#include "FuzzyUtilitySelector.generated.h"

/** Per-enemy decision boundary. Must not activate abilities or move actors. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyUtilitySelector : public UObject
{
    GENERATED_BODY()

public:
    FFuzzyAIStageResult SelectAction(const FFuzzyAIUtilityContext& Context,
        const TArray<TObjectPtr<UFuzzyUtilityAction>>& Actions, FFuzzyAIUtilityDecision& OutDecision);
};
