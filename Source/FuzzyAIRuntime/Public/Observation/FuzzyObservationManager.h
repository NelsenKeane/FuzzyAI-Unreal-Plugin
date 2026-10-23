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
    TArray<FName> GetIds() const;
    TArray<FName> GetDueIds(double Time, bool bEveryFrame) const;
    TArray<FName> GetContextDependentIds() const;
    float GetSchedulerInterval() const;
    bool NeedsEveryFrame() const;
    UFuzzyObservation* FindObservation(FName IdOrKey, const UFuzzyObservationStore* Store) const;
    bool Contains(const UFuzzyObservation* Observation) const;
    #pragma endregion
    #pragma region Sampling and Runtime Instances
    void Sample(const TArray<FName>& Ids, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context, int32 Revision, double Time);
    const TArray<TObjectPtr<UFuzzyObservation>>& GetInstances() const { return Instances; }

    #pragma endregion
private:
    #pragma region Owned Sensors and Deadlines
    UPROPERTY(Transient)
    TArray<TObjectPtr<UFuzzyObservation>> Instances;

    TMap<FName, double> NextUpdateTimes;
    #pragma endregion
};
