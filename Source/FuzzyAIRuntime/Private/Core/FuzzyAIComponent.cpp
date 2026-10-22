#include "FuzzyAIComponent.h"
#include "Core/FuzzyAIPipeline.h"
#include "Observation/ObservationMemory.h"
#include "Observation/ObservationRuntime.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationManager.h"
#include "Observation/FuzzyObservationStore.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "UObject/StrongObjectPtr.h"

DEFINE_LOG_CATEGORY_STATIC(LogFuzzyAIRuntime, Log, All);

UFuzzyAIComponent::UFuzzyAIComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
}

FFuzzyAIDebugSnapshot UFuzzyAIComponent::PreviewDecisionPipeline()
{
    FFuzzyAIDecisionContext Context;
    Context.Observer = GetOwner();
    Context.Target = CurrentTarget;
    Context.bTargetVisible = bRunning && bTargetVisible && CurrentTarget.IsValid();
    Context.CapturedAt = Now();
    Context.Observations = GetObservationSnapshot();
    Context.Memories = GetMemorySnapshot();
    Context.Events = GetObservedEvents();
    if (!bRunning)
    {
        FFuzzyAIDebugSnapshot Snapshot;
        Snapshot.Evidence = MoveTemp(Context);
        Snapshot.ProfileStage = FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotReady, TEXT("Start AI before previewing the decision pipeline."));
        Snapshot.ExecutionStage = FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotRun, TEXT("Preview does not execute actions."));
        return Snapshot;
    }
    if (!PrototypePipeline)
    {
        PrototypePipeline = NewObject<UFuzzyAIPipeline>(this);
    }
    return PrototypePipeline->Preview(Context, DecisionConfig);
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
    if (!ObservationRuntime)
    {
        ObservationRuntime = NewObject<UFuzzyAIObservationRuntime>(this);
        MemoryRuntime = NewObject<UFuzzyAIObservationMemory>(this);
        ObservationStore = NewObject<UFuzzyObservationStore>(this);
        ObservationManager = NewObject<UFuzzyObservationManager>(this);
    }
    if (!ObservationRuntime->Initialize(Observations, ConfigurationErrors))
    {
        for (const FString& Error : ConfigurationErrors)
        {
            UE_LOG(LogFuzzyAIRuntime, Error, TEXT("%s: %s"), *GetNameSafe(GetOwner()), *Error);
        }
        return false;
    }
    if (!ObservationManager->Initialize(ObservationInstances, this, ObservationRuntime->GetKeys(), ConfigurationErrors))
    {
        ObservationRuntime->Reset();
        for (const FString& Error : ConfigurationErrors)
        {
            UE_LOG(LogFuzzyAIRuntime, Error, TEXT("%s: %s"), *GetNameSafe(GetOwner()), *Error);
        }
        return false;
    }
    if (!FMath::IsFinite(ObservedEventMaxAge) || ObservedEventMaxAge < 0.f || MaxRememberedObservations < 1 || MaxObservedEvents < 1)
    {
        ConfigurationErrors.Add(TEXT("Memory capacities must be positive and event age must be finite and nonnegative."));
        ObservationRuntime->Reset();
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
        FMath::Min(ObservationRuntime->GetSchedulerInterval(), ObservationManager->GetSchedulerInterval()), true);
    SetComponentTickEnabled(ObservationRuntime->NeedsEveryFrame() || ObservationManager->NeedsEveryFrame());
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
    ObservationRuntime->Refresh(Keys, Context, ContextRevision, Time, Sampled);
    for (FName Key : Sampled)
    {
        const FFuzzyAIObservationEntry* Entry = ObservationRuntime->FindEntry(Key);
        FFuzzyAIObservationRecord Record;
        if (Entry && ObservationRuntime->TryGetObservation(Key, Record))
        {
            ObservationStore->BeginSample(Entry->Observation, Key, Entry->Observation->ExpectedValueType, *Entry,
                UFuzzyAIObservationRuntime::IsTargetDependent(*Entry), Context, ContextRevision);
            ObservationStore->SetResult(Key, Record.Result);
            ObservationStore->EndSample();
        }
    }
    ObservationManager->Sample(Keys, ObservationStore, Context, ContextRevision, Time);
    const TArray<FFuzzyAIObservationChange> Changes = ObservationStore->Commit(Sampled);
    for (FName Key : Sampled)
    {
        const FFuzzyAIObservationEntry* Entry = ObservationStore->FindSettings(Key);
        FFuzzyAIObservationRecord Record;
        if (Entry && Entry->bRememberLastSuccessful && ObservationStore->TryGetObservation(Key, Record))
        {
            MemoryRuntime->Remember(Record, Entry->MemoryDuration, Entry->ChangeTolerance, MemoryChanged);
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
    if (ObservationRuntime->FindEntry(Key))
    {
        ProcessRefresh({Key});
        return true;
    }
    if (UFuzzyObservation* Instance = ObservationManager->FindObservation(Key, ObservationStore))
    {
        return RequestObservationInstanceRefresh(Instance);
    }
    return false;
}

bool UFuzzyAIComponent::NotifyObservationSourceChanged(FName Key)
{
    const FFuzzyAIObservationEntry* Entry = bRunning ? ObservationRuntime->FindEntry(Key) : nullptr;
    if (Entry)
    {
        return Entry->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::SourceEvent && RequestObservationRefresh(Key);
    }
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
    TArray<FName> Keys = bContextOnly ? ObservationRuntime->GetTargetDependentKeys() : ObservationRuntime->GetKeys();
    Keys.Append(bContextOnly ? ObservationManager->GetContextDependentIds() : ObservationManager->GetIds());
    return Keys;
}

void UFuzzyAIComponent::SchedulerUpdate()
{
    if (bRunning)
    {
        TArray<FName> Keys = ObservationRuntime->GetDueKeys(Now(), false);
        Keys.Append(ObservationManager->GetDueIds(Now(), false));
        ProcessRefresh(Keys);
    }
}

void UFuzzyAIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (bRunning)
    {
        TArray<FName> Keys = ObservationRuntime->GetDueKeys(Now(), true);
        Keys.Append(ObservationManager->GetDueIds(Now(), true));
        ProcessRefresh(Keys);
    }
}

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

bool UFuzzyAIComponent::TryGetObservation(FName Key, FFuzzyAIObservationRecord& OutRecord) const
{
    OutRecord = FFuzzyAIObservationRecord();
    return ObservationStore && ObservationStore->TryGetObservation(Key, OutRecord);
}

TArray<FFuzzyAIObservationRecord> UFuzzyAIComponent::GetObservationSnapshot() const
{
    return ObservationStore ? ObservationStore->GetSnapshot() : TArray<FFuzzyAIObservationRecord>();
}

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
