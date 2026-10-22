#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationStore.h"
#include "FuzzyAIComponent.h"
#include "GameFramework/Actor.h"

void UFuzzyObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store) {}
void UFuzzyObservation::OnInitialize_Implementation() {}
void UFuzzyObservation::OnShutdown_Implementation() {}
void UFuzzyObservation::OnContextChanged_Implementation(const FFuzzyAIObservationContext& Previous, const FFuzzyAIObservationContext& Current) {}

FName UFuzzyObservation::GetId() const
{
    return !ObservationId.IsNone() ? ObservationId : (!ObservationKey.IsNone() ? ObservationKey : GetFName());
}

FFuzzyAIObservationEntry UFuzzyObservation::GetSettings() const
{
    FFuzzyAIObservationEntry Settings;
    Settings.UpdatePolicy = UpdatePolicy;
    Settings.Interval = Interval;
    Settings.ChangeTolerance = ChangeTolerance;
    Settings.bRequiresVisibleTarget = bRequiresVisibleTarget;
    Settings.bUsesTargetContext = bUsesTargetContext;
    Settings.bRememberLastSuccessful = bRememberLastSuccessful;
    Settings.MemoryDuration = MemoryDuration;
    return Settings;
}

bool UFuzzyObservation::IsTargetDependent() const
{
    return Subject == EFuzzyAIObservationSubject::Target || bUsesTargetContext || bRequiresVisibleTarget;
}

UWorld* UFuzzyObservation::GetWorld() const
{
    if (HasAnyFlags(RF_ClassDefaultObject))
    {
        return nullptr;
    }
    const UActorComponent* Component = GetTypedOuter<UActorComponent>();
    return Component ? Component->GetWorld() : nullptr;
}

FFuzzyAIObservationContext UFuzzyObservation::GetObservationContext() const
{
    FFuzzyAIObservationContext Context;
    Context.Observer = ObserverActor.Get();
    Context.Target = TargetActor.Get();
    Context.bTargetVisible = bTargetVisible && TargetActor.IsValid();
    for (const TWeakObjectPtr<AActor>& Actor : Subjects)
    {
        Context.Subjects.Add(Actor.Get());
    }
    return Context;
}

void UFuzzyObservation::Start(UFuzzyAIComponent* Component, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context)
{
    Coordinator = Component;
    RuntimeStore = Store;
    UpdateContext(Context);
    bInitialized = true;
    OnInitialize();
}

void UFuzzyObservation::UpdateContext(const FFuzzyAIObservationContext& Context)
{
    const FFuzzyAIObservationContext Previous = GetObservationContext();
    bool bChanged = ObserverActor != Context.Observer.Get() || TargetActor != Context.Target.Get() || bTargetVisible != Context.bTargetVisible ||
        Subjects.Num() != Context.Subjects.Num();
    if (!bChanged)
    {
        for (int32 Index = 0; Index < Subjects.Num(); ++Index)
        {
            bChanged |= Subjects[Index] != Context.Subjects[Index].Get();
        }
    }
    ObserverActor = Context.Observer.Get();
    TargetActor = Context.Target.Get();
    bTargetVisible = Context.bTargetVisible;
    Subjects.Reset();
    for (AActor* Actor : Context.Subjects)
    {
        Subjects.Add(Actor);
    }
    if (bInitialized && bChanged)
    {
        OnContextChanged(Previous, GetObservationContext());
    }
}

void UFuzzyObservation::Shutdown()
{
    if (bInitialized)
    {
        bInitialized = false;
        OnShutdown();
    }
    Coordinator.Reset();
    RuntimeStore = nullptr;
    ObserverActor.Reset();
    TargetActor.Reset();
    Subjects.Reset();
    bTargetVisible = false;
}

bool UFuzzyObservation::RequestRefresh()
{
    return bInitialized && Coordinator.IsValid() && Coordinator->RequestObservationInstanceRefresh(this);
}

bool UFuzzyObservation::RecordObservedEvent(const FFuzzyAIObservedEvent& Event)
{
    return bInitialized && Coordinator.IsValid() && Coordinator->RecordObservedEvent(Event);
}
