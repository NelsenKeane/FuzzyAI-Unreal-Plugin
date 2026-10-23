// Declares the per-enemy typed store used by sensors to publish current facts and by consumers to read snapshots.
// Managed sample transactions validate writes and expose committed values with timestamps and change information.

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
    #pragma region Typed Writes and Invalidation
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

    #pragma endregion
    #pragma region Typed Reads and Diagnostics
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

    #pragma endregion
    #pragma region Managed Sampling Transactions
    void Reset();
    void BeginBatch(double Time);
    void BeginSample(UObject* Writer, FName PrimaryKey, EFuzzyAIObservationValueType PrimaryType,
        const FFuzzyAIObservationSettings& Settings, bool bTargetDependent,
        const FFuzzyAIObservationContext& Context, int32 ContextRevision);
    void EndSample();
    void InvalidateCurrentSample(const FString& Reason);
    TArray<FFuzzyAIObservationChange> Commit(TArray<FName>& OutSampledKeys);
    const FFuzzyAIObservationSettings* FindSettings(FName Key) const;
    UObject* FindWriter(FName Key) const;

    #pragma endregion
private:
    #pragma region Records and Output Ownership
    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> Records;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> LastNotified;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationRecord> Pending;

    UPROPERTY(Transient)
    TMap<FName, FFuzzyAIObservationSettings> SettingsByKey;

    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<UObject>> Writers;

    UPROPERTY(Transient)
    TArray<FString> WriteErrors;

    #pragma endregion
    #pragma region Active Transaction State
    TArray<FName> PendingOrder;
    TSet<FName> Conflicts;
    TWeakObjectPtr<UObject> ActiveWriter;
    FFuzzyAIObservationRecord SampleMetadata;
    FFuzzyAIObservationSettings ActiveSettings;
    FName ActivePrimaryKey;
    EFuzzyAIObservationValueType ActivePrimaryType = EFuzzyAIObservationValueType::Float;
    double BatchTime = 0.;
    bool bBatchOpen = false;
    #pragma endregion
};
