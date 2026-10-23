// Constructs typed sensor results and compares them using the configured change tolerance.
// Shared by current storage and memory, with no asset-reader or scheduling dependencies.

#include "Observation/ObservationTypes.h"

#pragma region Result Construction
FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeFloat(float Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Float;
    Result.FloatValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeInteger(int32 Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Integer;
    Result.IntegerValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeBoolean(bool Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Boolean;
    Result.BooleanValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeVector(FVector Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Vector;
    Result.VectorValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeObject(UObject* Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::Object;
    Result.ObjectValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeGameplayTag(FGameplayTag Value)
{
    FFuzzyAIObservationResult Result;
    Result.bIsValid = true;
    Result.ValueType = EFuzzyAIObservationValueType::GameplayTag;
    Result.GameplayTagValue = Value;
    return Result;
}

FFuzzyAIObservationResult FFuzzyAIObservationResult::MakeInvalid(const FString& Reason)
{
    FFuzzyAIObservationResult Result;
    Result.FailureReason = Reason;
    return Result;
}

#pragma endregion
#pragma region Result Comparison
bool FFuzzyAIObservationResult::Equivalent(const FFuzzyAIObservationResult& A, const FFuzzyAIObservationResult& B, float Tolerance)
{
    if (A.bIsValid != B.bIsValid || A.ValueType != B.ValueType)
    {
        return false;
    }
    if (!A.bIsValid)
    {
        return A.FailureReason == B.FailureReason;
    }
    switch (A.ValueType)
    {
    case EFuzzyAIObservationValueType::Float: return FMath::Abs(A.FloatValue - B.FloatValue) <= Tolerance;
    case EFuzzyAIObservationValueType::Integer: return A.IntegerValue == B.IntegerValue;
    case EFuzzyAIObservationValueType::Boolean: return A.BooleanValue == B.BooleanValue;
    case EFuzzyAIObservationValueType::Vector: return FVector::DistSquared(A.VectorValue, B.VectorValue) <= FMath::Square(double(Tolerance));
    case EFuzzyAIObservationValueType::Object: return A.ObjectValue == B.ObjectValue;
    case EFuzzyAIObservationValueType::GameplayTag: return A.GameplayTagValue == B.GameplayTagValue;
    default: return false;
    }
}

#pragma endregion
