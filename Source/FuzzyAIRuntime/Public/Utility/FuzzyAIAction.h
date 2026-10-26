// Per-enemy actions separate pure eligibility/scoring from gameplay execution and cleanup.
// Completion is queued for the decision loop, preventing synchronous callbacks from recursively selecting actions.
#pragma once
#include "CoreMinimal.h"
#include "Utility/FuzzyAITypes.h"
#include "FuzzyAIAction.generated.h"

class UFuzzyAIConsideration;
class UFuzzyAIDecisionRuntime;

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class FUZZYAIRUNTIME_API UFuzzyAIAction : public UObject
{
    GENERATED_BODY()
public:
    /** Exact identity within one enemy's action list; independent of GAS state/event tags. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Action", meta=(Categories="AI.Action")) FGameplayTag ActionId;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Action") bool bEnabled = true;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Eligibility") bool bRequiresTarget = false;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Eligibility") TArray<FFuzzyAIRequirement> Requirements;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Eligibility") FGameplayTagContainer RequiredOwnerTags;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Eligibility") FGameplayTagContainer BlockedOwnerTags;
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category="Scoring") TArray<TObjectPtr<UFuzzyAIConsideration>> Considerations;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Scoring") EFuzzyAICombine Combine = EFuzzyAICombine::Product;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Scoring", meta=(ClampMin="0", ClampMax="1")) float BaseScore = 1.f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution") bool bInterruptible = true;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution") bool bCancelOnTargetChange = true;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution") bool bAbortWhenRequirementsFail = true;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution", meta=(ClampMin="0")) float MinimumRunTime = 0.3f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution", meta=(ClampMin="0.01")) float Timeout = 10.f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution", meta=(ClampMin="0")) float Cooldown = 0.25f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Execution", meta=(ClampMin="0")) float FailureCooldown = 1.f;

    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") bool CanExecute(const FFuzzyAIContext& Context) const;
    virtual bool CanExecute_Implementation(const FFuzzyAIContext& Context) const;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") bool CanContinue(const FFuzzyAIContext& Context) const;
    virtual bool CanContinue_Implementation(const FFuzzyAIContext& Context) const;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") float EvaluateScore(const FFuzzyAIContext& Context) const;
    virtual float EvaluateScore_Implementation(const FFuzzyAIContext& Context) const;
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") void Start(const FFuzzyAIContext& Context);
    virtual void Start_Implementation(const FFuzzyAIContext& Context);
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") void Update(float DeltaSeconds);
    virtual void Update_Implementation(float DeltaSeconds);
    UFUNCTION(BlueprintNativeEvent, Category="Fuzzy AI|Action") void End(EFuzzyAIActionResult Result);
    virtual void End_Implementation(EFuzzyAIActionResult Result);
    UFUNCTION(BlueprintCallable, Category="Fuzzy AI|Action") void FinishAction(bool bSucceeded = true, const FString& Reason = TEXT(""));
    UFUNCTION(BlueprintPure, Category="Fuzzy AI|Action") bool IsActionActive() const { return bActive && !bFinished; }
    UFUNCTION(BlueprintPure, Category="Fuzzy AI|Action") FFuzzyAIContext GetActionContext() const;
    virtual UWorld* GetWorld() const override;
    virtual bool Validate(FString& Error) const;
    bool MeetsRequirements(const FFuzzyAIContext& Context) const;
    /** Native adapter cleanup cannot be bypassed by a Blueprint End override. */
    virtual void CleanupExecution(EFuzzyAIActionResult Result) {}
protected:
    FString ExecutionDetail;

private:
    friend class UFuzzyAIDecisionRuntime;
    UPROPERTY(Transient) TWeakObjectPtr<UFuzzyAIComponent> Component;
    UPROPERTY(Transient) TWeakObjectPtr<AActor> StartTarget;
    bool bActive = false;
    bool bFinished = false;
    EFuzzyAIActionResult PendingResult = EFuzzyAIActionResult::Failed;
    double StartedAt = 0.;
    double ReadyAt = 0.;
};

UCLASS(DisplayName="Wait Action")
class FUZZYAIRUNTIME_API UFuzzyAIWaitAction : public UFuzzyAIAction
{
    GENERATED_BODY()
public:
    UFuzzyAIWaitAction();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Wait", meta=(ClampMin="0")) float Duration = 1.f;
    virtual void Start_Implementation(const FFuzzyAIContext& Context) override;
    virtual void Update_Implementation(float DeltaSeconds) override;
    virtual bool Validate(FString& Error) const override;
private:
    double FinishAt = 0.;
};
