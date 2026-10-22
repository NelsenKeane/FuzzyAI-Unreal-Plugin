#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ObservationTypes.generated.h"

class AActor;

UENUM(BlueprintType)
enum class EFuzzyAIObservationValueType : uint8
{
    Float,
    Integer,
    Boolean,
    Vector,
    Object,
    GameplayTag
};

UENUM(BlueprintType)
enum class EFuzzyAIObservationSubject : uint8
{
    Self,
    Target,
    Custom
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservationContext
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    TObjectPtr<AActor> Observer = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    TObjectPtr<AActor> Target = nullptr;

    /** Supplied by the observer's perception integration, never inferred from target existence. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    bool bTargetVisible = false;

    // Supplied by the caller for observations involving additional actors.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    TArray<TObjectPtr<AActor>> Subjects;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservationResult
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    bool bIsValid = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    EFuzzyAIObservationValueType ValueType = EFuzzyAIObservationValueType::Float;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::Float", EditConditionHides))
    float FloatValue = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::Integer", EditConditionHides))
    int32 IntegerValue = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::Boolean", EditConditionHides))
    bool BooleanValue = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::Vector", EditConditionHides))
    FVector VectorValue = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::Object", EditConditionHides))
    TObjectPtr<UObject> ObjectValue = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation", meta = (EditCondition = "ValueType == EFuzzyAIObservationValueType::GameplayTag", EditConditionHides))
    FGameplayTag GameplayTagValue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Observation")
    FString FailureReason;
};
