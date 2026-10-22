#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "Debug/FuzzyAIDebugSnapshot.h"
#include "TimerManager.h"
#include "FuzzyAIComponent.generated.h"

class UFuzzyAIObservationRuntime;
class UFuzzyAIObservationMemory;
class UFuzzyObservation;
class UFuzzyObservationStore;
class UFuzzyObservationManager;
class UFuzzyAIConfig;
class UFuzzyAIPipeline;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FFuzzyAIObservationChanged, FName, Key,
    const FFuzzyAIObservationRecord&, Previous, const FFuzzyAIObservationRecord&, Current, bool, bHadPrevious);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuzzyAIObservationsChanged, const TArray<FName>&, ChangedKeys);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFuzzyAIObservedEventRecorded, const FFuzzyAIObservedEvent&, Event);

/** Single actor-facing entry point. Internal layers are per-enemy UObjects, not actor components. */
UCLASS(BlueprintType, Blueprintable, ClassGroup = (FuzzyAI), meta = (BlueprintSpawnableComponent))
class FUZZYAIRUNTIME_API UFuzzyAIComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UFuzzyAIComponent();

    /** Optional authoring template; assigning it does not enable automatic decisions. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Prototype")
    TObjectPtr<UFuzzyAIConfig> DecisionConfig;

    /** Captures local evidence and reports unfinished stages. Never executes an action. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Prototype")
    FFuzzyAIDebugSnapshot PreviewDecisionPipeline();

    /** Inline Blueprint/native sensor templates. Each running enemy receives its own copies. */
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Observations"))
    TArray<TObjectPtr<UFuzzyObservation>> ObservationInstances;

    /** Compatibility path for existing asset-based observations. Stop/start to apply changes. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Legacy Asset Observations"))
    TArray<FFuzzyAIObservationEntry> Observations;

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

    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationChanged OnObservationChanged;

    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationsChanged OnObservationsChanged;

    /** Value/availability changes and expiry/eviction; timestamp-only refreshes stay quiet. */
    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Memory")
    FFuzzyAIObservationsChanged OnMemoryChanged;

    UPROPERTY(BlueprintAssignable, Category = "Fuzzy AI|Memory")
    FFuzzyAIObservedEventRecorded OnObservedEventRecorded;

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI")
    bool StartAI();

    /** Stops collection; cached readings remain available with their original timestamps. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI")
    void StopAI();

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI")
    bool IsObserving() const { return bRunning; }

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI")
    TArray<FString> GetConfigurationErrors() const { return ConfigurationErrors; }

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    void RefreshAllObservations();

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RequestObservationRefresh(FName Key);

    /** Wire a source's change delegate to this function. Only SourceEvent entries are accepted. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool NotifyObservationSourceChanged(FName Key);

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    bool RequestObservationInstanceRefresh(UFuzzyObservation* Observation);

    /** Typed read access for interpretation/utility; setters accept writes only during Sample. */
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    UFuzzyObservationStore* GetObservationStore() const { return ObservationStore; }

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    TArray<UFuzzyObservation*> GetRuntimeObservationInstances() const;

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

    /** Return value means key exists, not that its Result is valid or fresh. */
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    bool TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    TArray<FFuzzyAIObservationRecord> GetObservationSnapshot() const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    bool TryGetRememberedObservation(FName Key, AActor* ForTarget, FFuzzyAIRememberedObservation& OutRecord) const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    TArray<FFuzzyAIRememberedObservation> GetMemorySnapshot() const;

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    FFuzzyAITargetLocationKnowledge GetTargetLocationKnowledge(FName LocationKey = "Target.VisibleLocation") const;

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Memory")
    bool RecordObservedEvent(const FFuzzyAIObservedEvent& Event);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Memory")
    TArray<FFuzzyAIObservedEvent> GetObservedEvents() const;

    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Memory")
    void ClearMemory();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    UPROPERTY(Transient)
    TObjectPtr<UFuzzyAIPipeline> PrototypePipeline;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyAIObservationRuntime> ObservationRuntime;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyAIObservationMemory> MemoryRuntime;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyObservationStore> ObservationStore;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyObservationManager> ObservationManager;

    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> CurrentTarget;

    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> AdditionalSubjects;

    UPROPERTY(Transient)
    TArray<FString> ConfigurationErrors;

    FTimerHandle SchedulerHandle;
    FTimerHandle DeferredHandle;
    TArray<TFunction<void()>> DeferredActions;
    bool bRunning = false;
    bool bTargetVisible = false;
    bool bProcessing = false;
    bool bEndingPlay = false;
    int32 ContextRevision = 0;

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
};
