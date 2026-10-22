#pragma once

#include "CoreMinimal.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "FuzzyAITypes.generated.h"

UENUM(BlueprintType)
enum class EFuzzyAIStageStatus : uint8
{
    NotRun,
    NotReady,
    NotConfigured,
    NotImplemented,
    Succeeded,
    Failed
};

/** An empty result is not a successful evaluation or a score of zero. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIStageResult
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    EFuzzyAIStageStatus Status = EFuzzyAIStageStatus::NotRun;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    FString Message;

    static FFuzzyAIStageResult Make(EFuzzyAIStageStatus Status, const FString& Message);
};

/** Local evidence captured by the coordinator. Later layers must not read hidden target state. */
USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIDecisionContext
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    TWeakObjectPtr<AActor> Observer;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    TWeakObjectPtr<AActor> Target;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    bool bTargetVisible = false;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    double CapturedAt = -1.;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    TArray<FFuzzyAIObservationRecord> Observations;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    TArray<FFuzzyAIRememberedObservation> Memories;

    UPROPERTY(BlueprintReadOnly, Category = "Fuzzy AI")
    TArray<FFuzzyAIObservedEvent> Events;
};
