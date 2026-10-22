#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "FuzzyObservation.generated.h"

class UFuzzyAIComponent;
class UFuzzyObservationStore;
class UFuzzyObservationManager;

/** Component-owned sensor. Blueprint children implement Sample and may publish several keyed values. */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class FUZZYAIRUNTIME_API UFuzzyObservation : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    bool bEnabled = true;

    /** Optional scheduling identifier. Falls back to ObservationKey, then the instance name. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    FName ObservationId;

    /** Optional primary output; declared keys are invalidated even before the first successful read. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    FName ObservationKey;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationValueType ExpectedValueType = EFuzzyAIObservationValueType::Float;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationSubject Subject = EFuzzyAIObservationSubject::Self;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationUpdatePolicy UpdatePolicy = EFuzzyAIObservationUpdatePolicy::Interval;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (ClampMin = "0.01", EditCondition = "UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval"))
    float Interval = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (ClampMin = "0"))
    float ChangeTolerance = 0.01f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    bool bRequiresVisibleTarget = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    bool bUsesTargetContext = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory")
    bool bRememberLastSuccessful = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Memory", meta = (ClampMin = "0"))
    float MemoryDuration = 10.f;

    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Observation")
    void Sample(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store);
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationContext GetObservationContext() const;

    /** Use from a source delegate; the component schedules a safe Sample transaction. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RequestRefresh();

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RecordObservedEvent(const FFuzzyAIObservedEvent& Event);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    UFuzzyObservationStore* GetObservationStore() const { return RuntimeStore; }

    FName GetId() const;
    FFuzzyAIObservationEntry GetSettings() const;
    bool IsTargetDependent() const;
    virtual UWorld* GetWorld() const override;

protected:
    /** Bind game-specific delegates here. No store writes are accepted until Sample. */
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Observation")
    void OnInitialize();
    virtual void OnInitialize_Implementation();

    /** Unbind every delegate/task created by this instance. Called on StopAI and EndPlay. */
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Observation")
    void OnShutdown();
    virtual void OnShutdown_Implementation();

    /** Rebind target-specific sources using the previous/current contexts when necessary. */
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Observation")
    void OnContextChanged(const FFuzzyAIObservationContext& Previous, const FFuzzyAIObservationContext& Current);
    virtual void OnContextChanged_Implementation(const FFuzzyAIObservationContext& Previous, const FFuzzyAIObservationContext& Current);

private:
    friend class UFuzzyObservationManager;
    void Start(UFuzzyAIComponent* Component, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context);
    void UpdateContext(const FFuzzyAIObservationContext& Context);
    void Shutdown();

    UPROPERTY(Transient)
    TWeakObjectPtr<UFuzzyAIComponent> Coordinator;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyObservationStore> RuntimeStore;

    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> ObserverActor;

    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> TargetActor;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> Subjects;

    bool bTargetVisible = false;
    bool bInitialized = false;
};
