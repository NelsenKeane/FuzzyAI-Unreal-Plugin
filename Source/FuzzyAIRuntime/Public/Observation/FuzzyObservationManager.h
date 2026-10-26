// Declares the owner and scheduler for per-enemy copies of configured inline observation sensors.
// It manages sensor lifecycle, sampling deadlines and context changes under the component's coordination.

#pragma once

#include "CoreMinimal.h"
#include "Observation/FuzzyObservation.h"
#include "FuzzyObservationManager.generated.h"

UCLASS()
class FUZZYAIRUNTIME_API UFuzzyObservationManager : public UObject
{
    GENERATED_BODY()

public:
    #pragma region Sensor Lifecycle
    bool Initialize(const TArray<TObjectPtr<UFuzzyObservation>>& Templates, UFuzzyAIComponent* Owner,
        TArray<FString>& OutErrors);
    void Start(UFuzzyAIComponent* Owner, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context);
    void Shutdown();
    #pragma endregion
    #pragma region Scheduling and Sensor Lookup
    TArray<FName> GetSensorNames() const;
    TArray<FName> GetDueSensorNames(double Time, bool bEveryFrame) const;
    TArray<FName> GetContextDependentSensorNames() const;
    float GetSchedulerInterval() const;
    bool NeedsEveryFrame() const;
    UFuzzyObservation* FindObservation(FGameplayTag Key) const;
    bool Contains(const UFuzzyObservation* Observation) const;
    #pragma endregion
    #pragma region Sampling and Runtime Instances
    void Sample(const TArray<FName>& SensorNames, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context, int32 Revision, double Time);
    const TArray<TObjectPtr<UFuzzyObservation>>& GetInstances() const { return Instances; }

    #pragma endregion
private:
    #pragma region Owned Sensors and Deadlines
    UPROPERTY(Transient)
    TArray<TObjectPtr<UFuzzyObservation>> Instances;

    TMap<FName, double> NextUpdateTimes;
    #pragma endregion
};
