// Optional game-independent GAS attribute collector with project-defined output tags.
// Each binding publishes one raw attribute or a normalized current/maximum ratio.
#pragma once
#include "CoreMinimal.h"
#include "Observation/FuzzyObservation.h"
#include "AttributeSet.h"
#include "FuzzyAttributeObservation.generated.h"

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIAttributeBinding
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute", meta=(ClampMin="0")) int32 OutputIndex = 0;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute") FGameplayAttribute Attribute;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute") bool bNormalize = false;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute", meta=(EditCondition="bNormalize")) FGameplayAttribute MaximumAttribute;
};

UCLASS(DisplayName="GAS Attributes Observation")
class FUZZYAIRUNTIME_API UFuzzyAttributeObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attributes") TArray<FFuzzyAIAttributeBinding> Bindings;
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};
