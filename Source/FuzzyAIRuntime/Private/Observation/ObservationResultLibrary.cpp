#include "Observation/ObservationResultLibrary.h"

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeFloatResult(float Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Float;
    Result.FloatValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeIntegerResult(int32 Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Integer;
    Result.IntegerValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeBooleanResult(bool Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Boolean;
    Result.BooleanValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeVectorResult(FVector Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Vector;
    Result.VectorValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeObjectResult(UObject* Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Object;
    Result.ObjectValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeGameplayTagResult(FGameplayTag Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::GameplayTag;
    Result.GameplayTagValue = Value;
    return Result;
}

FFuzzyAIObservationResult UFuzzyAIObservationResultLibrary::MakeInvalidResult(const FString& Reason)
{
    FFuzzyAIObservationResult Result;
    Result.FailureReason = Reason;
    return Result;
}
