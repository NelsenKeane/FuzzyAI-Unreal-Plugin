#pragma once

#include "CoreMinimal.h"
#include "Core/FuzzyAITypes.h"
#include "Profiling/FuzzyProfileTypes.h"
#include "Interpretation/FuzzyInterpretationTypes.h"
#include "FuzzyUtilityTypes.generated.h"

class UFuzzyUtilityAction;

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIUtilityContext
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    FFuzzyAIDecisionContext Evidence;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    FFuzzyAIProfileSnapshot Profile;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    FFuzzyAIInterpretationSnapshot Interpretation;
};

/** Availability is a hard gate; a zero score must not be used to represent unknown evidence. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIUtilityValue
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    bool bIsValid = false;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    bool bEligible = false;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    float Score = 0.f;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIActionScore
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    TObjectPtr<UFuzzyUtilityAction> Action = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    FFuzzyAIUtilityValue Value;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIUtilityDecision
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    TObjectPtr<UFuzzyUtilityAction> SelectedAction = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Utility")
    TArray<FFuzzyAIActionScore> Scores;
};
