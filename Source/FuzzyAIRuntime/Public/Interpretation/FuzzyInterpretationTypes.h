#pragma once

#include "CoreMinimal.h"
#include "FuzzyInterpretationTypes.generated.h"

UENUM(BlueprintType)
enum class EFuzzyAIInputSource : uint8
{
    Observation,
    BehaviorMetric,
    PerformanceMetric
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIInputBinding
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Model")
    FName InputName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Model")
    EFuzzyAIInputSource Source = EFuzzyAIInputSource::Observation;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Model")
    FName SourceKey;
};

/** A semantic degree, such as ParryReliance.High. Membership is not a probability. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAISemanticValue
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Interpretation")
    FName Key;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Interpretation")
    bool bIsValid = false;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Interpretation")
    float Degree = 0.f;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIInterpretationSnapshot
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Interpretation")
    TArray<FFuzzyAISemanticValue> Values;
};
