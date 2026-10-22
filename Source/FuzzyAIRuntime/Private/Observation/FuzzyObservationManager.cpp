#include "Observation/FuzzyObservationManager.h"
#include "Observation/FuzzyObservationStore.h"
#include "FuzzyAIComponent.h"
#include "GameFramework/Actor.h"

bool UFuzzyObservationManager::Initialize(const TArray<TObjectPtr<UFuzzyObservation>>& Templates, UFuzzyAIComponent* Owner,
    const TArray<FName>& LegacyKeys, TArray<FString>& OutErrors)
{
    Shutdown();
    Instances.Reset();
    NextUpdateTimes.Reset();
    TSet<FName> Ids;
    TSet<FName> Outputs;
    for (FName Key : LegacyKeys)
    {
        Ids.Add(Key);
        Outputs.Add(Key);
    }
    for (UFuzzyObservation* Template : Templates)
    {
        if (!IsValid(Template))
        {
            OutErrors.Add(TEXT("Observation Instances contains an empty observation."));
            continue;
        }
        if (!Template->bEnabled)
        {
            continue;
        }
        if (Template->GetClass()->HasAnyClassFlags(CLASS_Abstract) || Ids.Contains(Template->GetId()) ||
            (!Template->ObservationKey.IsNone() && Outputs.Contains(Template->ObservationKey)))
        {
            OutErrors.Add(FString::Printf(TEXT("Abstract observation or duplicate observation ID/output: %s"), *Template->GetId().ToString()));
            continue;
        }
        if (!FMath::IsFinite(Template->Interval) || Template->Interval < 0.01f ||
            !FMath::IsFinite(Template->ChangeTolerance) || Template->ChangeTolerance < 0.f ||
            !FMath::IsFinite(Template->MemoryDuration) || Template->MemoryDuration < 0.f)
        {
            OutErrors.Add(FString::Printf(TEXT("Invalid observation timing/tolerance: %s"), *Template->GetId().ToString()));
            continue;
        }
        const FName RuntimeName = MakeUniqueObjectName(Owner, Template->GetClass(), FName(*FString::Printf(TEXT("%s_Runtime"), *Template->GetName())));
        UFuzzyObservation* Instance = DuplicateObject<UFuzzyObservation>(Template, Owner, RuntimeName);
        if (Template->ObservationId.IsNone() && Template->ObservationKey.IsNone())
        {
            Instance->ObservationId = Template->GetId();
        }
        Ids.Add(Instance->GetId());
        if (!Instance->ObservationKey.IsNone())
        {
            Outputs.Add(Instance->ObservationKey);
        }
        Instances.Add(Instance);
        NextUpdateTimes.Add(Instance->GetId(), 0.);
    }
    if (!OutErrors.IsEmpty())
    {
        Instances.Reset();
        NextUpdateTimes.Reset();
        return false;
    }
    return true;
}

void UFuzzyObservationManager::Start(UFuzzyAIComponent* Owner, UFuzzyObservationStore* Store, const FFuzzyAIObservationContext& Context)
{
    for (UFuzzyObservation* Instance : Instances)
    {
        Instance->Start(Owner, Store, Context);
    }
}

void UFuzzyObservationManager::Shutdown()
{
    for (UFuzzyObservation* Instance : Instances)
    {
        Instance->Shutdown();
    }
}

TArray<FName> UFuzzyObservationManager::GetIds() const
{
    TArray<FName> Ids;
    for (UFuzzyObservation* Instance : Instances)
    {
        Ids.Add(Instance->GetId());
    }
    return Ids;
}

TArray<FName> UFuzzyObservationManager::GetDueIds(double Time, bool bEveryFrame) const
{
    TArray<FName> Ids;
    for (UFuzzyObservation* Instance : Instances)
    {
        if ((bEveryFrame && Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::EveryFrame) ||
            (!bEveryFrame && Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval && Time >= NextUpdateTimes.FindChecked(Instance->GetId())))
        {
            Ids.Add(Instance->GetId());
        }
    }
    return Ids;
}

TArray<FName> UFuzzyObservationManager::GetContextDependentIds() const
{
    TArray<FName> Ids;
    for (UFuzzyObservation* Instance : Instances)
    {
        if (Instance->IsTargetDependent())
        {
            Ids.Add(Instance->GetId());
        }
    }
    return Ids;
}

float UFuzzyObservationManager::GetSchedulerInterval() const
{
    float Interval = 0.25f;
    for (UFuzzyObservation* Instance : Instances)
    {
        if (Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval)
        {
            Interval = FMath::Min(Interval, Instance->Interval);
        }
    }
    return Interval;
}

bool UFuzzyObservationManager::NeedsEveryFrame() const
{
    return Instances.ContainsByPredicate([](UFuzzyObservation* Instance) { return Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::EveryFrame; });
}

UFuzzyObservation* UFuzzyObservationManager::FindObservation(FName IdOrKey, const UFuzzyObservationStore* Store) const
{
    for (UFuzzyObservation* Instance : Instances)
    {
        if (Instance->GetId() == IdOrKey || Instance->ObservationKey == IdOrKey || (Store && Store->FindWriter(IdOrKey) == Instance))
        {
            return Instance;
        }
    }
    return nullptr;
}

bool UFuzzyObservationManager::Contains(const UFuzzyObservation* Observation) const
{
    return Instances.Contains(Observation);
}

void UFuzzyObservationManager::Sample(const TArray<FName>& Ids, UFuzzyObservationStore* Store,
    const FFuzzyAIObservationContext& Context, int32 Revision, double Time)
{
    for (UFuzzyObservation* Instance : Instances)
    {
        Instance->UpdateContext(Context);
        if (!Ids.Contains(Instance->GetId()))
        {
            continue;
        }
        Store->BeginSample(Instance, Instance->ObservationKey, Instance->ExpectedValueType, Instance->GetSettings(),
            Instance->IsTargetDependent(), Context, Revision);
        AActor* Subject = Instance->Subject == EFuzzyAIObservationSubject::Self ? Context.Observer.Get() : Context.Target.Get();
        if (Instance->bRequiresVisibleTarget && (!Context.bTargetVisible || !IsValid(Context.Target)))
        {
            Store->InvalidateCurrentSample(TEXT("Target is not currently visible."));
        }
        else if (Instance->Subject != EFuzzyAIObservationSubject::Custom && !IsValid(Subject))
        {
            Store->InvalidateCurrentSample(TEXT("The configured subject is unavailable."));
        }
        else
        {
            Instance->Sample(Context.Observer.Get(), Context.Target.Get(), Store);
        }
        Store->EndSample();
        NextUpdateTimes.Add(Instance->GetId(), Time + Instance->Interval);
    }
}
