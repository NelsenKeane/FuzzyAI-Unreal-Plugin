#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "FuzzyObservationStore.generated.h"

/** Typed blackboard. Writes are accepted only inside a sensor's Sample transaction. */
UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyObservationStore : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetFloat(FName Key, float Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetInteger(FName Key, int32 Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetBoolean(FName Key, bool Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetVector(FName Key, FVector Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetObject(FName Key, UObject* Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetGameplayTag(FName Key, FGameplayTag Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetResult(FName Key, const FFuzzyAIObservationResult& Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool Invalidate(FName Key, const FString& Reason);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetFloat(FName Key, float& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetInteger(FName Key, int32& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetBoolean(FName Key, bool& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetVector(FName Key, FVector& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetObject(FName Key, UObject*& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetGameplayTag(FName Key, FGameplayTag& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    TArray<FFuzzyAIObservationRecord> GetSnapshot() const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    TArray<FString> GetWriteErrors() const { return WriteErrors; }

    void Reset();
    void BeginBatch(double Time);
    void BeginSample(UObject* Writer, FName PrimaryKey, EFuzzyAIObservationValueType PrimaryType,
        const FFuzzyAIObservationEntry& Settings, bool bTargetDependent,
        const FFuzzyAIObservationContext& Context, int32 ContextRevision);
    void EndSample();
    void InvalidateCurrentSample(const FString& Reason);
    TArray<FFuzzyAIObservationChange> Commit(TArray<FName>& OutSampledKeys);
    const FFuzzyAIObservationEntry* FindSettings(FName Key) const;
    UObject* FindWriter(FName Key) const;

private:
    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> Records;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> LastNotified;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> Pending;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationEntry> SettingsByKey;

    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<UObject>> Writers;

    UPROPERTY(Transient)
    TArray<FString> WriteErrors;

    TArray<FName> PendingOrder;
    TSet<FName> Conflicts;
    TWeakObjectPtr<UObject> ActiveWriter;
    FFuzzyAIObservationRecord SampleMetadata;
    FFuzzyAIObservationEntry ActiveSettings;
    FName ActivePrimaryKey;
    EFuzzyAIObservationValueType ActivePrimaryType = EFuzzyAIObservationValueType::Float;
    double BatchTime = 0.;
    bool bBatchOpen = false;
};
