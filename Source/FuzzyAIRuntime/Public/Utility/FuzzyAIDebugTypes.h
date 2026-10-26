// Numeric traces are captured during real evaluation and read passively by editor tools.
// Bounded snapshots contain no strong actor references and never execute gameplay callbacks.
#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FuzzyAIDebugTypes.generated.h"

UENUM(BlueprintType)
enum class EFuzzyAIDebugLayer : uint8 { Fuzzy, Utility, Execution };

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIDebugEntry
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Debug") EFuzzyAIDebugLayer Layer = EFuzzyAIDebugLayer::Utility;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FName Owner;
    UPROPERTY(BlueprintReadOnly, Category="Debug", meta=(Categories="AI.Action")) FGameplayTag ActionId;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Path;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Kind;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Source;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString State;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Details;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Input = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Normalized = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Value = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Weight = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bHasInput = false;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bHasNormalized = false;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bHasValue = false;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bHasWeight = false;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bValid = true;
    UPROPERTY(BlueprintReadOnly, Category="Debug") TArray<FVector2D> Curve;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIExecutionDebug
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Debug", meta=(Categories="AI.Action")) FGameplayTag ActionId;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Phase;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Target;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Details;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Elapsed = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Remaining = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") float Cooldown = 0.f;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bInterruptible = false;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIExecutionEvent
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Debug", meta=(Categories="AI.Action")) FGameplayTag ActionId;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Event;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Details;
    UPROPERTY(BlueprintReadOnly, Category="Debug") double Time = 0.;
};

USTRUCT(BlueprintType)
struct FUZZYAIRUNTIME_API FFuzzyAIDecisionDebugSnapshot
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly, Category="Debug") TArray<FFuzzyAIDebugEntry> Entries;
    UPROPERTY(BlueprintReadOnly, Category="Debug") TArray<FFuzzyAIExecutionDebug> Executions;
    UPROPERTY(BlueprintReadOnly, Category="Debug") TArray<FFuzzyAIExecutionEvent> History;
    UPROPERTY(BlueprintReadOnly, Category="Debug") FString Selection;
    UPROPERTY(BlueprintReadOnly, Category="Debug") double EvaluationTime = -1.;
    UPROPERTY(BlueprintReadOnly, Category="Debug") int32 DroppedEntries = 0;
    UPROPERTY(BlueprintReadOnly, Category="Debug") bool bCaptureEnabled = false;
};
