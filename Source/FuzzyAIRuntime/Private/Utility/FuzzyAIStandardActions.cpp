// Executes navigation against known locations and activates only abilities already granted by gameplay.
// Cleanup removes owned delegates and cancels only the move request or ability started by this action.
#include "Utility/FuzzyAIStandardActions.h"
#include "Core/FuzzyAIComponent.h"
#include "AIController.h"
#include "AISystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/GameplayAbility.h"
#include "Animation/AnimMontage.h"
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
bool UFuzzyAIMoveAction::GetKnownLocation(const FFuzzyAIContext& Context, FVector& Location, bool* bRemembered) const
{
    if (!Context.Component || !IsValid(Context.Target)) return false;
    const auto Knowledge = Context.Component->GetTargetLocationKnowledge();
    if (bRemembered) *bRemembered = !Knowledge.bHasActiveLocation;
    if (Knowledge.bHasActiveLocation)
    {
        Location = Knowledge.ActiveLocation;
        return !Location.ContainsNaN() && (!IsContinuous() || StopApproachWithin <= 0.f ||
            FVector::Dist2D(Context.Observer->GetActorLocation(), Location) > StopApproachWithin);
    }
    if (bAllowLastSeenLocation && Knowledge.bHasLastSeenLocation && Knowledge.LastSeenAge <= MaxLastSeenAge) { Location = Knowledge.LastSeenLocation; return !Location.ContainsNaN(); }
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
    FVector Location;
    return Super::CanContinue_Implementation(Context) && PathFollowing.IsValid() && ControllerFor(Context.Observer) &&
        (!(IsContinuous() || bFaceKnownTarget) || GetKnownLocation(Context, Location));
}
void UFuzzyAIMoveAction::Start_Implementation(const FFuzzyAIContext& Context)
{
    AAIController* Controller = ControllerFor(Context.Observer);
    FVector TargetLocation;
    if (!Controller) { FinishAction(false, TEXT("No controller")); return; }
    if (!GetKnownLocation(Context, TargetLocation)) { FinishAction(false, TEXT("No known location")); return; }
    MoveController = Controller;
    PathFollowing = Controller->GetPathFollowingComponent();
    if (!PathFollowing.IsValid()) { FinishAction(false, TEXT("No path follower")); return; }
    MoveRequest = FAIRequestID::InvalidRequest;
    bHoldingGoal = false;
    ScanStartedAt = -1.;
    ApproachDecisionTime = GetWorld()->GetTimeSeconds() + ApproachDecisionSeconds;
    bOwnsFocus = false;
    MoveDelegate = PathFollowing->OnRequestFinished.AddUObject(this, &UFuzzyAIMoveAction::HandleMoveFinished);
    UpdateFacing(TargetLocation);
    const FVector Origin = Context.Observer->GetActorLocation();
    if (IsContinuous() && FVector::Dist2D(Origin, TargetLocation) <= AcceptanceRadius)
    {
        LastGoal = TargetLocation;
        LastRepathTime = GetWorld()->GetTimeSeconds();
        bHoldingGoal = true;
        ExecutionDetail = TEXT("In range");
        return;
    }
    auto* Nav = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    if (!Nav) { FinishAction(false, TEXT("No navigation")); return; }
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
    IssueMove(Destination);
}
void UFuzzyAIMoveAction::IssueMove(const FVector& Destination)
{
    if (!MoveController.IsValid() || !PathFollowing.IsValid()) { FinishAction(false, TEXT("No controller")); return; }
    // MoveTo can synchronously abort the previous request. Ignore that obsolete callback.
    MoveRequest = FAIRequestID::InvalidRequest;
    FAIMoveRequest Request(Destination);
    Request.SetAcceptanceRadius(AcceptanceRadius);
    Request.SetUsePathfinding(true);
    Request.SetAllowPartialPath(false);
    Request.SetProjectGoalLocation(true);
    LastGoal = Destination;
    LastRepathTime = GetWorld()->GetTimeSeconds();
    const FPathFollowingRequestResult Result = MoveController->MoveTo(Request);
    bHoldingGoal = Result.Code == EPathFollowingRequestResult::AlreadyAtGoal;
    MoveRequest = Result.Code == EPathFollowingRequestResult::RequestSuccessful ? Result.MoveId : FAIRequestID::InvalidRequest;
    ExecutionDetail = FString::Printf(TEXT("%s | Goal %s"), *StaticEnum<EFuzzyAIMoveMode>()->GetNameStringByValue(static_cast<int64>(Mode)), *Destination.ToCompactString());
    if (bHoldingGoal)
    {
        ExecutionDetail = TEXT("In range");
        if (!IsContinuous()) FinishAction();
    }
    else if (Result.Code == EPathFollowingRequestResult::Failed) FinishAction(false, TEXT("Move rejected"));
}
void UFuzzyAIMoveAction::Update_Implementation(float DeltaSeconds)
{
    if (!IsContinuous() && !bFaceKnownTarget) return;
    const FFuzzyAIContext Context = GetActionContext();
    FVector Location;
    bool bRemembered = false;
    if (!GetKnownLocation(Context, Location, &bRemembered)) { FinishAction(false, TEXT("Known location expired")); return; }
    const double Time = GetWorld()->GetTimeSeconds();
    if (IsContinuous() && !bRemembered && ApproachDecisionSeconds > 0.f && Time >= ApproachDecisionTime)
    {
        FinishAction(true, TEXT("Approach decision window complete"));
        return;
    }
    const float Distance = FVector::Dist2D(Context.Observer->GetActorLocation(), Location);
    if (bScanAtLastSeenLocation && bRemembered && bHoldingGoal && Distance <= AcceptanceRadius + 50.f)
    {
        if (ScanStartedAt < 0.)
        {
            ScanStartedAt = Time;
            ScanHeading = Context.Observer->GetActorForwardVector().GetSafeNormal2D();
            ExecutionDetail = TEXT("Scanning last seen location");
        }
        const float Angle = 95.f * FMath::Sin((Time - ScanStartedAt) * 2.1);
        const FVector Direction = ScanHeading.RotateAngleAxis(Angle, FVector::UpVector);
        UpdateFacing(Context.Observer->GetActorLocation() + Direction * 500.f);
        return;
    }
    ScanStartedAt = -1.;
    UpdateFacing(Location);
    if (!IsContinuous() || Time - LastRepathTime < RepathInterval) return;
    if (bHoldingGoal && Distance <= AcceptanceRadius + 50.f) return;
    if (!bHoldingGoal && FVector::DistSquared2D(Location, LastGoal) < FMath::Square(RepathDistance)) return;
    if (!FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld())) { FinishAction(false, TEXT("No navigation")); return; }
    IssueMove(Location);
}
void UFuzzyAIMoveAction::UpdateFacing(const FVector& Location)
{
    if (!bFaceKnownTarget || !MoveController.IsValid()) return;
    AAIController* Controller = MoveController.Get();
    const FVector Current = Controller->GetFocalPointForPriority(EAIFocusPriority::Gameplay);
    // Existing ability/controller focus takes precedence. Clear only our unchanged point.
    if (Controller->GetFocusActorForPriority(EAIFocusPriority::Gameplay) ||
        (FAISystem::IsValidLocation(Current) && (!bOwnsFocus || !Current.Equals(OwnedFocus, 1.f)))) return;
    if (!FacingMovement.IsValid())
    {
        if (APawn* Pawn = Controller->GetPawn())
        {
            FacingMovement = Cast<UCharacterMovementComponent>(Pawn->GetMovementComponent());
            if (FacingMovement.IsValid())
            {
                bPreviousOrientToMovement = FacingMovement->bOrientRotationToMovement;
                bPreviousControllerRotation = FacingMovement->bUseControllerDesiredRotation;
                FacingMovement->bOrientRotationToMovement = false;
                FacingMovement->bUseControllerDesiredRotation = true;
            }
        }
    }
    OwnedFocus = Location;
    bOwnsFocus = true;
    Controller->SetFocalPoint(Location, EAIFocusPriority::Gameplay);
}
void UFuzzyAIMoveAction::HandleMoveFinished(FAIRequestID RequestId, const FPathFollowingResult& Result)
{
    if (RequestId != MoveRequest || !MoveRequest.IsValid()) return;
    MoveRequest = FAIRequestID::InvalidRequest;
    if (Result.IsSuccess() && IsContinuous()) { bHoldingGoal = true; ExecutionDetail = TEXT("In range"); }
    else FinishAction(Result.IsSuccess(), Result.IsSuccess() ? TEXT("Arrived") : TEXT("Move failed"));
}
void UFuzzyAIMoveAction::CleanupExecution(EFuzzyAIActionResult Result)
{
    if (PathFollowing.IsValid())
    {
        PathFollowing->OnRequestFinished.Remove(MoveDelegate);
        if (MoveRequest.IsValid() && PathFollowing->GetCurrentRequestId() == MoveRequest)
            PathFollowing->AbortMove(*this, FPathFollowingResultFlags::OwnerFinished, MoveRequest);
    }
    if (MoveController.IsValid() && bOwnsFocus && !MoveController->GetFocusActorForPriority(EAIFocusPriority::Gameplay) &&
        MoveController->GetFocalPointForPriority(EAIFocusPriority::Gameplay).Equals(OwnedFocus, 1.f))
        MoveController->ClearFocus(EAIFocusPriority::Gameplay);
    if (FacingMovement.IsValid() && !FacingMovement->bOrientRotationToMovement && FacingMovement->bUseControllerDesiredRotation)
    {
        FacingMovement->bOrientRotationToMovement = bPreviousOrientToMovement;
        FacingMovement->bUseControllerDesiredRotation = bPreviousControllerRotation;
    }
    bOwnsFocus = false;
    bHoldingGoal = false;
    FacingMovement.Reset();
    MoveController.Reset();
    MoveDelegate.Reset();
    MoveRequest = FAIRequestID::InvalidRequest;
    PathFollowing.Reset();
}
bool UFuzzyAIMoveAction::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (!FMath::IsFinite(RepathInterval) || RepathInterval < 0.05f || !FMath::IsFinite(RepathDistance) || RepathDistance < 1.f ||
        !FMath::IsFinite(MaxLastSeenAge) || MaxLastSeenAge <= 0.f)
    { Error = TEXT("Repath interval >= 0.05; goal distance >= 1; memory age > 0; all finite."); return false; }
    if (!FMath::IsFinite(MoveDistance) || MoveDistance <= 0.f || !FMath::IsFinite(AcceptanceRadius) || AcceptanceRadius <= 0.f)
    { Error = TEXT("Movement distance and acceptance radius must be positive and finite."); return false; }
    if (bScanAtLastSeenLocation && (!IsContinuous() || !bAllowLastSeenLocation || !bFaceKnownTarget))
    { Error = TEXT("Scanning requires continuous approach, last-seen navigation and target facing."); return false; }
    if (!FMath::IsFinite(StopApproachWithin) || StopApproachWithin < 0.f ||
        !FMath::IsFinite(ApproachDecisionSeconds) || ApproachDecisionSeconds < 0.f)
    { Error = TEXT("Approach stop distance and decision window must be finite and nonnegative."); return false; }
    return true;
}

UFuzzyAIAbilityAction::UFuzzyAIAbilityAction() { ActionId = FGameplayTag::RequestGameplayTag(TEXT("AI.Action.Ability"), false); bInterruptible = false; }
bool UFuzzyAIAbilityAction::CanExecute_Implementation(const FFuzzyAIContext& Context) const
{
    if (!Super::CanExecute_Implementation(Context)) return false;
    auto* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Context.Observer);
    if (!TraceGate(Context, TEXT("ASC"), ASC && Context.Observer->HasAuthority() && ASC->AbilityActorInfo.IsValid() && ASC->AbilityActorInfo->AvatarActor.IsValid(), TEXT("Authority and actor info"))) return false;
    if (FindActivatableSpec(*ASC, AbilityClass, Context)) return true;
    for (const auto& Class : AbilityVariants)
        if (FindActivatableSpec(*ASC, Class, Context)) return true;
    return false;
}
FGameplayAbilitySpec* UFuzzyAIAbilityAction::FindActivatableSpec(UAbilitySystemComponent& ASC,
    TSubclassOf<UGameplayAbility> Class, const FFuzzyAIContext& Context) const
{
    auto* Spec = ASC.FindAbilitySpecFromClass(Class);
    if (!TraceGate(Context, TEXT("Ability"), Spec && Spec->Ability && !Spec->IsActive(), GetNameSafe(Class.Get()))) return nullptr;
    const UGameplayAbility* Ability = Spec->GetPrimaryInstance() ? Spec->GetPrimaryInstance() : Spec->Ability.Get();
    FGameplayTagContainer FailureTags;
    const bool bCanActivate = Ability->CanActivateAbility(Spec->Handle, ASC.AbilityActorInfo.Get(), nullptr, nullptr, &FailureTags);
    return TraceGate(Context, TEXT("Activation"), bCanActivate, FailureTags.ToStringSimple()) ? Spec : nullptr;
}
bool UFuzzyAIAbilityAction::CanContinue_Implementation(const FFuzzyAIContext& Context) const
{
    return Super::CanContinue_Implementation(Context) && AbilitySystem.IsValid();
}
void UFuzzyAIAbilityAction::Start_Implementation(const FFuzzyAIContext& Context)
{
    AbilitySystem = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Context.Observer);
    auto* ASC = AbilitySystem.Get();
    if (!ASC || !Context.Observer->HasAuthority() || !ASC->AbilityActorInfo.IsValid())
    { FinishAction(false, TEXT("Ability unavailable")); return; }
    auto* Spec = ASC->FindAbilitySpecFromClass(AbilityClass);
    if (!AbilityVariants.IsEmpty())
    {
        TArray<FGameplayAbilitySpecHandle, TInlineAllocator<8>> Eligible;
        if (const auto* Candidate = FindActivatableSpec(*ASC, AbilityClass, Context)) Eligible.Add(Candidate->Handle);
        for (const auto& Class : AbilityVariants)
            if (const auto* Candidate = FindActivatableSpec(*ASC, Class, Context)) Eligible.AddUnique(Candidate->Handle);
        Spec = Eligible.IsEmpty() ? nullptr : ASC->FindAbilitySpecFromHandle(Eligible[FMath::RandHelper(Eligible.Num())]);
    }
    if (!Spec || !Spec->Ability || Spec->IsActive()) { FinishAction(false, TEXT("Ability unavailable")); return; }
    ExecutionDetail = GetNameSafe(Spec->Ability->GetClass());
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
    auto* ASC = AbilitySystem.Get();
    auto* Spec = ASC ? ASC->FindAbilitySpecFromHandle(AbilityHandle) : nullptr;
    if (!Spec || !Spec->IsActive())
    {
        FinishAction(false, TEXT("Ability inactive"));
        return;
    }
    if (ComboFollowUps >= MaxComboFollowUps) return;
    const FGameplayTag Window = FGameplayTag::RequestGameplayTag(TEXT("Event.LightAttackWindowOpen"), false);
    const FGameplayTag Continue = FGameplayTag::RequestGameplayTag(TEXT("Event.ContinueCombo"), false);
    if (!Window.IsValid() || !Continue.IsValid() || !ASC->HasMatchingGameplayTag(Window)) return;

    const FFuzzyAIContext Context = GetActionContext();
    UAnimMontage* Montage = ASC->GetCurrentMontage();
    if (!Montage || LastContinuedMontage.Get() == Montage ||
        ASC->GetAnimatingAbility() != Spec->GetPrimaryInstance() || !MeetsRequirements(Context)) return;

    LastContinuedMontage = Montage;
    ++ComboFollowUps;
    FGameplayEventData Payload;
    Payload.EventTag = Continue;
    Payload.Instigator = Context.Observer;
    Payload.Target = Context.Target;
    ASC->HandleGameplayEvent(Continue, &Payload);
}
void UFuzzyAIAbilityAction::CleanupExecution(EFuzzyAIActionResult Result)
{
    if (AbilitySystem.IsValid())
    {
        AbilitySystem->OnAbilityEnded.Remove(EndDelegate);
        if (bIssuedActivation) AbilitySystem->CancelAbilityHandle(AbilityHandle);
    }
    bIssuedActivation = false;
    ComboFollowUps = 0;
    LastContinuedMontage.Reset();
    EndDelegate.Reset();
    AbilityHandle = FGameplayAbilitySpecHandle();
    AbilitySystem.Reset();
}
bool UFuzzyAIAbilityAction::Validate(FString& Error) const
{
    if (!Super::Validate(Error)) return false;
    if (!AbilityClass) { Error = TEXT("Ability action needs an already-granted AbilityClass."); return false; }
    if (MaxComboFollowUps < 0) { Error = TEXT("Maximum combo follow-ups must be nonnegative."); return false; }
    for (const auto& Class : AbilityVariants)
        if (!Class) { Error = TEXT("Ability variants cannot contain an empty class."); return false; }
    return true;
}
