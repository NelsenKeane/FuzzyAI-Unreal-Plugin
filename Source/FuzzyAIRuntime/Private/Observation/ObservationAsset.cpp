#include "Observation/ObservationAsset.h"
#include "GameFramework/Actor.h"

FFuzzyAIObservationResult UFuzzyAIObservationAsset::Observe(const FFuzzyAIObservationContext& Context) const
{
    FFuzzyAIObservationResult Result;
    if (ObservationKey.IsNone())
    {
        Result.FailureReason = TEXT("Observation Key is not configured.");
        return Result;
    }
    if (Subject != EFuzzyAIObservationSubject::Custom && !IsValid(GetSubjectActor(Context)))
    {
        Result.FailureReason = TEXT("The configured subject is unavailable.");
        return Result;
    }

    Result = ReadObservation(Context);
    if (!Result.bIsValid)
    {
        return Result;
    }
    if (Result.ValueType != ExpectedValueType)
    {
        Result = FFuzzyAIObservationResult();
        Result.FailureReason = TEXT("Returned value type does not match Expected Value Type.");
        return Result;
    }
    const bool bNonFinite = (Result.ValueType == EFuzzyAIObservationValueType::Float && !FMath::IsFinite(Result.FloatValue))
        || (Result.ValueType == EFuzzyAIObservationValueType::Vector && Result.VectorValue.ContainsNaN());
    if (bNonFinite)
    {
        Result = FFuzzyAIObservationResult();
        Result.FailureReason = TEXT("Observation returned a non-finite number.");
    }
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationAsset::ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const
{
    FFuzzyAIObservationResult Result;
    Result.FailureReason = TEXT("Override Read Observation in an Observation Blueprint.");
    return Result;
}

AActor* UFuzzyAIObservationAsset::GetSubjectActor(const FFuzzyAIObservationContext& Context) const
{
    switch (Subject)
    {
    case EFuzzyAIObservationSubject::Self: return Context.Observer.Get();
    case EFuzzyAIObservationSubject::Target: return Context.Target.Get();
    default: return nullptr;
    }
}
