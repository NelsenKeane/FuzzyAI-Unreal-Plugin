// Samples the native distance, sight-state and location keys into the typed observation store.
// Distance/location require visibility, and location is configured to preserve last-successful memory.

#include "Observation/Sensors/FuzzyStandardObservations.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/ObservationKeys.h"
#include "GameFramework/Actor.h"

#pragma region Distance Sensor
UFuzzyDistanceObservation::UFuzzyDistanceObservation()
{
    FFuzzyAIObservationOutput Output;
    Output.Key = NKFuzzyAI::ObservationKeys::TargetDistance;
    Outputs.Add(Output);
    Subject = EFuzzyAIObservationSubject::Target;
    bRequiresVisibleTarget = true;
}

void UFuzzyDistanceObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    if (IsValid(Observer) && IsValid(Target) && GetObservationContext().bTargetVisible)
    {
        Store->SetFloat(GetOutputKey(), Observer->GetDistanceTo(Target));
    }
    else
    {
        Store->Invalidate(GetOutputKey(), TEXT("A visible target and valid observer are required."));
    }
}

#pragma endregion
#pragma region Line Of Sight Sensor
UFuzzyLineOfSightObservation::UFuzzyLineOfSightObservation()
{
    FFuzzyAIObservationOutput Output;
    Output.Key = NKFuzzyAI::ObservationKeys::TargetHasLineOfSight;
    Output.ValueType = EFuzzyAIObservationValueType::Boolean;
    Outputs.Add(Output);
    Subject = EFuzzyAIObservationSubject::Target;
    UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
}

void UFuzzyLineOfSightObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    Store->SetBoolean(GetOutputKey(), GetObservationContext().bTargetVisible);
}

#pragma endregion
#pragma region Target Location Sensor
UFuzzyTargetLocationObservation::UFuzzyTargetLocationObservation()
{
    FFuzzyAIObservationOutput Output;
    Output.Key = NKFuzzyAI::ObservationKeys::TargetVisibleLocation;
    Output.ValueType = EFuzzyAIObservationValueType::Vector;
    Output.bRememberLastSuccessful = true;
    Outputs.Add(Output);
    Subject = EFuzzyAIObservationSubject::Target;
    bRequiresVisibleTarget = true;
}

void UFuzzyTargetLocationObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    if (IsValid(Target) && GetObservationContext().bTargetVisible)
    {
        Store->SetVector(GetOutputKey(), Target->GetActorLocation());
    }
    else
    {
        Store->Invalidate(GetOutputKey(), TEXT("Target is not currently visible."));
    }
}
#pragma endregion
