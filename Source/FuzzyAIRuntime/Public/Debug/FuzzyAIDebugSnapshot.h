#pragma once

#include "CoreMinimal.h"
#include "Utility/FuzzyUtilityTypes.h"
#include "FuzzyAIDebugSnapshot.generated.h"

/** Read-only diagnostic copy. Rendering and editor tabs belong in FuzzyAIEditor. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIDebugSnapshot
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIDecisionContext Evidence;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIProfileSnapshot Profile;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIInterpretationSnapshot Interpretation;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIUtilityDecision Decision;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIStageResult ProfileStage;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIStageResult InterpretationStage;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIStageResult UtilityStage;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI|Debug")
    FFuzzyAIStageResult ExecutionStage;
};
