// Validates and duplicates sensor templates, then selects which instances need to sample.
// Runs their lifecycle/context hooks and wraps each sample in a store transaction with visibility checks.

#include "Observation/FuzzyObservationManager.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/ObservationKeys.h"
#include "FuzzyAIComponent.h"
#include "GameFramework/Actor.h"

#pragma region Configuration and Sensor Lifecycle
bool UFuzzyObservationManager::Initialize(const TArray<TObjectPtr<UFuzzyObservation>>& Templates, UFuzzyAIComponent* Owner,
    TArray<FString>& OutErrors)
{
    Shutdown();
    Instances.Reset();
    NextUpdateTimes.Reset();
    OutErrors.Reset();
    TSet<FGameplayTag> ClaimedKeys;
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
        if (Template->GetClass()->HasAnyClassFlags(CLASS_Abstract) || Template->Outputs.IsEmpty())
        {
            OutErrors.Add(FString::Printf(TEXT("%s: observation must be concrete and declare at least one output."), *Template->GetName()));
            continue;
        }
        if (!FMath::IsFinite(Template->Interval) || Template->Interval < 0.01f ||
            !StaticEnum<EFuzzyAIObservationUpdatePolicy>()->IsValidEnumValue(static_cast<int64>(Template->UpdatePolicy)) ||
            !StaticEnum<EFuzzyAIObservationSubject>()->IsValidEnumValue(static_cast<int64>(Template->Subject)))
        {
            OutErrors.Add(FString::Printf(TEXT("%s: invalid observation interval, update policy or subject."), *Template->GetName()));
            continue;
        }
        for (const FFuzzyAIObservationOutput& Output : Template->Outputs)
        {
            if (!Output.Key.IsValid() || !Output.Key.MatchesTag(NKFuzzyAI::ObservationKeys::Root) ||
                Output.Key == NKFuzzyAI::ObservationKeys::Root)
            {
                OutErrors.Add(FString::Printf(TEXT("%s: select a registered key under Observation.*."), *Template->GetName()));
            }
            else if (ClaimedKeys.Contains(Output.Key))
            {
                OutErrors.Add(FString::Printf(TEXT("Duplicate observation output key: %s. Each key needs one owner."), *Output.Key.ToString()));
            }
            ClaimedKeys.Add(Output.Key);
            if (!FMath::IsFinite(Output.ChangeTolerance) || Output.ChangeTolerance < 0.f ||
                !FMath::IsFinite(Output.MemoryDuration) || Output.MemoryDuration < 0.f ||
                !StaticEnum<EFuzzyAIObservationValueType>()->IsValidEnumValue(static_cast<int64>(Output.ValueType)))
            {
                OutErrors.Add(FString::Printf(TEXT("%s: invalid type, tolerance or memory duration for %s."),
                    *Template->GetName(), *Output.Key.ToString()));
            }
        }
        const FName RuntimeName = MakeUniqueObjectName(Owner, Template->GetClass(), FName(*FString::Printf(TEXT("%s_Runtime"), *Template->GetName())));
        UFuzzyObservation* Instance = DuplicateObject<UFuzzyObservation>(Template, Owner, RuntimeName);
        Instances.Add(Instance);
        NextUpdateTimes.Add(Instance->GetFName(), 0.);
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

#pragma endregion
#pragma region Scheduling
TArray<FName> UFuzzyObservationManager::GetSensorNames() const
{
    TArray<FName> SensorNames;
    for (UFuzzyObservation* Instance : Instances)
    {
        SensorNames.Add(Instance->GetFName());
    }
    return SensorNames;
}

TArray<FName> UFuzzyObservationManager::GetDueSensorNames(double Time, bool bEveryFrame) const
{
    TArray<FName> SensorNames;
    for (UFuzzyObservation* Instance : Instances)
    {
        if ((bEveryFrame && Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::EveryFrame) ||
            (!bEveryFrame && Instance->UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval && Time >= NextUpdateTimes.FindChecked(Instance->GetFName())))
        {
            SensorNames.Add(Instance->GetFName());
        }
    }
    return SensorNames;
}

TArray<FName> UFuzzyObservationManager::GetContextDependentSensorNames() const
{
    TArray<FName> SensorNames;
    for (UFuzzyObservation* Instance : Instances)
    {
        if (Instance->IsTargetDependent())
        {
            SensorNames.Add(Instance->GetFName());
        }
    }
    return SensorNames;
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

#pragma endregion
#pragma region Sensor Lookup
UFuzzyObservation* UFuzzyObservationManager::FindObservation(FGameplayTag Key) const
{
    for (UFuzzyObservation* Instance : Instances)
    {
        if (Instance->Outputs.ContainsByPredicate([Key](const FFuzzyAIObservationOutput& Output) { return Output.Key == Key; }))
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

#pragma endregion
#pragma region Sampling
void UFuzzyObservationManager::Sample(const TArray<FName>& SensorNames, UFuzzyObservationStore* Store,
    const FFuzzyAIObservationContext& Context, int32 Revision, double Time)
{
    for (UFuzzyObservation* Instance : Instances)
    {
        Instance->UpdateContext(Context);
        if (!SensorNames.Contains(Instance->GetFName()))
        {
            continue;
        }
        Store->BeginSample(Instance, Instance->Outputs,
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
        NextUpdateTimes.Add(Instance->GetFName(), Time + Instance->Interval);
    }
}
#pragma endregion
