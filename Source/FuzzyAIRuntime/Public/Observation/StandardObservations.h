#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationAsset.h"
#include "StandardObservations.generated.h"

/** Native samples usable as Data Asset classes without authoring a Blueprint graph. */
UCLASS(BlueprintType, Blueprintable)
class FUZZYAIRUNTIME_API UFuzzyAIDistanceObservation : public UFuzzyAIObservationAsset
{
    GENERATED_BODY()
public:
    UFuzzyAIDistanceObservation();
    virtual FFuzzyAIObservationResult ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const override;
};

UCLASS(BlueprintType, Blueprintable)
class FUZZYAIRUNTIME_API UFuzzyAIVisibleTargetLocationObservation : public UFuzzyAIObservationAsset
{
    GENERATED_BODY()
public:
    UFuzzyAIVisibleTargetLocationObservation();
    virtual FFuzzyAIObservationResult ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const override;
};
