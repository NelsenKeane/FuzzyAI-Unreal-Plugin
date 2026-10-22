#pragma once

#include "CoreMinimal.h"
#include "Utility/FuzzyUtilityTypes.h"
#include "FuzzyUtilityConsideration.generated.h"

/** Shared, stateless scoring definition. Do not store enemy state on an action asset. */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class FUZZYAIRUNTIME_API UFuzzyUtilityConsideration : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Utility")
    FFuzzyAIStageResult Evaluate(const FFuzzyAIUtilityContext& Context, FFuzzyAIUtilityValue& OutValue) const;
    virtual FFuzzyAIStageResult Evaluate_Implementation(const FFuzzyAIUtilityContext& Context, FFuzzyAIUtilityValue& OutValue) const;
};
