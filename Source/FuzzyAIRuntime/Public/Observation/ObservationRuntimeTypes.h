// Defines sensor result settings, update policies, timestamped records, remembered facts and observed events.
// Also provides the combined active/last-seen location view exposed by the component.

#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationTypes.h"
#include "ObservationRuntimeTypes.generated.h"

#pragma region Update Policy
UENUM(BlueprintType)
enum class EFuzzyAIObservationUpdatePolicy : uint8
{
    Interval,
    SourceEvent,
    EveryFrame,
    Manual
};

#pragma endregion
#pragma region Result and Memory Settings
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIObservationSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (ClampMin = "0"))
    float ChangeTolerance = 0.01f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory")
    bool bRememberLastSuccessful = false;

    /** Seconds since the last successful sample; zero retains until eviction or clear. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory", meta = (ClampMin = "0", EditCondition = "bRememberLastSuccessful"))
    float MemoryDuration = 10.f;
};

#pragma endregion
#pragma region Current Observation Record
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

#pragma endregion
#pragma region Remembered Observation
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

#pragma endregion
#pragma region Observed Event
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

#pragma endregion
#pragma region Target Location Knowledge
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

#pragma endregion
#pragma region Internal Change Record
struct FUZZYAIRUNTIME_API FFuzzyAIObservationChange
{
    FFuzzyAIObservationRecord Previous;
    FFuzzyAIObservationRecord Current;
    bool bHadPrevious = false;
};
#pragma endregion
