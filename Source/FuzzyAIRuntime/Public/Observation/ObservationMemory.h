// Declares local storage for last-successful facts and a bounded history of individual observed events.
// Memory is kept separate from current observations and is queried with target identity and age.

#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "ObservationMemory.generated.h"

/** Local memory only; no shared player profile or inferred knowledge. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIObservationMemory : public UObject
{
    GENERATED_BODY()

public:
    #pragma region Initialization and Reset
    void Initialize(int32 InMaxRecords, int32 InMaxEvents, float InEventMaxAge);
    void Reset();
    #pragma endregion
    #pragma region Remembered Facts and Expiry
    void Remember(const FFuzzyAIObservationRecord& Record, float Duration, float Tolerance, TArray<FName>& OutChangedKeys);
    void Prune(double Time, TArray<FName>& OutChangedKeys);
    bool TryGetObservation(FName Key, AActor* Target, double Time, FFuzzyAIRememberedObservation& OutRecord) const;
    TArray<FFuzzyAIRememberedObservation> GetSnapshot(double Time) const;
    #pragma endregion
    #pragma region Observed Events
    FFuzzyAIObservedEvent RecordEvent(const FFuzzyAIObservedEvent& Event, double Time);
    TArray<FFuzzyAIObservedEvent> GetEvents(double Time) const;

    #pragma endregion
private:
    #pragma region Stored Facts and Events
    UPROPERTY(Transient)
    TArray<FFuzzyAIRememberedObservation> Records;

    UPROPERTY(Transient)
    TArray<FFuzzyAIObservationRecord> NotificationBaselines;

    UPROPERTY(Transient)
    TArray<FFuzzyAIObservedEvent> Events;

    #pragma endregion
    #pragma region Capacity and Event Age Limits
    int32 MaxRecords = 128;
    int32 MaxEvents = 128;
    float EventMaxAge = 30.f;
    #pragma endregion
};
