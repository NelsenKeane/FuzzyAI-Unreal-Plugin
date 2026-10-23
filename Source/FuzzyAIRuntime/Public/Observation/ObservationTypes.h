// Defines the actor context, supported value types and validity-aware result used when collecting observations.
// These are data containers; collection, storage and memory are handled by other classes.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ObservationTypes.generated.h"

class AActor;

#pragma region Value Types and Subjects
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

#pragma endregion
#pragma region Observation Context
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

#pragma endregion
#pragma region Typed Observation Result
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

    static FFuzzyAIObservationResult MakeFloat(float Value);
    static FFuzzyAIObservationResult MakeInteger(int32 Value);
    static FFuzzyAIObservationResult MakeBoolean(bool Value);
    static FFuzzyAIObservationResult MakeVector(FVector Value);
    static FFuzzyAIObservationResult MakeObject(UObject* Value);
    static FFuzzyAIObservationResult MakeGameplayTag(FGameplayTag Value);
    static FFuzzyAIObservationResult MakeInvalid(const FString& Reason);
    static bool Equivalent(const FFuzzyAIObservationResult& A, const FFuzzyAIObservationResult& B, float Tolerance);
};
#pragma endregion
