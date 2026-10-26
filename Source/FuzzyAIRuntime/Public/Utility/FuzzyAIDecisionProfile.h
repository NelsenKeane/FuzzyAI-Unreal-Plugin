// Optional shared authoring asset; its inline definitions are copied into each enemy at startup.
// Runtime selection state never lives on the shared profile.
#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Utility/FuzzyAIAction.h"
#include "Utility/FuzzyAIInterpretation.h"
#include "FuzzyAIDecisionProfile.generated.h"

UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyAIDecisionProfile : public UDataAsset
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category="Fuzzy AI") TArray<TObjectPtr<UFuzzyAIInterpretation>> Interpretations;
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category="Fuzzy AI") TArray<TObjectPtr<UFuzzyAIAction>> Actions;
};
