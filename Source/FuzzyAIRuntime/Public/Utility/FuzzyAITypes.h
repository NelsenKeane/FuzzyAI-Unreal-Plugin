// Shared evaluation inputs, response curves and passive decision snapshots.
// Missing knowledge remains unavailable instead of silently becoming a numeric zero.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Curves/CurveFloat.h"
#include "Utility/FuzzyAIDebugTypes.h"
#include "FuzzyAITypes.generated.h"

class UFuzzyAIComponent;

UENUM(BlueprintType)
enum class EFuzzyAIInputSource : uint8 { Observation, Interpretation, EventCount, EventRate, EventRatio, Constant };

UENUM(BlueprintType)
enum class EFuzzyAICombine : uint8 { Product, Minimum, Maximum, Average };

UENUM(BlueprintType)
enum class EFuzzyAIActionResult : uint8 { Succeeded, Failed, Cancelled };

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIContext
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Context") TObjectPtr<UFuzzyAIComponent> Component = nullptr;
    UPROPERTY(BlueprintReadOnly, Category="Context") TObjectPtr<AActor> Observer = nullptr;
    UPROPERTY(BlueprintReadOnly, Category="Context") TObjectPtr<AActor> Target = nullptr;
    FName DebugOwner;
    FGameplayTag DebugActionId;
    FString DebugPath;
    EFuzzyAIDebugLayer DebugLayer = EFuzzyAIDebugLayer::Utility;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIInput
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input") EFuzzyAIInputSource Source = EFuzzyAIInputSource::Observation;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(Categories="Observation", EditCondition="Source == EFuzzyAIInputSource::Observation", EditConditionHides)) FGameplayTag ObservationKey;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(EditCondition="Source == EFuzzyAIInputSource::Interpretation", EditConditionHides)) FName InterpretationId;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(EditCondition="Source == EFuzzyAIInputSource::EventCount || Source == EFuzzyAIInputSource::EventRate || Source == EFuzzyAIInputSource::EventRatio", EditConditionHides)) FName EventKey;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(EditCondition="Source == EFuzzyAIInputSource::EventRatio", EditConditionHides)) FName OpportunityEventKey;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(ClampMin="0.01")) float WindowSeconds = 10.f;
    /** Filters by Source actor. Event producers must identify the actor whose behavior was observed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input") bool bEventsFromCurrentTargetOnly = true;
    /** Zero disables age rejection. Last successful observation time is used. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(ClampMin="0")) float MaxObservationAge = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input", meta=(EditCondition="Source == EFuzzyAIInputSource::Constant", EditConditionHides)) float Constant = 1.f;

    bool Read(const FFuzzyAIContext& Context, float& Value, FString* Detail = nullptr) const;
    FString Describe() const;
    bool Validate(FString& Error) const;
};

/** Default is a clamped linear ramp; optional curve uses normalized X in [0,1]. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIResponse
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Response") float InputMin = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Response") float InputMax = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Response") bool bInvert = false;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Response") bool bUseCurve = false;
    UPROPERTY(EditAnywhere, Category="Response", meta=(EditCondition="bUseCurve")) FRuntimeFloatCurve Curve;
    float Evaluate(float Value) const;
    bool Validate(FString& Error) const;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIFactor
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Factor") FFuzzyAIInput Input;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Factor") FFuzzyAIResponse Response;
    bool Evaluate(const FFuzzyAIContext& Context, float& Score) const;
};

/** Hard numeric range, also supports Boolean observations as 0/1. Unavailable inputs fail. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIRequirement
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Requirement") FFuzzyAIInput Input;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Requirement") float Minimum = 0.5f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Requirement") float Maximum = 1.f;
    bool Passes(const FFuzzyAIContext& Context) const;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIInterpretationValue
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Interpretation") FName Id;
    UPROPERTY(BlueprintReadOnly, Category="Interpretation") float Value = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Interpretation") bool bValid = false;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIActionScore
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Decision", meta=(Categories="AI.Action")) FGameplayTag ActionId;
    UPROPERTY(BlueprintReadOnly, Category="Decision") float Score = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Decision") bool bEligible = false;
    UPROPERTY(BlueprintReadOnly, Category="Decision") bool bActive = false;
    UPROPERTY(BlueprintReadOnly, Category="Decision") FString Reason;
};

namespace FuzzyAI
{
    FUZZYAIRUNTIME_API float Combine(const TArray<float>& Scores, EFuzzyAICombine Mode);
    FUZZYAIRUNTIME_API FString CombineName(EFuzzyAICombine Mode);
    FUZZYAIRUNTIME_API void Trace(const FFuzzyAIContext& Context, FFuzzyAIDebugEntry Entry);
    FUZZYAIRUNTIME_API bool IsTracing(const FFuzzyAIContext& Context);
    FUZZYAIRUNTIME_API bool IsActionId(FGameplayTag Tag);
}
