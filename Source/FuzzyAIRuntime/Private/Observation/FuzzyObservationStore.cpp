// Stages sensor outputs, validates types/numbers, detects competing writers and commits observation batches.
// Tracks omitted outputs, change tolerances and timestamps while providing typed getters for committed facts.

#include "Observation/FuzzyObservationStore.h"
#include "GameFramework/Actor.h"

#pragma region Reset and Sampling Transactions
void UFuzzyObservationStore::Reset()
{
    Records.Reset();
    LastNotified.Reset();
    Pending.Reset();
    SettingsByKey.Reset();
    Writers.Reset();
    PendingOrder.Reset();
    Conflicts.Reset();
    WriteErrors.Reset();
    ActiveWriter.Reset();
    bBatchOpen = false;
}

void UFuzzyObservationStore::BeginBatch(double Time)
{
    check(!bBatchOpen);
    Pending.Reset();
    PendingOrder.Reset();
    Conflicts.Reset();
    WriteErrors.Reset();
    BatchTime = Time;
    bBatchOpen = true;
}

void UFuzzyObservationStore::BeginSample(UObject* Writer, FName PrimaryKey, EFuzzyAIObservationValueType PrimaryType,
    const FFuzzyAIObservationSettings& Settings, bool bTargetDependent,
    const FFuzzyAIObservationContext& Context, int32 ContextRevision)
{
    check(bBatchOpen && !ActiveWriter.IsValid());
    ActiveWriter = Writer;
    ActiveSettings = Settings;
    ActivePrimaryKey = PrimaryKey;
    ActivePrimaryType = PrimaryType;
    SampleMetadata = FFuzzyAIObservationRecord();
    SampleMetadata.Observer = Context.Observer.Get();
    SampleMetadata.bTargetDependent = bTargetDependent;
    SampleMetadata.Target = bTargetDependent ? Context.Target.Get() : nullptr;
    SampleMetadata.ContextRevision = bTargetDependent ? ContextRevision : 0;
    SampleMetadata.LastAttemptTime = BatchTime;
    TArray<FName> ExistingKeys;
    for (const auto& Pair : Writers)
    {
        if (Pair.Value == Writer)
        {
            ExistingKeys.Add(Pair.Key);
        }
    }
    if (!PrimaryKey.IsNone())
    {
        ExistingKeys.AddUnique(PrimaryKey);
    }
    for (FName Key : ExistingKeys)
    {
        FFuzzyAIObservationResult Invalid;
        const FFuzzyAIObservationRecord* Previous = Records.Find(Key);
        Invalid.ValueType = Previous ? Previous->Result.ValueType : PrimaryType;
        Invalid.FailureReason = TEXT("Observation did not publish this value during its latest sample.");
        SetResult(Key, Invalid);
    }
}

void UFuzzyObservationStore::EndSample()
{
    ActiveWriter.Reset();
}

void UFuzzyObservationStore::InvalidateCurrentSample(const FString& Reason)
{
    TArray<FName> Keys;
    for (const auto& Pair : Writers)
    {
        if (Pair.Value == ActiveWriter)
        {
            Keys.Add(Pair.Key);
        }
    }
    for (FName Key : Keys)
    {
        Invalidate(Key, Reason);
    }
}

#pragma endregion
#pragma region Write Validation and Invalidation
bool UFuzzyObservationStore::SetResult(FName Key, const FFuzzyAIObservationResult& Value)
{
    if (!bBatchOpen || !ActiveWriter.IsValid() || Key.IsNone())
    {
        WriteErrors.AddUnique(TEXT("Store writes require a non-empty key inside Sample; request a refresh from source events."));
        return false;
    }
    if (Conflicts.Contains(Key))
    {
        return false;
    }
    if (const TWeakObjectPtr<UObject>* ExistingWriter = Writers.Find(Key))
    {
        if (ExistingWriter->IsValid() && *ExistingWriter != ActiveWriter)
        {
            WriteErrors.AddUnique(FString::Printf(TEXT("Multiple observations attempted to write key %s."), *Key.ToString()));
            Conflicts.Add(Key);
            FFuzzyAIObservationRecord Conflict = SampleMetadata;
            Conflict.Key = Key;
            Conflict.Result.ValueType = Value.ValueType;
            Conflict.Result.FailureReason = TEXT("Conflicting observation writers.");
            Pending.Add(Key, Conflict);
            PendingOrder.AddUnique(Key);
            return false;
        }
    }
    Writers.Add(Key, ActiveWriter);
    SettingsByKey.Add(Key, ActiveSettings);
    FFuzzyAIObservationRecord Record = SampleMetadata;
    Record.Key = Key;
    Record.Result = Value;
    if (Value.bIsValid && Key == ActivePrimaryKey && Value.ValueType != ActivePrimaryType)
    {
        Record.Result = FFuzzyAIObservationResult();
        Record.Result.ValueType = ActivePrimaryType;
        Record.Result.FailureReason = TEXT("Primary output does not match Expected Value Type.");
    }
    else if (Value.bIsValid && ((Value.ValueType == EFuzzyAIObservationValueType::Float && !FMath::IsFinite(Value.FloatValue)) ||
        (Value.ValueType == EFuzzyAIObservationValueType::Vector && Value.VectorValue.ContainsNaN())))
    {
        Record.Result = FFuzzyAIObservationResult();
        Record.Result.ValueType = Value.ValueType;
        Record.Result.FailureReason = TEXT("Observation returned a non-finite number.");
    }
    Pending.Add(Key, Record);
    PendingOrder.AddUnique(Key);
    return Record.Result.bIsValid == Value.bIsValid;
}

bool UFuzzyObservationStore::Invalidate(FName Key, const FString& Reason)
{
    FFuzzyAIObservationResult Value;
    if (const FFuzzyAIObservationRecord* Existing = Pending.Find(Key))
    {
        Value.ValueType = Existing->Result.ValueType;
    }
    else if (const FFuzzyAIObservationRecord* Previous = Records.Find(Key))
    {
        Value.ValueType = Previous->Result.ValueType;
    }
    Value.FailureReason = Reason;
    return SetResult(Key, Value);
}

#pragma endregion
#pragma region Commit and Change Detection
TArray<FFuzzyAIObservationChange> UFuzzyObservationStore::Commit(TArray<FName>& OutSampledKeys)
{
    check(bBatchOpen && !ActiveWriter.IsValid());
    TArray<FFuzzyAIObservationChange> Changes;
    OutSampledKeys = PendingOrder;
    for (FName Key : PendingOrder)
    {
        FFuzzyAIObservationRecord Current = Pending.FindChecked(Key);
        const FFuzzyAIObservationRecord* Previous = Records.Find(Key);
        const bool bSameContext = Previous && Previous->Observer == Current.Observer && Previous->Target == Current.Target &&
            Previous->ContextRevision == Current.ContextRevision;
        Current.LastSuccessTime = Current.Result.bIsValid ? BatchTime : (bSameContext ? Previous->LastSuccessTime : -1.);
        Current.LastChangeTime = Previous ? Previous->LastChangeTime : BatchTime;
        const FFuzzyAIObservationRecord* Notified = LastNotified.Find(Key);
        const FFuzzyAIObservationSettings* Settings = SettingsByKey.Find(Key);
        const float Tolerance = Settings ? Settings->ChangeTolerance : 0.f;
        if (!Notified || Notified->Observer != Current.Observer || Notified->Target != Current.Target ||
            Notified->ContextRevision != Current.ContextRevision || !FFuzzyAIObservationResult::Equivalent(Notified->Result, Current.Result, Tolerance))
        {
            FFuzzyAIObservationChange Change;
            Change.bHadPrevious = Previous != nullptr;
            if (Previous)
            {
                Change.Previous = *Previous;
            }
            Current.LastChangeTime = BatchTime;
            Change.Current = Current;
            Changes.Add(Change);
            LastNotified.Add(Key, Current);
        }
        Records.Add(Key, Current);
    }
    bBatchOpen = false;
    Pending.Reset();
    return Changes;
}

#pragma endregion
#pragma region Metadata and Snapshot Reads
const FFuzzyAIObservationSettings* UFuzzyObservationStore::FindSettings(FName Key) const
{
    return SettingsByKey.Find(Key);
}

UObject* UFuzzyObservationStore::FindWriter(FName Key) const
{
    const TWeakObjectPtr<UObject>* Writer = Writers.Find(Key);
    return Writer ? Writer->Get() : nullptr;
}

bool UFuzzyObservationStore::TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const
{
    OutRecord = FFuzzyAIObservationRecord();
    if (const FFuzzyAIObservationRecord* Record = Records.Find(Key))
    {
        OutRecord = *Record;
        return true;
    }
    return false;
}

TArray<FFuzzyAIObservationRecord> UFuzzyObservationStore::GetSnapshot() const
{
    TArray<FName> Keys;
    Records.GetKeys(Keys);
    Keys.Sort([](FName A, FName B) { return A.LexicalLess(B); });
    TArray<FFuzzyAIObservationRecord> Snapshot;
    for (FName Key : Keys)
    {
        Snapshot.Add(Records.FindChecked(Key));
    }
    return Snapshot;
}

#pragma endregion
#pragma region Typed Writes
bool UFuzzyObservationStore::SetFloat(FName Key, float Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeFloat(Value)); }
bool UFuzzyObservationStore::SetInteger(FName Key, int32 Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeInteger(Value)); }
bool UFuzzyObservationStore::SetBoolean(FName Key, bool Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeBoolean(Value)); }
bool UFuzzyObservationStore::SetVector(FName Key, FVector Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeVector(Value)); }
bool UFuzzyObservationStore::SetObject(FName Key, UObject* Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeObject(Value)); }
bool UFuzzyObservationStore::SetGameplayTag(FName Key, FGameplayTag Value) { return SetResult(Key, FFuzzyAIObservationResult::MakeGameplayTag(Value)); }

#pragma endregion
#pragma region Typed Reads
bool UFuzzyObservationStore::GetFloat(FName Key, float& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::Float;
    OutValue = bValid ? R->Result.FloatValue : 0.f;
    return bValid;
}

bool UFuzzyObservationStore::GetInteger(FName Key, int32& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::Integer;
    OutValue = bValid ? R->Result.IntegerValue : 0;
    return bValid;
}

bool UFuzzyObservationStore::GetBoolean(FName Key, bool& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::Boolean;
    OutValue = bValid && R->Result.BooleanValue;
    return bValid;
}

bool UFuzzyObservationStore::GetVector(FName Key, FVector& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::Vector;
    OutValue = bValid ? R->Result.VectorValue : FVector::ZeroVector;
    return bValid;
}

bool UFuzzyObservationStore::GetObject(FName Key, UObject*& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::Object;
    OutValue = bValid ? R->Result.ObjectValue.Get() : nullptr;
    return bValid;
}

bool UFuzzyObservationStore::GetGameplayTag(FName Key, FGameplayTag& OutValue) const
{
    const FFuzzyAIObservationRecord* R = Records.Find(Key);
    const bool bValid = R && R->Result.bIsValid && R->Result.ValueType == EFuzzyAIObservationValueType::GameplayTag;
    OutValue = bValid ? R->Result.GameplayTagValue : FGameplayTag();
    return bValid;
}
#pragma endregion
