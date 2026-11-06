// Optional shared authoring asset; its inline definitions are copied into each enemy at startup.
// Runtime selection state never lives on the shared profile.
#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Utility/FuzzyAIAction.h"
#include "Utility/FuzzyAIInterpretation.h"
#include "FuzzyAIDecisionProfile.generated.h"

UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyAIDecisionProfile : public UDataAsset
{
    GENERATED_BODY()
public:
    /** Draw from eligible actions using utility score multiplied by each action's selection weight. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Fuzzy AI|Decision")
    bool bWeightedActionSelection = false;
    /** After initial sight, trace in any direction and remember an occluded target for this many seconds. Zero disables tracking. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Fuzzy AI|Sight", meta=(ClampMin="0"))
    float OccludedTargetRetention = 0.f;
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category="Fuzzy AI") TArray<TObjectPtr<UFuzzyAIInterpretation>> Interpretations;
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category="Fuzzy AI") TArray<TObjectPtr<UFuzzyAIAction>> Actions;
};
