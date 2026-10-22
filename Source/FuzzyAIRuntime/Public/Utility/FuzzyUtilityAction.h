#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Utility/FuzzyUtilityConsideration.h"
#include "FuzzyUtilityAction.generated.h"

/** Describes a candidate action. Actual GAS/movement activation belongs to the executor. */
UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyUtilityAction : public UDataAsset
{
    GENERATED_BODY()

public:
    UFuzzyUtilityAction();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action")
    FGameplayTag ActionTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Action", meta = (MultiLine = "true"))
    FText Description;

    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "Action")
    TArray<TObjectPtr<UFuzzyUtilityConsideration>> Considerations;
};
