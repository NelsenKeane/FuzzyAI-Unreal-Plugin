// Declares inline example sensors for visible-target distance, supplied line-of-sight state and visible location.
// Visibility comes from the component's perception integration; these sensors do not perform sight traces.

#pragma once

#include "CoreMinimal.h"
#include "Observation/FuzzyObservation.h"
#include "FuzzyStandardObservations.generated.h"

#pragma region Distance Sensor
UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyDistanceObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyDistanceObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};

#pragma endregion
#pragma region Line Of Sight Sensor
UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyLineOfSightObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyLineOfSightObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};

#pragma endregion
#pragma region Target Location Sensor
UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyTargetLocationObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyTargetLocationObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};
#pragma endregion
