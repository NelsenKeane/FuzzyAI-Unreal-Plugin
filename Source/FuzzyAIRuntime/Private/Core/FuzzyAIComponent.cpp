// Coordinates observation startup, sampling, timers, memory updates and change dispatchers for one enemy.
// Exposes cached observation reads and cleans up timers, bindings and sensor work on shutdown.

#include "FuzzyAIComponent.h"
#include "Observation/ObservationMemory.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationManager.h"
#include "Observation/FuzzyObservationStore.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "UObject/StrongObjectPtr.h"

DEFINE_LOG_CATEGORY_STATIC(LogFuzzyAIRuntime, Log, All);

#pragma region Engine Lifecycle and World Time
UFuzzyAIComponent::UFuzzyAIComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UFuzzyAIComponent::BeginPlay()
{
    Super::BeginPlay();
    if (bAutoStart)
    {
        StartAI();
    }
}

void UFuzzyAIComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    bEndingPlay = true;
    StopAI();
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(DeferredHandle);
    }
    DeferredActions.Reset();
    if (AActor* Target = CurrentTarget.Get())
    {
        Target->OnDestroyed.RemoveDynamic(this, &UFuzzyAIComponent::HandleTargetDestroyed);
    }
    Super::EndPlay(EndPlayReason);
}

double UFuzzyAIComponent::Now() const
{
    return GetWorld() ? GetWorld()->GetTimeSeconds() : 0.;
}

#pragma endregion
#pragma region Observation Lifecycle
bool UFuzzyAIComponent::StartAI()
{
    if (bEndingPlay || !GetWorld() || !IsValid(GetOwner()) || (bServerOnly && !GetOwner()->HasAuthority()))
    {
        return false;
    }
    if (bProcessing)
    {
        Defer([this]() { StartAI(); });
        return true;
    }
    if (bRunning)
    {
        return true;
    }
    if (!ObservationManager)
    {
        MemoryRuntime = NewObject<UFuzzyAIObservationMemory>(this);
        ObservationStore = NewObject<UFuzzyObservationStore>(this);
        ObservationManager = NewObject<UFuzzyObservationManager>(this);
    }
    if (!ObservationManager->Initialize(ObservationInstances, this, ConfigurationErrors))
    {
        for (const FString& Error : ConfigurationErrors)
        {
            UE_LOG(LogFuzzyAIRuntime, Error, TEXT("%s: %s"), *GetNameSafe(GetOwner()), *Error);
        }
        return false;
    }
    if (!FMath::IsFinite(ObservedEventMaxAge) || ObservedEventMaxAge < 0.f || MaxRememberedObservations < 1 || MaxObservedEvents < 1)
    {
        ConfigurationErrors.Add(TEXT("Memory capacities must be positive and event age must be finite and nonnegative."));
        return false;
    }
    MemoryRuntime->Initialize(MaxRememberedObservations, MaxObservedEvents, ObservedEventMaxAge);
    ObservationStore->Reset();
    bRunning = true;
    {
        TGuardValue<bool> ProcessingGuard(bProcessing, true);
        ObservationManager->Start(this, ObservationStore, MakeContext());
    }
    GetWorld()->GetTimerManager().SetTimer(SchedulerHandle, this, &UFuzzyAIComponent::SchedulerUpdate,
        ObservationManager->GetSchedulerInterval(), true);
    SetComponentTickEnabled(ObservationManager->NeedsEveryFrame());
    RefreshAllObservations();
    return true;
}

void UFuzzyAIComponent::StopAI()
{
    if (bProcessing && !bEndingPlay)
    {
        Defer([this]() { StopAI(); });
        return;
    }
    bRunning = false;
    if (ObservationManager)
    {
        TGuardValue<bool> ProcessingGuard(bProcessing, true);
        ObservationManager->Shutdown();
    }
    SetComponentTickEnabled(false);
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(SchedulerHandle);
        GetWorld()->GetTimerManager().ClearTimer(DeferredHandle);
    }
    DeferredActions.Reset();
}

#pragma endregion
#pragma region Deferred Actions
void UFuzzyAIComponent::Defer(TFunction<void()>&& Action)
{
    if (!bEndingPlay && GetWorld())
    {
        DeferredActions.Add(MoveTemp(Action));
        if (!GetWorld()->GetTimerManager().TimerExists(DeferredHandle))
        {
            DeferredHandle = GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateWeakLambda(this, [this]()
            {
                TArray<TFunction<void()>> Actions = MoveTemp(DeferredActions);
                DeferredActions.Reset();
                DeferredHandle.Invalidate();
                for (TFunction<void()>& Deferred : Actions)
                {
                    if (bEndingPlay)
                    {
                        break;
                    }
                    Deferred();
                }
            }));
        }
    }
}

#pragma endregion
#pragma region Observation Context
FFuzzyAIObservationContext UFuzzyAIComponent::MakeContext() const
{
    FFuzzyAIObservationContext Context;
    Context.Observer = GetOwner();
    Context.Target = CurrentTarget.Get();
    Context.bTargetVisible = bTargetVisible && CurrentTarget.IsValid();
    for (const TWeakObjectPtr<AActor>& Subject : AdditionalSubjects)
    {
        Context.Subjects.Add(Subject.Get());
    }
    return Context;
}

#pragma endregion
#pragma region Sampling and Refresh Requests
void UFuzzyAIComponent::ProcessRefresh(const TArray<FName>& Keys)
{
    if (!bRunning || bEndingPlay)
    {
        return;
    }
    if (bProcessing)
    {
        Defer([this, Keys]() { ProcessRefresh(Keys); });
        return;
    }
    TGuardValue<bool> ProcessingGuard(bProcessing, true);
    const double Time = Now();
    TArray<FName> MemoryChanged;
    MemoryRuntime->Prune(Time, MemoryChanged);
    TArray<FName> Sampled;
    const FFuzzyAIObservationContext Context = MakeContext();
    ObservationStore->BeginBatch(Time);
    ObservationManager->Sample(Keys, ObservationStore, Context, ContextRevision, Time);
    const TArray<FFuzzyAIObservationChange> Changes = ObservationStore->Commit(Sampled);
    for (FName Key : Sampled)
    {
        const FFuzzyAIObservationSettings* Settings = ObservationStore->FindSettings(Key);
        FFuzzyAIObservationRecord Record;
        if (Settings && Settings->bRememberLastSuccessful && ObservationStore->TryGetObservation(Key, Record))
        {
            MemoryRuntime->Remember(Record, Settings->MemoryDuration, Settings->ChangeTolerance, MemoryChanged);
        }
    }
    TArray<FName> ChangedKeys;
    for (const FFuzzyAIObservationChange& Change : Changes)
    {
        ChangedKeys.Add(Change.Current.Key);
        OnObservationChanged.Broadcast(Change.Current.Key, Change.Previous, Change.Current, Change.bHadPrevious);
        if (bEndingPlay)
        {
            return;
        }
    }
    if (!ChangedKeys.IsEmpty())
    {
        OnObservationsChanged.Broadcast(ChangedKeys);
    }
    if (!MemoryChanged.IsEmpty())
    {
        OnMemoryChanged.Broadcast(MemoryChanged);
    }
}

void UFuzzyAIComponent::RefreshAllObservations()
{
    if (bRunning)
    {
        ProcessRefresh(GetRefreshKeys());
    }
}

bool UFuzzyAIComponent::RequestObservationRefresh(FName Key)
{
    if (!bRunning)
    {
        return false;
    }
    if (UFuzzyObservation* Instance = ObservationManager->FindObservation(Key, ObservationStore))
    {
        return RequestObservationInstanceRefresh(Instance);
    }
    return false;
}

bool UFuzzyAIComponent::NotifyObservationSourceChanged(FName Key)
{
    UFuzzyObservation* Instance = bRunning ? ObservationManager->FindObservation(Key, ObservationStore) : nullptr;
    return Instance && Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::SourceEvent && RequestObservationInstanceRefresh(Instance);
}

bool UFuzzyAIComponent::RequestObservationInstanceRefresh(UFuzzyObservation* Observation)
{
    if (!bRunning || !IsValid(Observation) || !ObservationManager->Contains(Observation))
    {
        return false;
    }
    ProcessRefresh({Observation->GetId()});
    return true;
}

#pragma endregion
#pragma region Sensor Lookup and Scheduling
TArray<UFuzzyObservation*> UFuzzyAIComponent::GetRuntimeObservationInstances() const
{
    TArray<UFuzzyObservation*> Instances;
    if (ObservationManager)
    {
        for (UFuzzyObservation* Instance : ObservationManager->GetInstances())
        {
            Instances.Add(Instance);
        }
    }
    return Instances;
}

TArray<FName> UFuzzyAIComponent::GetRefreshKeys(bool bContextOnly) const
{
    return bContextOnly ? ObservationManager->GetContextDependentIds() : ObservationManager->GetIds();
}

void UFuzzyAIComponent::SchedulerUpdate()
{
    if (bRunning)
    {
        ProcessRefresh(ObservationManager->GetDueIds(Now(), false));
    }
}

void UFuzzyAIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (bRunning)
    {
        ProcessRefresh(ObservationManager->GetDueIds(Now(), true));
    }
}

#pragma endregion
#pragma region Target and Subject Context
AActor* UFuzzyAIComponent::GetTarget() const
{
    return CurrentTarget.Get();
}

void UFuzzyAIComponent::ApplyTarget(AActor* NewTarget, bool bVisible)
{
    if (!IsValid(NewTarget))
    {
        NewTarget = nullptr;
        bVisible = false;
    }
    if (bProcessing)
    {
        TWeakObjectPtr<AActor> WeakTarget = NewTarget;
        Defer([this, WeakTarget, bVisible]() { ApplyTarget(WeakTarget.Get(), bVisible); });
        return;
    }
    const bool bNewIdentity = CurrentTarget != NewTarget;
    if (bNewIdentity)
    {
        if (AActor* OldTarget = CurrentTarget.Get())
        {
            OldTarget->OnDestroyed.RemoveDynamic(this, &UFuzzyAIComponent::HandleTargetDestroyed);
        }
        CurrentTarget = NewTarget;
        if (NewTarget)
        {
            NewTarget->OnDestroyed.AddUniqueDynamic(this, &UFuzzyAIComponent::HandleTargetDestroyed);
        }
        ++ContextRevision;
    }
    const bool bVisibilityChanged = bTargetVisible != bVisible;
    bTargetVisible = bVisible;
    if (bRunning && (bNewIdentity || bVisibilityChanged || bVisible))
    {
        ProcessRefresh(GetRefreshKeys(true));
    }
}

void UFuzzyAIComponent::SetTarget(AActor* NewTarget)
{
    if (CurrentTarget != NewTarget)
    {
        ApplyTarget(NewTarget, false);
    }
}

void UFuzzyAIComponent::SetTargetVisibility(bool bVisible)
{
    ApplyTarget(CurrentTarget.Get(), bVisible);
}

void UFuzzyAIComponent::UpdateTargetSighting(AActor* SensedTarget, bool bVisible)
{
    if (bVisible && IsValid(SensedTarget))
    {
        ApplyTarget(SensedTarget, true);
    }
    else if (SensedTarget && CurrentTarget == SensedTarget)
    {
        ApplyTarget(SensedTarget, false);
    }
}

void UFuzzyAIComponent::HandleTargetDestroyed(AActor* DestroyedActor)
{
    ApplyTarget(nullptr, false);
}

void UFuzzyAIComponent::SetObservationSubjects(const TArray<AActor*>& Subjects)
{
    TArray<TWeakObjectPtr<AActor>> WeakSubjects;
    for (AActor* Subject : Subjects)
    {
        if (IsValid(Subject))
        {
            WeakSubjects.Add(Subject);
        }
    }
    if (bProcessing)
    {
        Defer([this, WeakSubjects]()
        {
            TArray<AActor*> Resolved;
            for (const TWeakObjectPtr<AActor>& Subject : WeakSubjects)
            {
                if (Subject.IsValid())
                {
                    Resolved.Add(Subject.Get());
                }
            }
            SetObservationSubjects(Resolved);
        });
        return;
    }
    if (AdditionalSubjects != WeakSubjects)
    {
        AdditionalSubjects = MoveTemp(WeakSubjects);
        ++ContextRevision;
        if (bRunning)
        {
            ProcessRefresh(GetRefreshKeys(true));
        }
    }
}

#pragma endregion
#pragma region Current Observation Reads
bool UFuzzyAIComponent::TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const
{
    OutRecord = FFuzzyAIObservationRecord();
    return ObservationStore && ObservationStore->TryGetObservation(Key, OutRecord);
}

TArray<FFuzzyAIObservationRecord> UFuzzyAIComponent::GetObservationSnapshot() const
{
    return ObservationStore ? ObservationStore->GetSnapshot() : TArray<FFuzzyAIObservationRecord>();
}

#pragma endregion
#pragma region Remembered Knowledge
bool UFuzzyAIComponent::TryGetRememberedObservation(FName Key, AActor* ForTarget, FFuzzyAIRememberedObservation& OutRecord) const
{
    OutRecord = FFuzzyAIRememberedObservation();
    return MemoryRuntime && MemoryRuntime->TryGetObservation(Key, ForTarget, Now(), OutRecord);
}

TArray<FFuzzyAIRememberedObservation> UFuzzyAIComponent::GetMemorySnapshot() const
{
    return MemoryRuntime ? MemoryRuntime->GetSnapshot(Now()) : TArray<FFuzzyAIRememberedObservation>();
}

FFuzzyAITargetLocationKnowledge UFuzzyAIComponent::GetTargetLocationKnowledge(FName LocationKey) const
{
    FFuzzyAITargetLocationKnowledge Knowledge;
    Knowledge.Target = CurrentTarget;
    FFuzzyAIObservationRecord Active;
    if (bRunning && CurrentTarget.IsValid() && bTargetVisible && TryGetObservation(LocationKey, Active) &&
        Active.Target == CurrentTarget && Active.Result.bIsValid && Active.Result.ValueType == EFuzzyAIObservationValueType::Vector)
    {
        Knowledge.bHasActiveLocation = true;
        Knowledge.ActiveLocation = Active.Result.VectorValue;
    }
    FFuzzyAIRememberedObservation Remembered;
    if (CurrentTarget.IsValid() && TryGetRememberedObservation(LocationKey, CurrentTarget.Get(), Remembered) &&
        Remembered.Observation.Result.ValueType == EFuzzyAIObservationValueType::Vector)
    {
        Knowledge.bHasLastSeenLocation = true;
        Knowledge.LastSeenLocation = Remembered.Observation.Result.VectorValue;
        Knowledge.LastSeenTime = Remembered.Observation.LastSuccessTime;
        Knowledge.LastSeenAge = FMath::Max(0., Now() - Knowledge.LastSeenTime);
    }
    return Knowledge;
}

#pragma endregion
#pragma region Observed Event History
bool UFuzzyAIComponent::RecordObservedEvent(const FFuzzyAIObservedEvent& Event)
{
    if (!bRunning || Event.EventKey.IsNone())
    {
        return false;
    }
    if (bProcessing)
    {
        const double ReceiptTime = Now();
        const TSharedRef<TStrongObjectPtr<UObject>> PayloadGuard = MakeShared<TStrongObjectPtr<UObject>>(Event.Payload.ObjectValue.Get());
        Defer([this, Event, ReceiptTime, PayloadGuard]() { RecordEventAtTime(Event, ReceiptTime); });
        return true;
    }
    return RecordEventAtTime(Event, Now());
}

bool UFuzzyAIComponent::RecordEventAtTime(const FFuzzyAIObservedEvent& Event, double ReceiptTime)
{
    if (!bRunning || bEndingPlay)
    {
        return false;
    }
    TGuardValue<bool> ProcessingGuard(bProcessing, true);
    TArray<FName> Expired;
    MemoryRuntime->Prune(Now(), Expired);
    const FFuzzyAIObservedEvent Stored = MemoryRuntime->RecordEvent(Event, ReceiptTime);
    if (!Expired.IsEmpty())
    {
        OnMemoryChanged.Broadcast(Expired);
    }
    OnObservedEventRecorded.Broadcast(Stored);
    return true;
}

TArray<FFuzzyAIObservedEvent> UFuzzyAIComponent::GetObservedEvents() const
{
    return MemoryRuntime ? MemoryRuntime->GetEvents(Now()) : TArray<FFuzzyAIObservedEvent>();
}

#pragma endregion
#pragma region Clear Memory
void UFuzzyAIComponent::ClearMemory()
{
    if (bProcessing)
    {
        Defer([this]() { ClearMemory(); });
        return;
    }
    if (MemoryRuntime)
    {
        TArray<FName> Keys;
        for (const FFuzzyAIRememberedObservation& Record : MemoryRuntime->GetSnapshot(Now()))
        {
            Keys.AddUnique(Record.Observation.Key);
        }
        MemoryRuntime->Reset();
        if (!Keys.IsEmpty())
        {
            TGuardValue<bool> ProcessingGuard(bProcessing, true);
            OnMemoryChanged.Broadcast(Keys);
        }
    }
}
#pragma endregion
