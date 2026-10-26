// Native navigation and GAS execution adapters for inline utility actions.
// Gameplay abilities retain attack mechanics, costs, replication and cancellation behavior.
#pragma once
#include "CoreMinimal.h"
#include "Utility/FuzzyAIAction.h"
#include "AITypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "FuzzyAIStandardActions.generated.h"

class AAIController;
class UPathFollowingComponent;
class UAbilitySystemComponent;
class UGameplayAbility;
struct FPathFollowingResult;
struct FAbilityEndedData;

UENUM(BlueprintType)
enum class EFuzzyAIMoveMode : uint8 { Approach, Retreat, StrafeLeft, StrafeRight };

UCLASS(DisplayName="Navigate Action")
class FUZZYAIRUNTIME_API UFuzzyAIMoveAction : public UFuzzyAIAction
{
    GENERATED_BODY()
public:
    UFuzzyAIMoveAction();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement") EFuzzyAIMoveMode Mode = EFuzzyAIMoveMode::Approach;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="1")) float MoveDistance = 600.f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="1")) float AcceptanceRadius = 75.f;
    /** Explicitly permits remembered positions; never reads a hidden target's live transform. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement") bool bAllowLastSeenLocation = false;
    virtual bool CanExecute_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool CanContinue_Implementation(const FFuzzyAIContext& Context) const override;
    virtual void Start_Implementation(const FFuzzyAIContext& Context) override;
    virtual void CleanupExecution(EFuzzyAIActionResult Result) override;
    virtual bool Validate(FString& Error) const override;
private:
    UPROPERTY(Transient) TWeakObjectPtr<UPathFollowingComponent> PathFollowing;
    FAIRequestID MoveRequest;
    FDelegateHandle MoveDelegate;
    bool GetKnownLocation(const FFuzzyAIContext& Context, FVector& Location) const;
    void HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result);
};

UCLASS(DisplayName="Gameplay Ability Action")
class FUZZYAIRUNTIME_API UFuzzyAIAbilityAction : public UFuzzyAIAction
{
    GENERATED_BODY()
public:
    UFuzzyAIAbilityAction();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability") TSubclassOf<UGameplayAbility> AbilityClass;
    /** Optional: activates this specific granted ability with event data containing Observer and Target. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability") FGameplayTag ActivationEvent;
    virtual bool CanExecute_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool CanContinue_Implementation(const FFuzzyAIContext& Context) const override;
    virtual void Start_Implementation(const FFuzzyAIContext& Context) override;
    virtual void Update_Implementation(float DeltaSeconds) override;
    virtual void CleanupExecution(EFuzzyAIActionResult Result) override;
    virtual bool Validate(FString& Error) const override;
private:
    UPROPERTY(Transient) TWeakObjectPtr<UAbilitySystemComponent> AbilitySystem;
    FGameplayAbilitySpecHandle AbilityHandle;
    FDelegateHandle EndDelegate;
    bool bIssuedActivation = false;
    void HandleAbilityEnded(const FAbilityEndedData& Data);
};
