#pragma once

#include "CoreMinimal.h"
#include "FuzzyProfileTypes.generated.h"

class AActor;

/** Unknown metrics retain bIsValid=false, even though their numeric storage defaults to zero. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIProfileMetric
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    FName Key;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    bool bIsValid = false;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    float Value = 0.f;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    int32 SampleCount = 0;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    float Confidence = 0.f;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    double LastEvidenceTime = -1.;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIProfileSnapshot
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    TWeakObjectPtr<AActor> Target;

    /** Tactical preferences, such as parry reliance; not measures of player skill. */
    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    TArray<FFuzzyAIProfileMetric> BehaviorMetrics;

    /** Separate evidence for future difficulty adaptation. No difficulty changes are applied here. */
    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Profile")
    TArray<FFuzzyAIProfileMetric> PerformanceMetrics;
};
