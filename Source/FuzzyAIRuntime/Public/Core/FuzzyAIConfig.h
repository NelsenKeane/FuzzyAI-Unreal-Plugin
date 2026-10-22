#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FuzzyAIConfig.generated.h"

class UFuzzyProfileDefinition;
class UFuzzyModelAsset;
class UFuzzyUtilityAction;

/** Optional shared configuration for the unfinished decision pipeline. Contains no enemy state. */
UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyAIConfig : public UDataAsset
{
    GENERATED_BODY()

public:
    UFuzzyAIConfig();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Profiling")
    TObjectPtr<UFuzzyProfileDefinition> ProfileDefinition;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interpretation")
    TObjectPtr<UFuzzyModelAsset> FuzzyModel;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Utility")
    TArray<TObjectPtr<UFuzzyUtilityAction>> Actions;
};
