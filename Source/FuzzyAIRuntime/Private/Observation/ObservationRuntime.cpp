#include "Observation/ObservationRuntime.h"
#include "GameFramework/Actor.h"

bool UFuzzyAIObservationRuntime::Initialize(const TArray<FFuzzyAIObservationEntry>& InEntries, TArray<FString>& OutErrors)
{
    Reset();
    OutErrors.Reset();
    TSet<FName> Keys;
    for (const FFuzzyAIObservationEntry& Entry : InEntries)
    {
        if (!IsValid(Entry.Observation) || Entry.Observation->ObservationKey.IsNone())
        {
            OutErrors.Add(TEXT("Every observation entry needs a valid asset and non-empty key."));
            continue;
        }
        const FName Key = Entry.Observation->ObservationKey;
        if (Keys.Contains(Key))
        {
            OutErrors.Add(FString::Printf(TEXT("Duplicate observation key: %s"), *Key.ToString()));
            continue;
        }
        if (!FMath::IsFinite(Entry.Interval) || Entry.Interval < 0.01f ||
            !FMath::IsFinite(Entry.ChangeTolerance) || Entry.ChangeTolerance < 0.f ||
            !FMath::IsFinite(Entry.MemoryDuration) || Entry.MemoryDuration < 0.f)
        {
            OutErrors.Add(FString::Printf(TEXT("Invalid interval, tolerance or memory duration: %s"), *Key.ToString()));
            continue;
        }
        Keys.Add(Key);
        Entries.Add(Entry);
        NextUpdateTimes.Add(Key, 0.);
    }
    if (!OutErrors.IsEmpty())
    {
        Reset();
        return false;
    }
    return true;
}

void UFuzzyAIObservationRuntime::Reset()
{
    Entries.Reset();
    Records.Reset();
    LastNotified.Reset();
    NextUpdateTimes.Reset();
}

bool UFuzzyAIObservationRuntime::IsTargetDependent(const FFuzzyAIObservationEntry& Entry)
{
    return Entry.bRequiresVisibleTarget || Entry.bUsesTargetContext ||
        (Entry.Observation && Entry.Observation->Subject == EFuzzyAIObservationSubject::Target);
}

TArray<FName> UFuzzyAIObservationRuntime::GetKeys() const
{
    TArray<FName> Keys;
    for (const FFuzzyAIObservationEntry& Entry : Entries)
    {
        Keys.Add(Entry.Observation->ObservationKey);
    }
    return Keys;
}

TArray<FName> UFuzzyAIObservationRuntime::GetDueKeys(double Time, bool bEveryFrame) const
{
    TArray<FName> Keys;
    for (const FFuzzyAIObservationEntry& Entry : Entries)
    {
        if ((bEveryFrame && Entry.UpdatePolicy == EFuzzyAIObservationUpdatePolicy::EveryFrame) ||
            (!bEveryFrame && Entry.UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval &&
                Time >= NextUpdateTimes.FindChecked(Entry.Observation->ObservationKey)))
        {
            Keys.Add(Entry.Observation->ObservationKey);
        }
    }
    return Keys;
}

TArray<FName> UFuzzyAIObservationRuntime::GetTargetDependentKeys() const
{
    TArray<FName> Keys;
    for (const FFuzzyAIObservationEntry& Entry : Entries)
    {
        if (IsTargetDependent(Entry))
        {
            Keys.Add(Entry.Observation->ObservationKey);
        }
    }
    return Keys;
}

float UFuzzyAIObservationRuntime::GetSchedulerInterval() const
{
    float Interval = 0.25f;
    for (const FFuzzyAIObservationEntry& Entry : Entries)
    {
        if (Entry.UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval)
        {
            Interval = FMath::Min(Interval, Entry.Interval);
        }
    }
    return Interval;
}

bool UFuzzyAIObservationRuntime::NeedsEveryFrame() const
{
    return Entries.ContainsByPredicate([](const FFuzzyAIObservationEntry& Entry)
    {
        return Entry.UpdatePolicy == EFuzzyAIObservationUpdatePolicy::EveryFrame;
    });
}

const FFuzzyAIObservationEntry* UFuzzyAIObservationRuntime::FindEntry(FName Key) const
{
    return Entries.FindByPredicate([Key](const FFuzzyAIObservationEntry& Entry)
    {
        return Entry.Observation->ObservationKey == Key;
    });
}

bool UFuzzyAIObservationRuntime::Equivalent(const FFuzzyAIObservationResult& A, const FFuzzyAIObservationResult& B, float Tolerance)
{
    if (A.bIsValid != B.bIsValid || A.ValueType != B.ValueType)
    {
        return false;
    }
    if (!A.bIsValid)
    {
        return A.FailureReason == B.FailureReason;
    }
    switch (A.ValueType)
    {
    case EFuzzyAIObservationValueType::Float: return FMath::Abs(A.FloatValue - B.FloatValue) <= Tolerance;
    case EFuzzyAIObservationValueType::Integer: return A.IntegerValue == B.IntegerValue;
    case EFuzzyAIObservationValueType::Boolean: return A.BooleanValue == B.BooleanValue;
    case EFuzzyAIObservationValueType::Vector: return FVector::DistSquared(A.VectorValue, B.VectorValue) <= FMath::Square(double(Tolerance));
    case EFuzzyAIObservationValueType::Object: return A.ObjectValue == B.ObjectValue;
    case EFuzzyAIObservationValueType::GameplayTag: return A.GameplayTagValue == B.GameplayTagValue;
    default: return false;
    }
}

TArray<FFuzzyAIObservationChange> UFuzzyAIObservationRuntime::Refresh(const TArray<FName>& Keys,
    const FFuzzyAIObservationContext& Context, int32 ContextRevision, double Time, TArray<FName>& OutSampledKeys)
{
    TArray<FFuzzyAIObservationChange> Changes;
    OutSampledKeys.Reset();
    for (FName Key : Keys)
    {
        const FFuzzyAIObservationEntry* Entry = FindEntry(Key);
        if (!Entry || OutSampledKeys.Contains(Key))
        {
            continue;
        }
        OutSampledKeys.Add(Key);
        FFuzzyAIObservationRecord Current;
        const FFuzzyAIObservationRecord* Previous = Records.Find(Key);
        Current.Key = Key;
        Current.Observer = Context.Observer.Get();
        Current.bTargetDependent = IsTargetDependent(*Entry);
        Current.Target = Current.bTargetDependent ? Context.Target.Get() : nullptr;
        Current.ContextRevision = Current.bTargetDependent ? ContextRevision : 0;
        const bool bSameContext = Previous && Previous->Observer == Current.Observer &&
            Previous->Target == Current.Target && Previous->ContextRevision == Current.ContextRevision;
        Current.LastAttemptTime = Time;
        Current.LastSuccessTime = bSameContext ? Previous->LastSuccessTime : -1.;
        Current.LastChangeTime = Previous ? Previous->LastChangeTime : Time;
        if (Entry->bRequiresVisibleTarget && (!Context.bTargetVisible || !IsValid(Context.Target)))
        {
            Current.Result.FailureReason = TEXT("Target is not currently visible.");
            Current.Result.ValueType = Entry->Observation->ExpectedValueType;
        }
        else
        {
            Current.Result = Entry->Observation->Observe(Context);
        }
        if (Current.Result.bIsValid)
        {
            Current.LastSuccessTime = Time;
        }
        const FFuzzyAIObservationRecord* Notified = LastNotified.Find(Key);
        if (!Notified || Notified->Observer != Current.Observer || Notified->Target != Current.Target ||
            Notified->ContextRevision != Current.ContextRevision || !Equivalent(Notified->Result, Current.Result, Entry->ChangeTolerance))
        {
            FFuzzyAIObservationChange Change;
            Change.bHadPrevious = Previous != nullptr;
            if (Previous)
            {
                Change.Previous = *Previous;
            }
            Current.LastChangeTime = Time;
            Change.Current = Current;
            Changes.Add(Change);
            LastNotified.Add(Key, Current);
        }
        Records.Add(Key, Current);
        NextUpdateTimes.Add(Key, Time + Entry->Interval);
    }
    return Changes;
}

bool UFuzzyAIObservationRuntime::TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const
{
    OutRecord = FFuzzyAIObservationRecord();
    if (const FFuzzyAIObservationRecord* Record = Records.Find(Key))
    {
        OutRecord = *Record;
        return true;
    }
    return false;
}

TArray<FFuzzyAIObservationRecord> UFuzzyAIObservationRuntime::GetSnapshot() const
{
    TArray<FFuzzyAIObservationRecord> Snapshot;
    for (FName Key : GetKeys())
    {
        if (const FFuzzyAIObservationRecord* Record = Records.Find(Key))
        {
            Snapshot.Add(*Record);
        }
    }
    return Snapshot;
}
