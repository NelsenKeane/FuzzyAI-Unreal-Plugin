// Editor-only abilities exercise synchronous completion and cancellation of native action adapters.
// These transient test types are never granted to production actors or saved in Content.
#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AttributeSet.h"
#include "Utility/FuzzyAIConsideration.h"
#include "Utility/FuzzyAIAction.h"
#include "FuzzyAIUtilityTestTypes.generated.h"

UCLASS()
class UFuzzyAIUtilityTestAbility : public UGameplayAbility
{
    GENERATED_BODY()
public:
    UFuzzyAIUtilityTestAbility();
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};

UCLASS()
class UFuzzyAIUtilityInstantTestAbility : public UFuzzyAIUtilityTestAbility
{
    GENERATED_BODY()
public:
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};

UCLASS()
class UFuzzyAIUtilityTestAttributes : public UAttributeSet
{
    GENERATED_BODY()
public:
    UPROPERTY() FGameplayAttributeData Health;
    UPROPERTY() FGameplayAttributeData Maximum;
};

UCLASS()
class UFuzzyAIDebugCountingConsideration : public UFuzzyAIConsideration
{
    GENERATED_BODY()
public:
    mutable int32 Calls = 0;
    virtual float EvaluateContext_Implementation(const FFuzzyAIContext& Context) const override;
};

UCLASS()
class UFuzzyAIActionTagTestReceiver : public UObject
{
    GENERATED_BODY()
public:
    FGameplayTag StartedId;
    FGameplayTag FinishedId;
    EFuzzyAIActionResult FinishedResult = EFuzzyAIActionResult::Failed;
    UFUNCTION() void Started(FGameplayTag ActionId) { StartedId = ActionId; }
    UFUNCTION() void Finished(FGameplayTag ActionId, EFuzzyAIActionResult Result)
    { FinishedId = ActionId; FinishedResult = Result; }
};
