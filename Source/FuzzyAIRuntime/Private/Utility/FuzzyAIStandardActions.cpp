// Executes navigation against known locations and activates only abilities already granted by gameplay.
// Cleanup removes owned delegates and cancels only the move request or ability started by this action.
#include "Utility/FuzzyAIStandardActions.h"
#include "Core/FuzzyAIComponent.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/GameplayAbility.h"
#include "Engine/World.h"

namespace
{
    bool TraceGate(const FFuzzyAIContext& Context, const TCHAR* Label, bool bPass, const FString& Details)
    {
        FFuzzyAIDebugEntry Entry; Entry.Kind = TEXT("Gate"); Entry.Path = Context.DebugPath + TEXT("/") + Label;
        Entry.Source = Label; Entry.Value = bPass ? 1.f : 0.f; Entry.bHasValue = true;
        Entry.State = bPass ? TEXT("Pass") : TEXT("Fail"); Entry.Details = Details;
        FuzzyAI::Trace(Context, MoveTemp(Entry));
        return bPass;
    }
    AAIController* ControllerFor(AActor* Actor)
    {
        const APawn* Pawn = Cast<APawn>(Actor);
        return Pawn ? Cast<AAIController>(Pawn->GetController()) : nullptr;
    }
}

UFuzzyAIMoveAction::UFuzzyAIMoveAction() { ActionId = FGameplayTag::RequestGameplayTag(TEXT("AI.Action.Move"), false); bRequiresTarget = true; }
bool UFuzzyAIMoveAction::GetKnownLocation(const FFuzzyAIContext& Context, FVector& Location) const
{
    if (!Context.Component || !IsValid(Context.Target)) return false;
    const auto Knowledge = Context.Component->GetTargetLocationKnowledge();
    if (Knowledge.bHasActiveLocation) { Location = Knowledge.ActiveLocation; return !Location.ContainsNaN(); }
    if (bAllowLastSeenLocation && Knowledge.bHasLastSeenLocation) { Location = Knowledge.LastSeenLocation; return !Location.ContainsNaN(); }
    return false;
}
bool UFuzzyAIMoveAction::CanExecute_Implementation(const FFuzzyAIContext& Context) const
{
    FVector Location;
    return Super::CanExecute_Implementation(Context) &&
        TraceGate(Context, TEXT("Controller"), ControllerFor(Context.Observer) != nullptr, TEXT("AI possession")) &&
        TraceGate(Context, TEXT("Location"), GetKnownLocation(Context, Location), bAllowLastSeenLocation ? TEXT("Visible or remembered") : TEXT("Visible location"));
}
bool UFuzzyAIMoveAction::CanContinue_Implementation(const FFuzzyAIContext& Context) const
{
    return Super::CanContinue_Implementation(Context) && PathFollowing.IsValid() && ControllerFor(Context.Observer);
}
void UFuzzyAIMoveAction::Start_Implementation(const FFuzzyAIContext& Context)
{
    AAIController* Controller = ControllerFor(Context.Observer);
    FVector TargetLocation;
    auto* Nav = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!Controller) { FinishAction(false, TEXT("No controller")); return; }
    if (!Nav) { FinishAction(false, TEXT("No navigation")); return; }
    if (!GetKnownLocation(Context, TargetLocation)) { FinishAction(false, TEXT("No known location")); return; }
    const FVector Origin = Context.Observer->GetActorLocation();
    FVector Away = (Origin - TargetLocation).GetSafeNormal2D();
    if (Away.IsNearlyZero()) Away = -Context.Observer->GetActorForwardVector().GetSafeNormal2D();
    FVector Destination = TargetLocation;
    if (Mode != EFuzzyAIMoveMode::Approach)
    {
        const FVector Direction = Mode == EFuzzyAIMoveMode::Retreat ? Away :
            Away.RotateAngleAxis(Mode == EFuzzyAIMoveMode::StrafeLeft ? 90.f : -90.f, FVector::UpVector);
        bool bFound = false;
        const float Angles[] = {0.f, 30.f, -30.f, 60.f, -60.f};
        for (float Angle : Angles)
        {
            const FVector Candidate = Origin + Direction.RotateAngleAxis(Angle, FVector::UpVector) * MoveDistance;
            FNavLocation Projected;
            if (!Nav->ProjectPointToNavigation(Candidate, Projected, FVector(150.f,150.f,300.f))) continue;
            if (FVector::Dist2D(Origin, Projected.Location) <= AcceptanceRadius) continue;
            if (Mode == EFuzzyAIMoveMode::Retreat && FVector::DistSquared2D(Projected.Location, TargetLocation) <= FVector::DistSquared2D(Origin, TargetLocation)) continue;
            const auto* Path = UNavigationSystemV1::FindPathToLocationSynchronously(GetWorld(), Origin, Projected.Location, Controller);
            if (!Path || !Path->IsValid() || Path->IsPartial()) continue;
            Destination = Projected.Location;
            bFound = true;
            break;
        }
        if (!bFound) { FinishAction(false, TEXT("No full path")); return; }
    }
    PathFollowing = Controller->GetPathFollowingComponent();
    if (!PathFollowing.IsValid()) { FinishAction(false, TEXT("No path follower")); return; }
    MoveRequest = FAIRequestID::InvalidRequest;
    MoveDelegate = PathFollowing->OnRequestFinished.AddUObject(this, &UFuzzyAIMoveAction::HandleMoveFinished);
    FAIMoveRequest Request(Destination);
    Request.SetAcceptanceRadius(AcceptanceRadius);
    Request.SetUsePathfinding(true);
    Request.SetAllowPartialPath(false);
    Request.SetProjectGoalLocation(true);
    const FPathFollowingRequestResult Result = Controller->MoveTo(Request);
    MoveRequest = Result.MoveId;
    ExecutionDetail = FString::Printf(TEXT("%s | Goal %s"), *StaticEnum<EFuzzyAIMoveMode>()->GetNameStringByValue(static_cast<int64>(Mode)), *Destination.ToCompactString());
    if (Result.Code == EPathFollowingRequestResult::AlreadyAtGoal) FinishAction();
    else if (Result.Code == EPathFollowingRequestResult::Failed) FinishAction(false, TEXT("Move rejected"));
}
void UFuzzyAIMoveAction::HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result)
{
    if (RequestId == MoveRequest) FinishAction(Result.IsSuccess(), Result.IsSuccess() ? TEXT("Arrived") : TEXT("Move failed"));
}
void UFuzzyAIMoveAction::CleanupExecution(EFuzzyAIActionResult Result)
{
    if (PathFollowing.IsValid())
    {
        PathFollowing->OnRequestFinished.Remove(MoveDelegate);
        if (MoveRequest.IsValid() && PathFollowing->GetCurrentRequestId() == MoveRequest)
            PathFollowing->AbortMove(*this, FPathFollowingResultFlags::OwnerFinished, MoveRequest);
    }
    MoveDelegate.Reset();
    MoveRequest = FAIRequestID::InvalidRequest;
    PathFollowing.Reset();
}
bool UFuzzyAIMoveAction::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (!FMath::IsFinite(MoveDistance) || MoveDistance <= 0.f || !FMath::IsFinite(AcceptanceRadius) || AcceptanceRadius <= 0.f)
    { Error = TEXT("Movement distance and acceptance radius must be positive and finite."); return false; }
    return true;
}

UFuzzyAIAbilityAction::UFuzzyAIAbilityAction() { ActionId = FGameplayTag::RequestGameplayTag(TEXT("AI.Action.Ability"), false); bInterruptible = false; }
bool UFuzzyAIAbilityAction::CanExecute_Implementation(const FFuzzyAIContext& Context) const
{
    if (!Super::CanExecute_Implementation(Context)) return false;
    auto* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Context.Observer);
    if (!TraceGate(Context, TEXT("ASC"), ASC && Context.Observer->HasAuthority() && ASC->AbilityActorInfo.IsValid() && ASC->AbilityActorInfo->AvatarActor.IsValid(), TEXT("Authority and actor info"))) return false;
    auto* Spec = ASC->FindAbilitySpecFromClass(AbilityClass);
    if (!TraceGate(Context, TEXT("Ability"), Spec && Spec->Ability && !Spec->IsActive(), GetNameSafe(AbilityClass.Get()))) return false;
    const UGameplayAbility* Ability = Spec->GetPrimaryInstance() ? Spec->GetPrimaryInstance() : Spec->Ability.Get();
    FGameplayTagContainer FailureTags;
    const bool bCanActivate = Ability->CanActivateAbility(Spec->Handle, ASC->AbilityActorInfo.Get(), nullptr, nullptr, &FailureTags);
    return TraceGate(Context, TEXT("Activation"), bCanActivate, FailureTags.ToStringSimple());
}
bool UFuzzyAIAbilityAction::CanContinue_Implementation(const FFuzzyAIContext& Context) const
{
    return Super::CanContinue_Implementation(Context) && AbilitySystem.IsValid();
}
void UFuzzyAIAbilityAction::Start_Implementation(const FFuzzyAIContext& Context)
{
    AbilitySystem = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Context.Observer);
    auto* ASC = AbilitySystem.Get();
    auto* Spec = ASC ? ASC->FindAbilitySpecFromClass(AbilityClass) : nullptr;
    if (!Spec || !Spec->Ability || Spec->IsActive() || !Context.Observer->HasAuthority()) { FinishAction(false, TEXT("Ability unavailable")); return; }
    ExecutionDetail = GetNameSafe(AbilityClass.Get());
    AbilityHandle = Spec->Handle;
    EndDelegate = ASC->OnAbilityEnded.AddUObject(this, &UFuzzyAIAbilityAction::HandleAbilityEnded);
    bIssuedActivation = true;
    bool bActivated;
    if (ActivationEvent.IsValid())
    {
        FGameplayEventData Payload;
        Payload.EventTag = ActivationEvent;
        Payload.Instigator = Context.Observer;
        Payload.Target = Context.Target;
        bActivated = ASC->TriggerAbilityFromGameplayEvent(AbilityHandle, ASC->AbilityActorInfo.Get(), ActivationEvent, &Payload, *ASC);
    }
    else bActivated = ASC->TryActivateAbility(AbilityHandle, false);
    if (!bActivated) { bIssuedActivation = false; FinishAction(false, TEXT("Activation rejected")); }
}
void UFuzzyAIAbilityAction::HandleAbilityEnded(const FAbilityEndedData& Data)
{
    if (Data.AbilitySpecHandle == AbilityHandle) { bIssuedActivation = false; FinishAction(!Data.bWasCancelled, Data.bWasCancelled ? TEXT("Ability cancelled") : TEXT("Ability ended")); }
}
void UFuzzyAIAbilityAction::Update_Implementation(float DeltaSeconds)
{
    auto* Spec = AbilitySystem.IsValid() ? AbilitySystem->FindAbilitySpecFromHandle(AbilityHandle) : nullptr;
    if (!Spec || !Spec->IsActive()) FinishAction(false, TEXT("Ability inactive"));
}
void UFuzzyAIAbilityAction::CleanupExecution(EFuzzyAIActionResult Result)
{
    if (AbilitySystem.IsValid())
    {
        AbilitySystem->OnAbilityEnded.Remove(EndDelegate);
        if (bIssuedActivation) AbilitySystem->CancelAbilityHandle(AbilityHandle);
    }
    bIssuedActivation = false;
    EndDelegate.Reset();
    AbilityHandle = FGameplayAbilitySpecHandle();
    AbilitySystem.Reset();
}
bool UFuzzyAIAbilityAction::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (!AbilityClass) { Error = TEXT("Ability action needs an already-granted AbilityClass."); return false; }
    return true;
}
