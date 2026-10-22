#pragma once

#include "CoreMinimal.h"
#include "Core/FuzzyAITypes.h"
#include "GameplayTagContainer.h"
#include "FuzzyActionExecutor.generated.h"

/** Future game adapter. Runtime instances belong to one enemy; never place live tasks on shared assets. */
UCLASS(BlueprintType, Blueprintable)
class FUZZYAIRUNTIME_API UFuzzyActionExecutor : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Execution")
    FFuzzyAIStageResult ExecuteAction(const FFuzzyAIDecisionContext& Context, FGameplayTag ActionTag);
    virtual FFuzzyAIStageResult ExecuteAction_Implementation(const FFuzzyAIDecisionContext& Context, FGameplayTag ActionTag);

    /** Future adapters must synchronously release subscriptions/tasks on cancel or owner teardown. */
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Execution")
    void CancelAction();
    virtual void CancelAction_Implementation();
};
