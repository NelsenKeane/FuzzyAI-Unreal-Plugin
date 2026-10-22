#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "ObservationRuntime.generated.h"

/** Per-enemy state. Scheduling and notifications are coordinated by FuzzyAIComponent. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIObservationRuntime : public UObject
{
    GENERATED_BODY()

public:
    bool Initialize(const TArray<FFuzzyAIObservationEntry>& InEntries, TArray<FString>& OutErrors);
    void Reset();
    TArray<FName> GetKeys() const;
    TArray<FName> GetDueKeys(double Time, bool bEveryFrame) const;
    TArray<FName> GetTargetDependentKeys() const;
    float GetSchedulerInterval() const;
    bool NeedsEveryFrame() const;
    const FFuzzyAIObservationEntry* FindEntry(FName Key) const;
    TArray<FFuzzyAIObservationChange> Refresh(const TArray<FName>& Keys, const FFuzzyAIObservationContext& Context,
        int32 ContextRevision, double Time, TArray<FName>& OutSampledKeys);
    bool TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const;
    TArray<FFuzzyAIObservationRecord> GetSnapshot() const;
    static bool Equivalent(const FFuzzyAIObservationResult& A, const FFuzzyAIObservationResult& B, float Tolerance);
    static bool IsTargetDependent(const FFuzzyAIObservationEntry& Entry);

private:
    UPROPERTY(Transient)
    TArray<FFuzzyAIObservationEntry> Entries;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> Records;

    // Compare against the last notification so small changes can accumulate past tolerance.
    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> LastNotified;

    TMap<FName, double> NextUpdateTimes;
};
