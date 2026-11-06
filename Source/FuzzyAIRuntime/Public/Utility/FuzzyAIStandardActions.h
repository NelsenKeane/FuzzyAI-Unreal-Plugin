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
class UAnimMontage;
class UCharacterMovementComponent;
struct FPathFollowingResult;
struct FAbilityEndedData;
struct FGameplayAbilitySpec;

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
    /** Keep approach active at arrival and refresh its goal from permitted knowledge. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement") bool bContinuousApproach = false;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="0.05", EditCondition="bContinuousApproach")) float RepathInterval = 0.2f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="1", EditCondition="bContinuousApproach")) float RepathDistance = 75.f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="0.01", EditCondition="bAllowLastSeenLocation")) float MaxLastSeenAge = 3.f;
    /** Sweep the view at the remembered location until current sight returns or memory expires. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(EditCondition="bContinuousApproach && bAllowLastSeenLocation && bFaceKnownTarget"))
    bool bScanAtLastSeenLocation = false;
    /** Stop visible pursuit inside this distance. Remembered search still uses the acceptance radius. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="0", EditCondition="bContinuousApproach"))
    float StopApproachWithin = 0.f;
    /** Yield after this many seconds of visible approach so the next decision can choose a different action. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement", meta=(ClampMin="0", EditCondition="bContinuousApproach"))
    float ApproachDecisionSeconds = 0.f;
    /** Faces a known point, with scoped character rotation settings; never a hidden actor. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Movement") bool bFaceKnownTarget = false;
    virtual bool CanExecute_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool CanContinue_Implementation(const FFuzzyAIContext& Context) const override;
    virtual void Start_Implementation(const FFuzzyAIContext& Context) override;
    virtual void Update_Implementation(float DeltaSeconds) override;
    virtual void CleanupExecution(EFuzzyAIActionResult Result) override;
    virtual bool Validate(FString& Error) const override;
    virtual bool HasExecutionTimeout() const override { return !(IsContinuous() && bScanAtLastSeenLocation); }
private:
    UPROPERTY(Transient) TWeakObjectPtr<UPathFollowingComponent> PathFollowing;
    FAIRequestID MoveRequest;
    FDelegateHandle MoveDelegate;
    UPROPERTY(Transient) TWeakObjectPtr<AAIController> MoveController;
    UPROPERTY(Transient) TWeakObjectPtr<UCharacterMovementComponent> FacingMovement;
    FVector LastGoal = FVector::ZeroVector;
    FVector OwnedFocus = FVector::ZeroVector;
    double LastRepathTime = 0.;
    double ApproachDecisionTime = 0.;
    double ScanStartedAt = -1.;
    FVector ScanHeading = FVector::ForwardVector;
    bool bHoldingGoal = false;
    bool bOwnsFocus = false;
    bool bPreviousOrientToMovement = false;
    bool bPreviousControllerRotation = false;
    bool GetKnownLocation(const FFuzzyAIContext& Context, FVector& Location, bool* bRemembered = nullptr) const;
    bool IsContinuous() const { return bContinuousApproach && Mode == EFuzzyAIMoveMode::Approach; }
    void IssueMove(const FVector& Destination);
    void UpdateFacing(const FVector& Location);
    void HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result);
};

UCLASS(DisplayName="Gameplay Ability Action")
class FUZZYAIRUNTIME_API UFuzzyAIAbilityAction : public UFuzzyAIAction
{
    GENERATED_BODY()
public:
    UFuzzyAIAbilityAction();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability") TSubclassOf<UGameplayAbility> AbilityClass;
    /** When set, choose uniformly among eligible grants of AbilityClass and these variants on each start. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability") TArray<TSubclassOf<UGameplayAbility>> AbilityVariants;
    /** Optional: activates this specific granted ability with event data containing Observer and Target. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability") FGameplayTag ActivationEvent;
    /** For light attacks, send one continue request per montage during its authored combo window. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability", meta=(ClampMin="0"))
    int32 MaxComboFollowUps = 0;
    virtual bool CanExecute_Implementation(const FFuzzyAIContext& Context) const override;
    virtual bool CanContinue_Implementation(const FFuzzyAIContext& Context) const override;
    virtual void Start_Implementation(const FFuzzyAIContext& Context) override;
    virtual void Update_Implementation(float DeltaSeconds) override;
    virtual void CleanupExecution(EFuzzyAIActionResult Result) override;
    virtual bool Validate(FString& Error) const override;
private:
    FGameplayAbilitySpec* FindActivatableSpec(UAbilitySystemComponent& ASC, TSubclassOf<UGameplayAbility> Class,
        const FFuzzyAIContext& Context) const;
    UPROPERTY(Transient) TWeakObjectPtr<UAbilitySystemComponent> AbilitySystem;
    FGameplayAbilitySpecHandle AbilityHandle;
    FDelegateHandle EndDelegate;
    bool bIssuedActivation = false;
    int32 ComboFollowUps = 0;
    TWeakObjectPtr<UAnimMontage> LastContinuedMontage;
    void HandleAbilityEnded(const FAbilityEndedData& Data);
};
