// Declares the single actor component used to configure observations and expose facts, memory and change events.
// Owns per-enemy observation state while keeping sensor definitions and current readings separate.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "TimerManager.h"
#include "FuzzyAIComponent.generated.h"

class UFuzzyAIObservationMemory;
class UFuzzyObservation;
class UFuzzyObservationStore;
class UFuzzyObservationManager;

#pragma region Dispatcher Types
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFuzzyAIObservationChanged, FName, Key,
    const FFuzzyAIObservationRecord&, Previous, const FFuzzyAIObservationRecord&, Current, bool, bHadPrevious);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuzzyAIObservationsChanged, const TArray<FName>&, ChangedKeys);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuzzyAIObservedEventRecorded, const FFuzzyAIObservedEvent&, Event);

#pragma endregion
/** Single actor-facing entry point. Internal layers are per-enemy UObjects, not actor components. */
UCLASS(BlueprintType, Blueprintable, ClassGroup = (FuzzyAI), meta = (BlueprintSpawnableComponent))
class FUZZYAIRUNTIME_API UFuzzyAIComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UFuzzyAIComponent();

    #pragma region Configuration
    /** Inline Blueprint/native sensor templates. Each running enemy receives its own copies. */
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Observations"))
    TArray<TObjectPtr<UFuzzyObservation>> ObservationInstances;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI")
    bool bAutoStart = true;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI")
    bool bServerOnly = true;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Memory", meta = (ClampMin = "1"))
    int32 MaxRememberedObservations = 128;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Memory", meta = (ClampMin = "1"))
    int32 MaxObservedEvents = 128;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Memory", meta = (ClampMin = "0"))
    float ObservedEventMaxAge = 30.f;

    #pragma endregion
    #pragma region Change Dispatchers
    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationChanged OnObservationChanged;

    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationsChanged OnObservationsChanged;

    /** Value/availability changes and expiry/eviction; timestamp-only refreshes stay quiet. */
    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Memory")
    FFuzzyAIObservationsChanged OnMemoryChanged;

    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Memory")
    FFuzzyAIObservedEventRecorded OnObservedEventRecorded;

    #pragma endregion
    #pragma region Observation Lifecycle
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI")
    bool StartAI();

    /** Stops collection; cached readings remain available with their original timestamps. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI")
    void StopAI();

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI")
    bool IsObserving() const { return bRunning; }

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI")
    TArray<FString> GetConfigurationErrors() const { return ConfigurationErrors; }

    #pragma endregion
    #pragma region Refresh Requests
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void RefreshAllObservations();

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RequestObservationRefresh(FName Key);

    /** Wire a source's change delegate to this function. Only SourceEvent entries are accepted. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool NotifyObservationSourceChanged(FName Key);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RequestObservationInstanceRefresh(UFuzzyObservation* Observation);

    #pragma endregion
    #pragma region Sensor and Store Access
    /** Typed read access for consumers; setters accept writes only during Sample. */
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    UFuzzyObservationStore* GetObservationStore() const { return ObservationStore; }

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    TArray<UFuzzyObservation*> GetRuntimeObservationInstances() const;

    #pragma endregion
    #pragma region Target and Subject Context
    /** Changing target resets visibility until perception explicitly confirms the new target. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void SetTarget(AActor* NewTarget);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    AActor* GetTarget() const;

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void SetTargetVisibility(bool bVisible);

    /** Feed sight updates only, not hearing/damage stimuli. A successful sighting also samples position. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void UpdateTargetSighting(AActor* SensedTarget, bool bVisible);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void SetObservationSubjects(const TArray<AActor*>& Subjects);

    #pragma endregion
    #pragma region Current Observation Reads
    /** Return value means key exists, not that its Result is valid or fresh. */
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    bool TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    TArray<FFuzzyAIObservationRecord> GetObservationSnapshot() const;

    #pragma endregion
    #pragma region Remembered Knowledge
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    bool TryGetRememberedObservation(FName Key, AActor* ForTarget, FFuzzyAIRememberedObservation& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    TArray<FFuzzyAIRememberedObservation> GetMemorySnapshot() const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    FFuzzyAITargetLocationKnowledge GetTargetLocationKnowledge(FName LocationKey = "Target.VisibleLocation") const;

    #pragma endregion
    #pragma region Event History and Memory Control
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Memory")
    bool RecordObservedEvent(const FFuzzyAIObservedEvent& Event);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    TArray<FFuzzyAIObservedEvent> GetObservedEvents() const;

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Memory")
    void ClearMemory();

    #pragma endregion
    #pragma region Engine Tick
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    #pragma endregion
protected:
    #pragma region Engine Lifecycle
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    #pragma endregion
private:
    #pragma region Owned Observation Layers
    UPROPERTY(Transient)
    TObjectPtr<UFuzzyAIObservationMemory> MemoryRuntime;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyObservationStore> ObservationStore;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyObservationManager> ObservationManager;

    #pragma endregion
    #pragma region Context and Configuration State
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CurrentTarget;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> AdditionalSubjects;

    UPROPERTY(Transient)
    TArray<FString> ConfigurationErrors;

    #pragma endregion
    #pragma region Scheduling and Deferred Actions
    FTimerHandle SchedulerHandle;
    FTimerHandle DeferredHandle;
    TArray<TFunction<void()>> DeferredActions;
    bool bRunning = false;
    bool bTargetVisible = false;
    bool bProcessing = false;
    bool bEndingPlay = false;
    int32 ContextRevision = 0;

    #pragma endregion
    #pragma region Internal Coordination
    double Now() const;
    FFuzzyAIObservationContext MakeContext() const;
    void SchedulerUpdate();
    void ProcessRefresh(const TArray<FName>& Keys);
    TArray<FName> GetRefreshKeys(bool bContextOnly = false) const;
    void ApplyTarget(AActor* NewTarget, bool bVisible);
    void Defer(TFunction<void()>&& Action);
    bool RecordEventAtTime(const FFuzzyAIObservedEvent& Event, double ReceiptTime);

    UFUNCTION()
    void HandleTargetDestroyed(AActor* DestroyedActor);
    #pragma endregion
};
