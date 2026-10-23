// Retains successful readings, records repeated events and removes expired, destroyed-target or excess entries.
// Reports meaningful remembered-value changes while keeping current observation validity separate.

#include "Observation/ObservationMemory.h"
#include "GameFramework/Actor.h"

#pragma region Initialization and Reset
void UFuzzyAIObservationMemory::Initialize(int32 InMaxRecords, int32 InMaxEvents, float InEventMaxAge)
{
    Reset();
    MaxRecords = FMath::Max(1, InMaxRecords);
    MaxEvents = FMath::Max(1, InMaxEvents);
    EventMaxAge = FMath::Max(0.f, InEventMaxAge);
}

void UFuzzyAIObservationMemory::Reset()
{
    Records.Reset();
    NotificationBaselines.Reset();
    Events.Reset();
}

#pragma endregion
#pragma region Remembered Facts and Expiry
void UFuzzyAIObservationMemory::Remember(const FFuzzyAIObservationRecord& Record, float Duration, float Tolerance,
    TArray<FName>& OutChangedKeys)
{
    if (!Record.Result.bIsValid)
    {
        return;
    }
    int32 RecordIndex = Records.IndexOfByPredicate([&Record](const FFuzzyAIRememberedObservation& Item)
    {
        return Item.Observation.Key == Record.Key && Item.Observation.Observer == Record.Observer &&
            Item.Observation.Target == Record.Target;
    });
    const bool bChanged = RecordIndex == INDEX_NONE ||
        !FFuzzyAIObservationResult::Equivalent(NotificationBaselines[RecordIndex].Result, Record.Result, Tolerance);
    if (RecordIndex == INDEX_NONE)
    {
        if (Records.Num() >= MaxRecords)
        {
            int32 Oldest = 0;
            for (int32 Index = 1; Index < Records.Num(); ++Index)
            {
                if (Records[Index].Observation.LastSuccessTime < Records[Oldest].Observation.LastSuccessTime)
                {
                    Oldest = Index;
                }
            }
            OutChangedKeys.AddUnique(Records[Oldest].Observation.Key);
            Records.RemoveAt(Oldest);
            NotificationBaselines.RemoveAt(Oldest);
        }
        RecordIndex = Records.AddDefaulted();
        NotificationBaselines.Add(Record);
    }
    Records[RecordIndex].Observation = Record;
    Records[RecordIndex].ExpiresAt = Duration > 0.f ? Record.LastSuccessTime + Duration : -1.;
    if (bChanged)
    {
        NotificationBaselines[RecordIndex] = Record;
        OutChangedKeys.AddUnique(Record.Key);
    }
}

void UFuzzyAIObservationMemory::Prune(double Time, TArray<FName>& OutChangedKeys)
{
    for (int32 Index = Records.Num() - 1; Index >= 0; --Index)
    {
        const FFuzzyAIRememberedObservation& Item = Records[Index];
        if ((Item.ExpiresAt >= 0. && Time >= Item.ExpiresAt) || !Item.Observation.Observer.IsValid() ||
            (Item.Observation.bTargetDependent && Item.Observation.Target.IsStale()))
        {
            OutChangedKeys.AddUnique(Item.Observation.Key);
            Records.RemoveAt(Index);
            NotificationBaselines.RemoveAt(Index);
        }
    }
    if (EventMaxAge > 0.f)
    {
        Events.RemoveAll([this, Time](const FFuzzyAIObservedEvent& Event)
        {
            return Time - Event.Time >= EventMaxAge;
        });
    }
}

#pragma endregion
#pragma region Remembered Fact Reads
bool UFuzzyAIObservationMemory::TryGetObservation(FName Key, AActor* Target, double Time,
    FFuzzyAIRememberedObservation& OutRecord) const
{
    OutRecord = FFuzzyAIRememberedObservation();
    for (const FFuzzyAIRememberedObservation& Item : Records)
    {
        if (Item.Observation.Key == Key && Item.Observation.Observer.IsValid() &&
            (!Item.Observation.bTargetDependent || (IsValid(Target) && Item.Observation.Target.Get() == Target) ||
                (!Target && Item.Observation.Target.IsExplicitlyNull())) &&
            (Item.ExpiresAt < 0. || Time < Item.ExpiresAt))
        {
            OutRecord = Item;
            return true;
        }
    }
    return false;
}

TArray<FFuzzyAIRememberedObservation> UFuzzyAIObservationMemory::GetSnapshot(double Time) const
{
    TArray<FFuzzyAIRememberedObservation> Snapshot;
    for (const FFuzzyAIRememberedObservation& Item : Records)
    {
        if ((Item.ExpiresAt < 0. || Time < Item.ExpiresAt) && Item.Observation.Observer.IsValid() &&
            (!Item.Observation.bTargetDependent || !Item.Observation.Target.IsStale()))
        {
            Snapshot.Add(Item);
        }
    }
    return Snapshot;
}

#pragma endregion
#pragma region Observed Event History
FFuzzyAIObservedEvent UFuzzyAIObservationMemory::RecordEvent(const FFuzzyAIObservedEvent& Event, double Time)
{
    FFuzzyAIObservedEvent Stored = Event;
    Stored.Time = Time;
    const bool bOutOfOrder = !Events.IsEmpty() && Stored.Time < Events.Last().Time;
    Events.Add(Stored);
    if (bOutOfOrder)
    {
        Events.StableSort([](const FFuzzyAIObservedEvent& A, const FFuzzyAIObservedEvent& B) { return A.Time < B.Time; });
    }
    if (Events.Num() > MaxEvents)
    {
        Events.RemoveAt(0, Events.Num() - MaxEvents);
    }
    return Stored;
}

TArray<FFuzzyAIObservedEvent> UFuzzyAIObservationMemory::GetEvents(double Time) const
{
    TArray<FFuzzyAIObservedEvent> Snapshot;
    for (const FFuzzyAIObservedEvent& Event : Events)
    {
        if (EventMaxAge <= 0.f || Time - Event.Time < EventMaxAge)
        {
            Snapshot.Add(Event);
        }
    }
    return Snapshot;
}
#pragma endregion
