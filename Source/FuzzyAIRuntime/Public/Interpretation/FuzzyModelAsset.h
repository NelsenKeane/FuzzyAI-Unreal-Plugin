#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Interpretation/FuzzyInterpretationTypes.h"
#include "FuzzyModelAsset.generated.h"

/** Model authoring template. Text is stored, not imported, parsed or executed yet. */
UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyModelAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UFuzzyModelAsset();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Model", meta = (MultiLine = "true"))
    FString FLLText;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Model")
    TArray<FFuzzyAIInputBinding> Inputs;
};
