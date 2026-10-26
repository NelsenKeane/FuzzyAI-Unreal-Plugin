// Optional per-enemy interpretations derive estimates from facts and event history.
// Native fuzzy rules use zero-order Sugeno inference with explicit missing-evidence handling.
#pragma once
#include "CoreMinimal.h"
#include "Utility/FuzzyAITypes.h"
#include "FuzzyAIInterpretation.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class FUZZYAIRUNTIME_API UFuzzyAIInterpretation : public UObject
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Interpretation") FName InterpretationId;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Interpretation") bool Evaluate(const FFuzzyAIContext& Context, float& Value) const;
    virtual bool Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const;
    virtual bool Validate(FString& Error) const;
    virtual void GetInputs(TArray<FFuzzyAIInput>& Inputs) const {}
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIRule
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rule") TArray<FFuzzyAIFactor> Conditions;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rule") EFuzzyAICombine Combine = EFuzzyAICombine::Minimum;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rule", meta=(ClampMin="0", ClampMax="1")) float Consequent = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Rule", meta=(ClampMin="0", ClampMax="1")) float Weight = 1.f;
};

UCLASS(DisplayName="Fuzzy Rule Interpretation")
class FUZZYAIRUNTIME_API UFuzzyAIRuleInterpretation : public UFuzzyAIInterpretation
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Rules") TArray<FFuzzyAIRule> Rules;
    virtual bool Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const override;
    virtual bool Validate(FString& Error) const override;
    virtual void GetInputs(TArray<FFuzzyAIInput>& Inputs) const override;
};

UCLASS(DisplayName="Input Curve Interpretation")
class FUZZYAIRUNTIME_API UFuzzyAIInputInterpretation : public UFuzzyAIInterpretation
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Interpretation") FFuzzyAIFactor Factor;
    virtual bool Evaluate_Implementation(const FFuzzyAIContext& Context, float& Value) const override;
    virtual bool Validate(FString& Error) const override;
    virtual void GetInputs(TArray<FFuzzyAIInput>& Inputs) const override { Inputs.Add(Factor.Input); }
};
