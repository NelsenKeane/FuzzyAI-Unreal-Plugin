// Converts current observations, remembered facts and event occurrences into independent display rows.
// Reads committed snapshots only; it never samples sensors, changes targets or starts an enemy's AI.

#include "Debugger/FuzzyAIDebugModel.h"
#include "Core/FuzzyAIComponent.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationStore.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"

#pragma region Display Formatting
namespace FuzzyAIDebugger
{
    FString ActorName(const TWeakObjectPtr<AActor>& Actor)
    {
        if (const AActor* Value = Actor.Get())
        {
            return Value->GetActorNameOrLabel();
        }
        return Actor.IsStale() ? TEXT("Destroyed actor") : TEXT("None");
    }

    FString ValueType(EFuzzyAIObservationValueType Type)
    {
        switch (Type)
        {
        case EFuzzyAIObservationValueType::Float: return TEXT("Float");
        case EFuzzyAIObservationValueType::Integer: return TEXT("Integer");
        case EFuzzyAIObservationValueType::Boolean: return TEXT("Boolean");
        case EFuzzyAIObservationValueType::Vector: return TEXT("Vector");
        case EFuzzyAIObservationValueType::Object: return TEXT("Object");
        case EFuzzyAIObservationValueType::GameplayTag: return TEXT("Gameplay Tag");
        default: return TEXT("Unknown");
        }
    }

    FString RecordSubject(const FFuzzyAIObservationRecord& Record)
    {
        return Record.bTargetDependent ? ActorName(Record.Target) : TEXT("Self / Custom");
    }

    TSharedPtr<FFuzzyAIDebugRow> MakeRow(FName Key, const FFuzzyAIObservationResult& Result)
    {
        TSharedPtr<FFuzzyAIDebugRow> Row = MakeShared<FFuzzyAIDebugRow>();
        Row->Key = Key.ToString();
        Row->Type = ValueType(Result.ValueType);
        Row->Value = FFuzzyAIDebugModel::FormatValue(Result);
        Row->bUnavailable = !Result.bIsValid;
        return Row;
    }
}

FString FFuzzyAIDebugModel::FormatValue(const FFuzzyAIObservationResult& Result)
{
    if (!Result.bIsValid)
    {
        return TEXT("Unavailable");
    }
    switch (Result.ValueType)
    {
    case EFuzzyAIObservationValueType::Float: return FString::SanitizeFloat(Result.FloatValue);
    case EFuzzyAIObservationValueType::Integer: return FString::FromInt(Result.IntegerValue);
    case EFuzzyAIObservationValueType::Boolean: return Result.BooleanValue ? TEXT("True") : TEXT("False");
    case EFuzzyAIObservationValueType::Vector: return Result.VectorValue.ToCompactString();
    case EFuzzyAIObservationValueType::Object: return IsValid(Result.ObjectValue.Get()) ? Result.ObjectValue->GetName() : TEXT("None");
    case EFuzzyAIObservationValueType::GameplayTag: return Result.GameplayTagValue.ToString();
    default: return TEXT("Unknown");
    }
}

FString FFuzzyAIDebugModel::FormatAge(double Time, double Now)
{
    return Time < 0. ? TEXT("Never") : FString::Printf(TEXT("%.2f s"), FMath::Max(0., Now - Time));
}

FString FFuzzyAIDebugModel::DescribeWorld(const UWorld* World)
{
    if (!IsValid(World))
    {
        return TEXT("Unavailable world");
    }
    FString Role;
    switch (World->GetNetMode())
    {
    case NM_DedicatedServer: Role = TEXT("Dedicated server"); break;
    case NM_ListenServer: Role = TEXT("Listen server"); break;
    case NM_Client: Role = TEXT("Client (local cache)"); break;
    default: Role = TEXT("Standalone"); break;
    }
    if (World->WorldType == EWorldType::Editor)
    {
        return FString::Printf(TEXT("Editor | %s"), *World->GetName());
    }
    const FWorldContext* Context = GEngine ? GEngine->GetWorldContextFromWorld(World) : nullptr;
    const FString Instance = World->WorldType == EWorldType::PIE
        ? FString::Printf(TEXT("PIE %d"), Context ? Context->PIEInstance : INDEX_NONE) : TEXT("Game");
    return FString::Printf(TEXT("%s | %s | %s"), *Instance, *Role, *World->GetName());
}
#pragma endregion

#pragma region Enemy Discovery
TArray<TSharedPtr<FFuzzyAIDebugEnemy>> FFuzzyAIDebugModel::FindEnemies(const TArray<UWorld*>& Worlds)
{
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> Enemies;
    TSet<UFuzzyAIComponent*> Seen;
    for (UWorld* World : Worlds)
    {
        if (!IsValid(World) || (World->WorldType != EWorldType::PIE && World->WorldType != EWorldType::Game &&
            World->WorldType != EWorldType::Editor))
        {
            continue;
        }
        for (TActorIterator<AActor> It(World); It; ++It)
        {
            if (!IsValid(*It) || It->IsActorBeingDestroyed())
            {
                continue;
            }
            TArray<UFuzzyAIComponent*> Components;
            It->GetComponents<UFuzzyAIComponent>(Components);
            for (UFuzzyAIComponent* Component : Components)
            {
                if (!IsValid(Component) || !Component->IsRegistered() || Seen.Contains(Component))
                {
                    continue;
                }
                Seen.Add(Component);
                TSharedPtr<FFuzzyAIDebugEnemy> Enemy = MakeShared<FFuzzyAIDebugEnemy>();
                Enemy->Component = Component;
                Enemy->Name = FString::Printf(TEXT("%s / %s"), *It->GetActorNameOrLabel(), *Component->GetName());
                Enemy->World = DescribeWorld(World);
                Enemy->Identity = Component->GetPathName();
                Enemies.Add(Enemy);
            }
        }
    }
    Enemies.Sort([](const auto& A, const auto& B)
    {
        return A->World == B->World ? A->Name < B->Name : A->World < B->World;
    });
    return Enemies;
}
#pragma endregion

#pragma region Cached Component Snapshot
FFuzzyAIDebugSnapshot FFuzzyAIDebugModel::Read(const UFuzzyAIComponent* Component)
{
    FFuzzyAIDebugSnapshot Snapshot;
    const AActor* Owner = IsValid(Component) ? Component->GetOwner() : nullptr;
    const UWorld* World = IsValid(Owner) ? Owner->GetWorld() : nullptr;
    if (!IsValid(World) || Owner->IsActorBeingDestroyed())
    {
        return Snapshot;
    }

    using namespace FuzzyAIDebugger;
    const double Now = World->GetTimeSeconds();
    Snapshot.bAvailable = true;
    Snapshot.Title = FString::Printf(TEXT("%s / %s"), *Owner->GetActorNameOrLabel(), *Component->GetName());
    Snapshot.Summary = FString::Printf(TEXT("%s\n%s | Target: %s | Sensors: %d configured, %d runtime\nMemory limit: %d facts / %d events | Event age limit: %s"),
        *DescribeWorld(World), Component->IsObserving() ? TEXT("Running") : TEXT("Stopped - cached readings may be old"),
        *GetNameSafe(Component->GetTarget()), Component->ObservationInstances.Num(), Component->GetRuntimeObservationInstances().Num(),
        Component->MaxRememberedObservations, Component->MaxObservedEvents,
        Component->ObservedEventMaxAge > 0.f ? *FString::Printf(TEXT("%.1f s"), Component->ObservedEventMaxAge) : TEXT("No time expiry"));

    TArray<FString> Errors = Component->GetConfigurationErrors();
    if (const UFuzzyObservationStore* Store = Component->GetObservationStore())
    {
        Errors.Append(Store->GetWriteErrors());
    }
    Snapshot.Diagnostics = FString::Join(Errors, TEXT("\n"));

    for (const FFuzzyAIObservationRecord& Record : Component->GetObservationSnapshot())
    {
        TSharedPtr<FFuzzyAIDebugRow> Row = MakeRow(Record.Key, Record.Result);
        Row->State = Record.Result.bIsValid ? TEXT("Valid") : TEXT("Invalid");
        Row->Subject = RecordSubject(Record);
        Row->Age = FormatAge(Record.LastAttemptTime, Now);
        Row->Details = Record.Result.bIsValid
            ? FString::Printf(TEXT("Success age: %s | Change age: %s | Context: %d"),
                *FormatAge(Record.LastSuccessTime, Now), *FormatAge(Record.LastChangeTime, Now), Record.ContextRevision)
            : Record.Result.FailureReason;
        Snapshot.Store.Add(Row);
    }
    for (const FFuzzyAIRememberedObservation& Remembered : Component->GetMemorySnapshot())
    {
        const FFuzzyAIObservationRecord& Record = Remembered.Observation;
        TSharedPtr<FFuzzyAIDebugRow> Row = MakeRow(Record.Key, Record.Result);
        Row->State = TEXT("Remembered");
        Row->Subject = RecordSubject(Record);
        Row->Age = FormatAge(Record.LastSuccessTime, Now);
        Row->Details = Remembered.ExpiresAt < 0. ? TEXT("No time expiry")
            : FString::Printf(TEXT("Expires in %.2f s"), FMath::Max(0., Remembered.ExpiresAt - Now));
        Snapshot.Memory.Add(Row);
    }
    const TArray<FFuzzyAIObservedEvent> Events = Component->GetObservedEvents();
    for (int32 Index = Events.Num() - 1; Index >= 0; --Index)
    {
        const FFuzzyAIObservedEvent& Event = Events[Index];
        TSharedPtr<FFuzzyAIDebugRow> Row = MakeRow(Event.EventKey, Event.Payload);
        // An event occurrence is valid even when it has no payload.
        Row->bUnavailable = false;
        Row->State = Event.Payload.bIsValid ? TEXT("Recorded") : TEXT("No payload");
        if (!Event.Payload.bIsValid)
        {
            Row->Type = TEXT("None");
            Row->Value = TEXT("None");
        }
        Row->Subject = ActorName(Event.Target);
        Row->Age = FormatAge(Event.Time, Now);
        Row->Details = FString::Printf(TEXT("Source: %s | World time: %.2f s"), *ActorName(Event.Source), Event.Time);
        Snapshot.Events.Add(Row);
    }
    const auto KeyOrder = [](const auto& A, const auto& B)
    {
        return A->Key == B->Key ? A->Subject < B->Subject : A->Key < B->Key;
    };
    Snapshot.Store.Sort(KeyOrder);
    Snapshot.Memory.Sort(KeyOrder);
    return Snapshot;
}
#pragma endregion
