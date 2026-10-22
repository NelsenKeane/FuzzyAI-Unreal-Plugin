#pragma once

#include "CoreMinimal.h"
#include "Observation/FuzzyObservation.h"
#include "FuzzyObservationManager.generated.h"

UCLASS()
class FUZZYAIRUNTIME_API UFuzzyObservationManager : public UObject
{
    GENERATED_BODY()

public:
    bool Initialize(const TArray<TObjectPtr<UFuzzyObservation>>& Templates, UFuzzyAIComponent* Owner,
        const TArray<FName>& LegacyKeys, TArray<FString>& OutErrors);
    void Start(UFuzzyAIComponent* Owner, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context);
    void Shutdown();
    TArray<FName> GetIds() const;
    TArray<FName> GetDueIds(double Time, bool bEveryFrame) const;
    TArray<FName> GetContextDependentIds() const;
    float GetSchedulerInterval() const;
    bool NeedsEveryFrame() const;
    UFuzzyObservation* FindObservation(FName IdOrKey, const UFuzzyObservationStore* Store) const;
    bool Contains(const UFuzzyObservation* Observation) const;
    void Sample(const TArray<FName>& Ids, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context, int32 Revision, double Time);
    const TArray<TObjectPtr<UFuzzyObservation>>& GetInstances() const { return Instances; }

private:
    UPROPERTY(Transient)
    TArray<TObjectPtr<UFuzzyObservation>> Instances;

    TMap<FName, double> NextUpdateTimes;
};
