// Samples the native distance, sight-state and location keys into the typed observation store.
// Distance/location require visibility, and location is configured to preserve last-successful memory.

#include "Observation/Sensors/FuzzyStandardObservations.h"
#include "Observation/FuzzyObservationStore.h"
#include "GameFramework/Actor.h"

#pragma region Distance Sensor
UFuzzyDistanceObservation::UFuzzyDistanceObservation()
{
    ObservationKey = TEXT("Target.Distance");
    Subject = EFuzzyAIObservationSubject::Target;
    bRequiresVisibleTarget = true;
}

void UFuzzyDistanceObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    if (IsValid(Observer) && IsValid(Target) && GetObservationContext().bTargetVisible)
    {
        Store->SetFloat(ObservationKey, Observer->GetDistanceTo(Target));
    }
    else
    {
        Store->Invalidate(ObservationKey, TEXT("A visible target and valid observer are required."));
    }
}

#pragma endregion
#pragma region Line Of Sight Sensor
UFuzzyLineOfSightObservation::UFuzzyLineOfSightObservation()
{
    ObservationKey = TEXT("Target.HasLineOfSight");
    ExpectedValueType = EFuzzyAIObservationValueType::Boolean;
    Subject = EFuzzyAIObservationSubject::Target;
    UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
}

void UFuzzyLineOfSightObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    Store->SetBoolean(ObservationKey, GetObservationContext().bTargetVisible);
}

#pragma endregion
#pragma region Target Location Sensor
UFuzzyTargetLocationObservation::UFuzzyTargetLocationObservation()
{
    ObservationKey = TEXT("Target.VisibleLocation");
    ExpectedValueType = EFuzzyAIObservationValueType::Vector;
    Subject = EFuzzyAIObservationSubject::Target;
    bRequiresVisibleTarget = true;
    bRememberLastSuccessful = true;
}

void UFuzzyTargetLocationObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    if (IsValid(Target) && GetObservationContext().bTargetVisible)
    {
        Store->SetVector(ObservationKey, Target->GetActorLocation());
    }
    else
    {
        Store->Invalidate(ObservationKey, TEXT("Target is not currently visible."));
    }
}
#pragma endregion
