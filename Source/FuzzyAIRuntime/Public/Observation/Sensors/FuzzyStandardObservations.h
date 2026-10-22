#pragma once

#include "CoreMinimal.h"
#include "Observation/FuzzyObservation.h"
#include "FuzzyStandardObservations.generated.h"

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyDistanceObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyDistanceObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyLineOfSightObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyLineOfSightObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};

UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class FUZZYAIRUNTIME_API UFuzzyTargetLocationObservation : public UFuzzyObservation
{
    GENERATED_BODY()
public:
    UFuzzyTargetLocationObservation();
    virtual void Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) override;
};
