// Inline scoring policies for known inputs and weighted uncertain values.
// Context scoring supports interpretations; store-only scoring remains a Blueprint extension point.
#pragma once
#include "CoreMinimal.h"
#include "Utility/FuzzyAITypes.h"
#include "FuzzyAIConsideration.generated.h"

class UFuzzyObservationStore;

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class FUZZYAIRUNTIME_API UFuzzyAIConsideration : public UObject
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Utility") float Evaluate(const UFuzzyObservationStore* Store) const;
    virtual float Evaluate_Implementation(const UFuzzyObservationStore* Store) const;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Utility") float EvaluateContext(const FFuzzyAIContext& Context) const;
    virtual float EvaluateContext_Implementation(const FFuzzyAIContext& Context) const;
    virtual bool Validate(FString& Error) const { return true; }
};

UCLASS(DisplayName="Observation / Interpretation Curve")
class FUZZYAIRUNTIME_API UFuzzyAIInputConsideration : public UFuzzyAIConsideration
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Scoring") FFuzzyAIFactor Factor;
    virtual float EvaluateContext_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool Validate(FString& Error) const override;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIWeightedSample
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sample") float Value = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Sample", meta=(ClampMin="0")) float Weight = 1.f;
};

/** Implements discrete Eq.7. Override GetSamples to supply a changing belief distribution. */
UCLASS(DisplayName="Uncertain Input Utility")
class FUZZYAIRUNTIME_API UFuzzyAIUncertainConsideration : public UFuzzyAIConsideration
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Scoring") FFuzzyAIResponse UtilityResponse;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Uncertainty") TArray<FFuzzyAIWeightedSample> Samples;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Utility") TArray<FFuzzyAIWeightedSample> GetSamples(const FFuzzyAIContext& Context) const;
    virtual TArray<FFuzzyAIWeightedSample> GetSamples_Implementation(const FFuzzyAIContext& Context) const;
    virtual float EvaluateContext_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool Validate(FString& Error) const override;
};