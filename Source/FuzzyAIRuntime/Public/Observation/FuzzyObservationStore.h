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
    bool SetFloat(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, float Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetInteger(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, int32 Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetBoolean(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, bool Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetVector(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, FVector Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetObject(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, UObject* Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetGameplayTag(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, FGameplayTag Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool SetResult(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, const FFuzzyAIObservationResult& Value);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation Store")
    bool Invalidate(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, const FString& Reason);

    #pragma endregion
    #pragma region Typed Reads and Diagnostics
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetFloat(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, float& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetInteger(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, int32& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetBoolean(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, bool& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetVector(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, FVector& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetObject(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, UObject*& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool GetGameplayTag(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, FGameplayTag& OutValue) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    bool TryGetObservation(UPARAM(meta = (Categories = "Observation")) FGameplayTag Key, FFuzzyAIObservationRecord& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    TArray<FFuzzyAIObservationRecord> GetSnapshot() const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation Store")
    TArray<FString> GetWriteErrors() const { return WriteErrors; }

    #pragma endregion
    #pragma region Managed Sampling Transactions
    void Reset();
    void BeginBatch(double Time);
    void BeginSample(UObject* Writer, const TArray<FFuzzyAIObservationOutput>& Outputs, bool bTargetDependent,
        const FFuzzyAIObservationContext& Context, int32 ContextRevision);
    void EndSample();
    void InvalidateCurrentSample(const FString& Reason);
    TArray<FFuzzyAIObservationChange> Commit(TArray<FGameplayTag>& OutSampledKeys);
    const FFuzzyAIObservationSettings* FindSettings(FGameplayTag Key) const;
    UObject* FindWriter(FGameplayTag Key) const;

    #pragma endregion
private:
    #pragma region Records and Output Ownership
    UPROPERTY(Transient)
    TMap<FGameplayTag, FFuzzyAIObservationRecord> Records;

    UPROPERTY(Transient)
    TMap<FGameplayTag, FFuzzyAIObservationRecord> LastNotified;

    UPROPERTY(Transient)
    TMap<FGameplayTag, FFuzzyAIObservationRecord> Pending;

    UPROPERTY(Transient)
    TMap<FGameplayTag, FFuzzyAIObservationSettings> SettingsByKey;

    UPROPERTY(Transient)
    TMap<FGameplayTag, TWeakObjectPtr<UObject>> Writers;

    UPROPERTY(Transient)
    TArray<FString> WriteErrors;

    #pragma endregion
    #pragma region Active Transaction State
    TArray<FGameplayTag> PendingOrder;
    TSet<FGameplayTag> Conflicts;
    TWeakObjectPtr<UObject> ActiveWriter;
    FFuzzyAIObservationRecord SampleMetadata;
    TMap<FGameplayTag, FFuzzyAIObservationOutput> ActiveOutputs;
    double BatchTime = 0.;
    bool bBatchOpen = false;
    #pragma endregion
};
