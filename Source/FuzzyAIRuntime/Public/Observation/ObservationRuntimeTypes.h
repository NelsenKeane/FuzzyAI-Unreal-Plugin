#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationAsset.h"
#include "ObservationRuntimeTypes.generated.h"

UENUM(BlueprintType)
enum class EFuzzyAIObservationUpdatePolicy : uint8
{
    Interval,
    SourceEvent,
    EveryFrame,
    Manual
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservationEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    TObjectPtr<UFuzzyAIObservationAsset> Observation = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationUpdatePolicy UpdatePolicy = EFuzzyAIObservationUpdatePolicy::Interval;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (ClampMin = "0.01", EditCondition = "UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval"))
    float Interval = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (ClampMin = "0"))
    float ChangeTolerance = 0.01f;

    /** Gates the read before calling Blueprint, so an unseen target cannot leak live data. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    bool bRequiresVisibleTarget = false;

    /** Enable for Custom readers that use Target or Subjects. Target subjects are automatic. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    bool bUsesTargetContext = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory")
    bool bRememberLastSuccessful = false;

    /** Seconds since the last successful sample; zero retains until eviction or clear. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory", meta = (ClampMin = "0", EditCondition = "bRememberLastSuccessful"))
    float MemoryDuration = 10.f;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservationRecord
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    FName Key;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    FFuzzyAIObservationResult Result;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    TWeakObjectPtr<AActor> Observer;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    TWeakObjectPtr<AActor> Target;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    bool bTargetDependent = false;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    double LastAttemptTime = -1.;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    double LastSuccessTime = -1.;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    double LastChangeTime = -1.;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    int32 ContextRevision = 0;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIRememberedObservation
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    FFuzzyAIObservationRecord Observation;

    /** Negative means no time-based expiry. */
    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    double ExpiresAt = -1.;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservedEvent
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    FName EventKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    TWeakObjectPtr<AActor> Source;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    TWeakObjectPtr<AActor> Target;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    FFuzzyAIObservationResult Payload;

    /** Assigned by the runtime on receipt. */
    UPROPERTY(BlueprintReadOnly, Category = "Event")
    double Time = -1.;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAITargetLocationKnowledge
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    TWeakObjectPtr<AActor> Target;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    bool bHasActiveLocation = false;

    UPROPERTY(BlueprintReadOnly, Category = "Observation")
    FVector ActiveLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    bool bHasLastSeenLocation = false;

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    FVector LastSeenLocation = FVector::ZeroVector;

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    double LastSeenTime = -1.;

    UPROPERTY(BlueprintReadOnly, Category = "Memory")
    double LastSeenAge = -1.;
};

struct FUZZYAIRUNTIME_API FFuzzyAIObservationChange
{
    FFuzzyAIObservationRecord Previous;
    FFuzzyAIObservationRecord Current;
    bool bHadPrevious = false;
};
