#include "Observation/StandardObservations.h"
#include "Observation/ObservationResultLibrary.h"
#include "GameFramework/Actor.h"

UFuzzyAIDistanceObservation::UFuzzyAIDistanceObservation()
{
    ObservationKey = TEXT("Relationship.Distance");
    Subject = EFuzzyAIObservationSubject::Target;
    ExpectedValueType = EFuzzyAIObservationValueType::Float;
}

FFuzzyAIObservationResult UFuzzyAIDistanceObservation::ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const
{
    if (!IsValid(Context.Observer) || !IsValid(Context.Target))
    {
        return UFuzzyAIObservationResultLibrary::MakeInvalidResult(TEXT("Distance needs an observer and target."));
    }
    if (!Context.bTargetVisible)
    {
        return UFuzzyAIObservationResultLibrary::MakeInvalidResult(TEXT("Target is not currently visible."));
    }
    return UFuzzyAIObservationResultLibrary::MakeFloatResult(Context.Observer->GetDistanceTo(Context.Target));
}

UFuzzyAIVisibleTargetLocationObservation::UFuzzyAIVisibleTargetLocationObservation()
{
    ObservationKey = TEXT("Target.VisibleLocation");
    Subject = EFuzzyAIObservationSubject::Target;
    ExpectedValueType = EFuzzyAIObservationValueType::Vector;
}

FFuzzyAIObservationResult UFuzzyAIVisibleTargetLocationObservation::ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const
{
    if (!Context.bTargetVisible || !IsValid(Context.Target))
    {
        return UFuzzyAIObservationResultLibrary::MakeInvalidResult(TEXT("Target is not currently visible."));
    }
    return UFuzzyAIObservationResultLibrary::MakeVectorResult(Context.Target->GetActorLocation());
}
