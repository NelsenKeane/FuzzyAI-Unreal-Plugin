#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "FuzzyAIComponent.h"
#include "Observation/ObservationRuntime.h"
#include "Observation/ObservationMemory.h"
#include "Observation/ObservationResultLibrary.h"
#include "Observation/StandardObservations.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "UObject/StrongObjectPtr.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/Sensors/FuzzyStandardObservations.h"

#if WITH_EDITOR
#include "Kismet2/KismetEditorUtilities.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "EdGraph/EdGraph.h"
#include "EdGraphSchema_K2.h"
#include "K2Node_Event.h"
#include "K2Node_CallFunction.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#endif

namespace FuzzyAIObservationTests
{
    struct FWorld
    {
        UWorld* World;

        FWorld()
        {
            const UWorld::InitializationValues Values = UWorld::InitializationValues()
                .AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false)
                .CreateAISystem(false).ShouldSimulatePhysics(false).SetTransactional(false);
            World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true,
                ERHIFeatureLevel::Num, &Values);
            GEngine->CreateNewWorldContext(EWorldType::Game).SetCurrentWorld(World);
        }

        ~FWorld()
        {
            World->DestroyWorld(false);
            GEngine->DestroyWorldContext(World);
        }

        AActor* Actor(FVector Location = FVector::ZeroVector)
        {
            AActor* Result = World->SpawnActor<AActor>();
            USceneComponent* Root = NewObject<USceneComponent>(Result);
            Result->SetRootComponent(Root);
            Root->RegisterComponent();
            Result->SetActorLocation(Location);
            return Result;
        }

        UFuzzyAIComponent* Component(AActor* Owner, const TArray<FFuzzyAIObservationEntry>& Entries)
        {
            UFuzzyAIComponent* Result = NewObject<UFuzzyAIComponent>(Owner);
            Result->bAutoStart = false;
            Result->Observations = Entries;
            Owner->AddInstanceComponent(Result);
            Result->RegisterComponent();
            return Result;
        }
    };
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationRuntimeTest, "FuzzyAI.Observation.Runtime",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationRuntimeTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    AActor* Observer = Fixture.Actor();
    AActor* Target = Fixture.Actor(FVector(250., 0., 0.));
    TStrongObjectPtr<UFuzzyAIDistanceObservation> Asset(NewObject<UFuzzyAIDistanceObservation>());
    TStrongObjectPtr<UFuzzyAIObservationRuntime> Runtime(NewObject<UFuzzyAIObservationRuntime>());
    FFuzzyAIObservationEntry Entry;
    Entry.Observation = Asset.Get();
    Entry.ChangeTolerance = 1.f;
    TArray<FString> Errors;
    TestTrue(TEXT("Valid configuration accepted"), Runtime->Initialize({Entry}, Errors));
    FFuzzyAIObservationContext Context;
    Context.Observer = Observer;
    Context.Target = Target;
    Context.bTargetVisible = true;
    TArray<FName> Sampled;
    const FName Key = Asset->ObservationKey;
    auto Changes = Runtime->Refresh({Key}, Context, 1, 1., Sampled);
    TestEqual(TEXT("Initial result notified once"), Changes.Num(), 1);
    FFuzzyAIObservationRecord Record;
    TestTrue(TEXT("Key exists"), Runtime->TryGetObservation(Key, Record));
    TestTrue(TEXT("Distance is valid"), Record.Result.bIsValid);
    TestEqual(TEXT("Distance in cm"), Record.Result.FloatValue, 250.f);
    Changes = Runtime->Refresh({Key}, Context, 1, 2., Sampled);
    TestEqual(TEXT("Unchanged reading stays quiet"), Changes.Num(), 0);
    Runtime->TryGetObservation(Key, Record);
    TestEqual(TEXT("Unchanged successful reading refreshes timestamp"), Record.LastSuccessTime, 2.);
    Target->SetActorLocation(FVector(250.6, 0., 0.));
    TestEqual(TEXT("Sub-tolerance change stays quiet"), Runtime->Refresh({Key}, Context, 1, 3., Sampled).Num(), 0);
    Target->SetActorLocation(FVector(251.2, 0., 0.));
    TestEqual(TEXT("Small changes accumulate against notified baseline"), Runtime->Refresh({Key}, Context, 1, 4., Sampled).Num(), 1);
    Context.bTargetVisible = false;
    TestEqual(TEXT("Sight loss notifies invalidity"), Runtime->Refresh({Key}, Context, 1, 5., Sampled).Num(), 1);
    Runtime->TryGetObservation(Key, Record);
    TestFalse(TEXT("Hidden target unavailable"), Record.Result.bIsValid);
    TestEqual(TEXT("Failed read does not advance success timestamp"), Record.LastSuccessTime, 4.);
    Context.Target = Fixture.Actor(Target->GetActorLocation());
    TestEqual(TEXT("New target with same value still notifies"), Runtime->Refresh({Key}, Context, 2, 6., Sampled).Num(), 1);
    Runtime->TryGetObservation(Key, Record);
    TestEqual(TEXT("New target has no inherited success time"), Record.LastSuccessTime, -1.);
    TestFalse(TEXT("Duplicate keys reject entire configuration"), Runtime->Initialize({Entry, Entry}, Errors));
    TestTrue(TEXT("Duplicate error returned"), !Errors.IsEmpty());
    TestTrue(TEXT("Rejected configuration has no runnable keys"), Runtime->GetKeys().IsEmpty());
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationMemoryTest, "FuzzyAI.Observation.Memory",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationMemoryTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    AActor* Observer = Fixture.Actor();
    AActor* TargetA = Fixture.Actor();
    AActor* TargetB = Fixture.Actor();
    TStrongObjectPtr<UFuzzyAIObservationMemory> Memory(NewObject<UFuzzyAIObservationMemory>());
    Memory->Initialize(2, 2, 5.f);
    FFuzzyAIObservationRecord Record;
    Record.Key = TEXT("Target.VisibleLocation");
    Record.Observer = Observer;
    Record.Target = TargetA;
    Record.bTargetDependent = true;
    Record.Result = UFuzzyAIObservationResultLibrary::MakeVectorResult(FVector::ZeroVector);
    Record.LastSuccessTime = 1.;
    TArray<FName> Changed;
    Memory->Remember(Record, 3.f, 0.f, Changed);
    FFuzzyAIRememberedObservation Remembered;
    TestTrue(TEXT("World origin is valid memory"), Memory->TryGetObservation(Record.Key, TargetA, 2., Remembered));
    TestFalse(TEXT("Memory does not cross targets"), Memory->TryGetObservation(Record.Key, TargetB, 2., Remembered));
    Record.Result.bIsValid = false;
    Record.LastAttemptTime = 2.;
    Memory->Remember(Record, 3.f, 0.f, Changed);
    TestTrue(TEXT("Invalid read preserves last-known memory"), Memory->TryGetObservation(Record.Key, TargetA, 3., Remembered));
    TestEqual(TEXT("Remembered time remains last sighting"), Remembered.Observation.LastSuccessTime, 1.);
    TestFalse(TEXT("Expiry enforced even before timer prunes"), Memory->TryGetObservation(Record.Key, TargetA, 4., Remembered));
    Changed.Reset();
    Memory->Prune(4., Changed);
    TestEqual(TEXT("Expiry reports changed key"), Changed.Num(), 1);
    Record.Result = UFuzzyAIObservationResultLibrary::MakeFloatResult(1.f);
    Record.LastSuccessTime = 5.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    Record.Target = TargetB;
    Record.LastSuccessTime = 6.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    Record.Key = TEXT("AnotherFact");
    Record.LastSuccessTime = 7.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    TestEqual(TEXT("Memory capacity bounded"), Memory->GetSnapshot(7.).Num(), 2);
    TestFalse(TEXT("Least recently observed memory evicted"), Memory->TryGetObservation(TEXT("Target.VisibleLocation"), TargetA, 7., Remembered));
    FFuzzyAIObservedEvent Event;
    Event.EventKey = TEXT("Combat.DodgeAttempt");
    Memory->RecordEvent(Event, 1.);
    Memory->RecordEvent(Event, 2.);
    TestEqual(TEXT("Repeated identical events are separate occurrences"), Memory->GetEvents(2.).Num(), 2);
    Memory->RecordEvent(Event, 3.);
    TestEqual(TEXT("Event capacity bounded"), Memory->GetEvents(3.).Num(), 2);
    TestEqual(TEXT("Oldest event evicted"), Memory->GetEvents(3.)[0].Time, 2.);
    Memory->RecordEvent(Event, 2.5);
    TestEqual(TEXT("Deferred events retain chronological order and capacity"), Memory->GetEvents(3.)[0].Time, 2.5);
    TestTrue(TEXT("Events expire by age"), Memory->GetEvents(8.).IsEmpty());
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationPoliciesTest, "FuzzyAI.Observation.UpdatePolicies",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationPoliciesTest::RunTest(const FString& Parameters)
{
    TStrongObjectPtr<UFuzzyAIObservationRuntime> Runtime(NewObject<UFuzzyAIObservationRuntime>());
    TArray<FFuzzyAIObservationEntry> Entries;
    TArray<TStrongObjectPtr<UFuzzyAIDistanceObservation>> Assets;
    const EFuzzyAIObservationUpdatePolicy Policies[] = { EFuzzyAIObservationUpdatePolicy::Interval,
        EFuzzyAIObservationUpdatePolicy::SourceEvent, EFuzzyAIObservationUpdatePolicy::EveryFrame, EFuzzyAIObservationUpdatePolicy::Manual };
    for (int32 Index = 0; Index < 4; ++Index)
    {
        Assets.Emplace(NewObject<UFuzzyAIDistanceObservation>());
        Assets.Last()->ObservationKey = FName(*FString::Printf(TEXT("Policy%d"), Index));
        FFuzzyAIObservationEntry Entry;
        Entry.Observation = Assets.Last().Get();
        Entry.UpdatePolicy = Policies[Index];
        Entry.Interval = 0.2f;
        Entries.Add(Entry);
    }
    TArray<FString> Errors;
    TestTrue(TEXT("All policies initialize"), Runtime->Initialize(Entries, Errors));
    TestTrue(TEXT("Every-frame entry enables frame scheduling"), Runtime->NeedsEveryFrame());
    TArray<FName> Sampled;
    Runtime->Refresh(Runtime->GetKeys(), FFuzzyAIObservationContext(), 0, 0., Sampled);
    TestEqual(TEXT("Initial sample includes event/manual entries"), Sampled.Num(), 4);
    TestEqual(TEXT("Intervals not sampled early"), Runtime->GetDueKeys(0.1, false).Num(), 0);
    TestEqual(TEXT("Only interval entry scheduled by timer"), Runtime->GetDueKeys(0.21, false).Num(), 1);
    TestEqual(TEXT("Only frame entry scheduled by tick"), Runtime->GetDueKeys(0.21, true).Num(), 1);
    Entries.RemoveAt(2);
    Runtime->Initialize(Entries, Errors);
    TestFalse(TEXT("Tick unnecessary without every-frame entries"), Runtime->NeedsEveryFrame());
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationComponentTest, "FuzzyAI.Observation.ComponentIntegration",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationComponentTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    AActor* EnemyA = Fixture.Actor();
    AActor* EnemyB = Fixture.Actor();
    AActor* TargetA = Fixture.Actor(FVector(100., 0., 0.));
    AActor* TargetB = Fixture.Actor(FVector(200., 0., 0.));
    TStrongObjectPtr<UFuzzyAIVisibleTargetLocationObservation> Location(NewObject<UFuzzyAIVisibleTargetLocationObservation>());
    FFuzzyAIObservationEntry Entry;
    Entry.Observation = Location.Get();
    Entry.UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
    Entry.bRememberLastSuccessful = true;
    Entry.bRequiresVisibleTarget = true;
    UFuzzyAIComponent* A = Fixture.Component(EnemyA, {Entry});
    UFuzzyAIComponent* B = Fixture.Component(EnemyB, {Entry});
    TestTrue(TEXT("First enemy starts"), A->StartAI());
    TestTrue(TEXT("Second enemy starts"), B->StartAI());
    TestFalse(TEXT("Event-only component tick disabled"), A->IsComponentTickEnabled());
    A->UpdateTargetSighting(TargetA, true);
    B->UpdateTargetSighting(TargetB, true);
    TestEqual(TEXT("First enemy owns independent result"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(100., 0., 0.));
    TestEqual(TEXT("Second enemy shares asset but not state"), B->GetTargetLocationKnowledge().ActiveLocation, FVector(200., 0., 0.));
    TargetA->SetActorLocation(FVector(150., 0., 0.));
    TestEqual(TEXT("Source event cache unchanged before notification"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(100., 0., 0.));
    TestTrue(TEXT("Source notification accepted"), A->NotifyObservationSourceChanged(Location->ObservationKey));
    TestEqual(TEXT("Source notification samples new position"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(150., 0., 0.));
    A->UpdateTargetSighting(TargetA, false);
    TargetA->SetActorLocation(FVector(999., 0., 0.));
    A->RequestObservationRefresh(Location->ObservationKey);
    auto Knowledge = A->GetTargetLocationKnowledge();
    TestFalse(TEXT("Active location unavailable after sight loss"), Knowledge.bHasActiveLocation);
    TestTrue(TEXT("Last sighting retained"), Knowledge.bHasLastSeenLocation);
    TestEqual(TEXT("Hidden movement never updates last-seen location"), Knowledge.LastSeenLocation, FVector(150., 0., 0.));
    A->SetTarget(TargetB);
    TestFalse(TEXT("New target does not inherit old target's memory"), A->GetTargetLocationKnowledge().bHasLastSeenLocation);
    FFuzzyAIRememberedObservation OldMemory;
    TestTrue(TEXT("Old target memory remains explicitly queryable"), A->TryGetRememberedObservation(Location->ObservationKey, TargetA, OldMemory));
    A->UpdateTargetSighting(TargetB, true);
    TargetB->Destroy();
    TestFalse(TEXT("Destroyed target clears active knowledge"), A->GetTargetLocationKnowledge().bHasActiveLocation);
    A->StopAI();
    B->StopAI();
    TestFalse(TEXT("Stopped component rejects refresh"), A->RequestObservationRefresh(Location->ObservationKey));
    TestTrue(TEXT("Restart succeeds"), A->StartAI());
    TestTrue(TEXT("Restart begins a new memory session"), A->GetMemorySnapshot().IsEmpty());
    A->StopAI();
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationStoreTest, "FuzzyAI.Observation.TypedStore",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationStoreTest::RunTest(const FString& Parameters)
{
    FuzzyAIObservationTests::FWorld Fixture;
    TStrongObjectPtr<UFuzzyObservationStore> Store(NewObject<UFuzzyObservationStore>());
    TStrongObjectPtr<UFuzzyAIDistanceObservation> Writer(NewObject<UFuzzyAIDistanceObservation>());
    TStrongObjectPtr<UFuzzyAIDistanceObservation> OtherWriter(NewObject<UFuzzyAIDistanceObservation>());
    FFuzzyAIObservationContext Context;
    Context.Observer = Fixture.Actor();
    FFuzzyAIObservationEntry Settings;
    TestFalse(TEXT("Consumers cannot write outside Sample"), Store->SetFloat(TEXT("Test.Float"), 1.f));
    Store->BeginBatch(1.);
    Store->BeginSample(Writer.Get(), NAME_None, EFuzzyAIObservationValueType::Float, Settings, false, Context, 0);
    Store->SetFloat(TEXT("Test.Float"), 0.f);
    Store->SetBoolean(TEXT("Test.Bool"), false);
    float Number = -1.f;
    TestFalse(TEXT("Staged data not exposed before commit"), Store->GetFloat(TEXT("Test.Float"), Number));
    Store->EndSample();
    TArray<FName> Sampled;
    TestEqual(TEXT("One sensor can publish two outputs"), Store->Commit(Sampled).Num(), 2);
    TestTrue(TEXT("Zero is a valid float"), Store->GetFloat(TEXT("Test.Float"), Number));
    bool Flag = true;
    TestTrue(TEXT("False is a valid bool"), Store->GetBoolean(TEXT("Test.Bool"), Flag));
    TestFalse(TEXT("Boolean value preserved"), Flag);
    TestFalse(TEXT("Wrong typed getter fails"), Store->GetFloat(TEXT("Test.Bool"), Number));
    Store->BeginBatch(2.);
    Store->BeginSample(Writer.Get(), NAME_None, EFuzzyAIObservationValueType::Float, Settings, false, Context, 0);
    Store->SetFloat(TEXT("Test.Float"), 2.f);
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Omitted output becomes unavailable instead of staying stale"), Store->GetBoolean(TEXT("Test.Bool"), Flag));
    Store->BeginBatch(3.);
    Store->BeginSample(OtherWriter.Get(), TEXT("Test.Float"), EFuzzyAIObservationValueType::Float, Settings, false, Context, 0);
    TestFalse(TEXT("A different sensor cannot overwrite an owned key"), Store->SetFloat(TEXT("Test.Float"), 99.f));
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Conflicting key marked unavailable"), Store->GetFloat(TEXT("Test.Float"), Number));
    TestFalse(TEXT("Conflict diagnostic exposed"), Store->GetWriteErrors().IsEmpty());
    Store->BeginBatch(4.);
    Store->BeginSample(Writer.Get(), TEXT("Test.Float"), EFuzzyAIObservationValueType::Float, Settings, false, Context, 0);
    TestFalse(TEXT("Primary output type checked"), Store->SetBoolean(TEXT("Test.Float"), true));
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Wrong output type is unavailable"), Store->GetFloat(TEXT("Test.Float"), Number));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationInstancesTest, "FuzzyAI.Observation.InstancedSensors",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationInstancesTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    UFuzzyAIComponent* A = Fixture.Component(Fixture.Actor(), {});
    UFuzzyAIComponent* B = Fixture.Component(Fixture.Actor(), {});
    UFuzzyDistanceObservation* Distance = NewObject<UFuzzyDistanceObservation>(A);
    UFuzzyLineOfSightObservation* Sight = NewObject<UFuzzyLineOfSightObservation>(A);
    UFuzzyTargetLocationObservation* Location = NewObject<UFuzzyTargetLocationObservation>(A);
    Location->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
    UFuzzyDistanceObservation* Disabled = NewObject<UFuzzyDistanceObservation>(A);
    Disabled->bEnabled = false;
    Disabled->ObservationKey = TEXT("Disabled.Distance");
    Disabled->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::EveryFrame;
    A->ObservationInstances = {Distance, Sight, Location, Disabled};
    B->ObservationInstances = A->ObservationInstances;
    TestTrue(TEXT("Inline observations start"), A->StartAI());
    TestTrue(TEXT("Shared configuration can start another enemy"), B->StartAI());
    TestEqual(TEXT("Disabled observations are not instantiated"), A->GetRuntimeObservationInstances().Num(), 3);
    TestFalse(TEXT("Disabled frame sensor does not enable tick"), A->IsComponentTickEnabled());
    auto InstancesA = A->GetRuntimeObservationInstances();
    auto InstancesB = B->GetRuntimeObservationInstances();
    if (InstancesA.Num() != 3 || InstancesB.Num() != 3)
    {
        return false;
    }
    TestTrue(TEXT("Runtime instance differs from template"), InstancesA[0] != Distance);
    TestTrue(TEXT("Each enemy owns distinct sensor instances"), InstancesA[0] != InstancesB[0]);
    TestTrue(TEXT("Instance is owned by its coordinator"), InstancesA[0]->GetOuter() == A);
    TestNull(TEXT("Template did not acquire runtime state"), Distance->GetObservationStore());
    AActor* Target = Fixture.Actor(FVector(250., 0., 0.));
    A->UpdateTargetSighting(Target, true);
    float Value = 0.f;
    TestTrue(TEXT("Typed blackboard exposes distance"), A->GetObservationStore()->GetFloat(TEXT("Target.Distance"), Value));
    TestEqual(TEXT("Distance sample is correct"), Value, 250.f);
    bool bVisible = false;
    TestTrue(TEXT("Sight observation has a valid bool"), A->GetObservationStore()->GetBoolean(TEXT("Target.HasLineOfSight"), bVisible));
    TestTrue(TEXT("Sight is true"), bVisible);
    TestFalse(TEXT("Second enemy does not inherit first enemy readings"), B->GetObservationStore()->GetFloat(TEXT("Target.Distance"), Value));
    A->UpdateTargetSighting(Target, false);
    Target->SetActorLocation(FVector(999., 0., 0.));
    TestFalse(TEXT("Current distance becomes unavailable"), A->GetObservationStore()->GetFloat(TEXT("Target.Distance"), Value));
    TestTrue(TEXT("Sight false remains valid knowledge"), A->GetObservationStore()->GetBoolean(TEXT("Target.HasLineOfSight"), bVisible));
    TestFalse(TEXT("Sight is false"), bVisible);
    TestEqual(TEXT("Last-seen location preserved"), A->GetTargetLocationKnowledge().LastSeenLocation, FVector(250., 0., 0.));
    A->StopAI();
    for (UFuzzyObservation* Instance : InstancesA)
    {
        TestNull(TEXT("Shutdown releases store access"), Instance->GetObservationStore());
        TestFalse(TEXT("Shutdown sensor cannot request collection"), Instance->RequestRefresh());
    }
    B->StopAI();
    return true;
}

#if WITH_EDITOR
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationBlueprintTest, "FuzzyAI.Observation.BlueprintComponent",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationBlueprintTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    const FName BlueprintName = MakeUniqueObjectName(GetTransientPackage(), UBlueprint::StaticClass(), TEXT("FuzzyAIObservationTestBP"));
    TStrongObjectPtr<UBlueprint> Blueprint(FKismetEditorUtilities::CreateBlueprint(AActor::StaticClass(), GetTransientPackage(),
        BlueprintName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass()));
    if (!TestNotNull(TEXT("Transient enemy Blueprint created"), Blueprint.Get()))
    {
        return false;
    }
    USCS_Node* Node = Blueprint->SimpleConstructionScript->CreateNode(UFuzzyAIComponent::StaticClass(), TEXT("FuzzyAI"));
    Blueprint->SimpleConstructionScript->AddNode(Node);
    UFuzzyAIComponent* Template = CastChecked<UFuzzyAIComponent>(Node->ComponentTemplate);
    Template->bAutoStart = false;
    UFuzzyAIDistanceObservation* Distance = NewObject<UFuzzyAIDistanceObservation>(Blueprint.Get());
    FFuzzyAIObservationEntry Entry;
    Entry.Observation = Distance;
    Entry.UpdatePolicy = EFuzzyAIObservationUpdatePolicy::Manual;
    Template->Observations.Add(Entry);
    FKismetEditorUtilities::CompileBlueprint(Blueprint.Get());
    TestTrue(TEXT("Enemy Blueprint compiles with single FuzzyAI component"), Blueprint->Status != BS_Error);
    AActor* Enemy = Fixture.World->SpawnActor<AActor>(Blueprint->GeneratedClass);
    if (!TestNotNull(TEXT("Blueprint enemy spawned"), Enemy))
    {
        return false;
    }
    UFuzzyAIComponent* Component = Enemy->FindComponentByClass<UFuzzyAIComponent>();
    if (!TestNotNull(TEXT("FuzzyAI component instantiated from Blueprint"), Component))
    {
        return false;
    }
    TestEqual(TEXT("Observation entry survives Blueprint compilation"), Component->Observations.Num(), 1);
    TestTrue(TEXT("Blueprint component starts"), Component->StartAI());
    Component->UpdateTargetSighting(Fixture.Actor(FVector(250., 0., 0.)), true);
    FFuzzyAIObservationRecord Result;
    TestTrue(TEXT("Blueprint component exposes result"), Component->TryGetObservation(Distance->ObservationKey, Result));
    TestTrue(TEXT("Blueprint-configured distance is valid"), Result.Result.bIsValid);
    TestEqual(TEXT("Blueprint-configured distance is correct"), Result.Result.FloatValue, 250.f);
    TArray<UFuzzyAIComponent*> Components;
    Enemy->GetComponents(Components);
    TestEqual(TEXT("Exactly one actor component for FuzzyAI"), Components.Num(), 1);
    Component->StopAI();
    return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationBlueprintSensorTest, "FuzzyAI.Observation.BlueprintSensorSample",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationBlueprintSensorTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    const FName SensorName = MakeUniqueObjectName(GetTransientPackage(), UBlueprint::StaticClass(), TEXT("FuzzySensorBP"));
    TStrongObjectPtr<UBlueprint> SensorBP(FKismetEditorUtilities::CreateBlueprint(UFuzzyObservation::StaticClass(), GetTransientPackage(),
        SensorName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass()));
    if (!TestNotNull(TEXT("Blueprint sensor created"), SensorBP.Get()))
    {
        return false;
    }
    UEdGraph* Graph = FBlueprintEditorUtils::CreateNewGraph(SensorBP.Get(), TEXT("SensorEvents"), UEdGraph::StaticClass(), UEdGraphSchema_K2::StaticClass());
    FBlueprintEditorUtils::AddUbergraphPage(SensorBP.Get(), Graph);
    UK2Node_Event* SampleEvent = NewObject<UK2Node_Event>(Graph);
    SampleEvent->EventReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UFuzzyObservation, Sample), UFuzzyObservation::StaticClass());
    SampleEvent->bOverrideFunction = true;
    Graph->AddNode(SampleEvent);
    SampleEvent->CreateNewGuid();
    SampleEvent->PostPlacedNewNode();
    SampleEvent->AllocateDefaultPins();
    const UEdGraphSchema_K2* Schema = GetDefault<UEdGraphSchema_K2>();
    auto AddWrite = [&](FName Function, const FString& Key, const FString& Value)
    {
        UK2Node_CallFunction* Call = NewObject<UK2Node_CallFunction>(Graph);
        Call->SetFromFunction(UFuzzyObservationStore::StaticClass()->FindFunctionByName(Function));
        Graph->AddNode(Call);
        Call->CreateNewGuid();
        Call->PostPlacedNewNode();
        Call->AllocateDefaultPins();
        Call->FindPinChecked(TEXT("Key"))->DefaultValue = Key;
        Call->FindPinChecked(TEXT("Value"))->DefaultValue = Value;
        TestTrue(TEXT("Store pin connects to typed setter"), Schema->TryCreateConnection(
            SampleEvent->FindPinChecked(TEXT("Store")), Call->FindPinChecked(UEdGraphSchema_K2::PN_Self)));
        return Call;
    };
    UK2Node_CallFunction* FloatWrite = AddWrite(GET_FUNCTION_NAME_CHECKED(UFuzzyObservationStore, SetFloat), TEXT("BP.Float"), TEXT("75.0"));
    UK2Node_CallFunction* BoolWrite = AddWrite(GET_FUNCTION_NAME_CHECKED(UFuzzyObservationStore, SetBoolean), TEXT("BP.Bool"), TEXT("false"));
    TestTrue(TEXT("Sample execution connects to float write"), Schema->TryCreateConnection(
        SampleEvent->FindPinChecked(UEdGraphSchema_K2::PN_Then), FloatWrite->FindPinChecked(UEdGraphSchema_K2::PN_Execute)));
    TestTrue(TEXT("Multiple writes execute in one sample"), Schema->TryCreateConnection(
        FloatWrite->FindPinChecked(UEdGraphSchema_K2::PN_Then), BoolWrite->FindPinChecked(UEdGraphSchema_K2::PN_Execute)));
    FKismetEditorUtilities::CompileBlueprint(SensorBP.Get());
    if (!TestTrue(TEXT("Blueprint Sample override compiles"), SensorBP->Status != BS_Error))
    {
        return false;
    }
    const FName EnemyName = MakeUniqueObjectName(GetTransientPackage(), UBlueprint::StaticClass(), TEXT("FuzzyInlineEnemyBP"));
    TStrongObjectPtr<UBlueprint> EnemyBP(FKismetEditorUtilities::CreateBlueprint(AActor::StaticClass(), GetTransientPackage(),
        EnemyName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass()));
    USCS_Node* Node = EnemyBP->SimpleConstructionScript->CreateNode(UFuzzyAIComponent::StaticClass(), TEXT("FuzzyAI"));
    EnemyBP->SimpleConstructionScript->AddNode(Node);
    UFuzzyAIComponent* ComponentTemplate = CastChecked<UFuzzyAIComponent>(Node->ComponentTemplate);
    ComponentTemplate->bAutoStart = false;
    UFuzzyObservation* SensorTemplate = NewObject<UFuzzyObservation>(ComponentTemplate, SensorBP->GeneratedClass);
    SensorTemplate->ObservationId = TEXT("Blueprint.Sensor");
    SensorTemplate->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
    ComponentTemplate->ObservationInstances.Add(SensorTemplate);
    FKismetEditorUtilities::CompileBlueprint(EnemyBP.Get());
    if (!TestTrue(TEXT("Enemy Blueprint compiles with inline Blueprint sensor"), EnemyBP->Status != BS_Error))
    {
        return false;
    }
    AActor* Enemy = Fixture.World->SpawnActor<AActor>(EnemyBP->GeneratedClass);
    UFuzzyAIComponent* Component = Enemy ? Enemy->FindComponentByClass<UFuzzyAIComponent>() : nullptr;
    if (!TestNotNull(TEXT("Enemy Blueprint instantiates the component"), Component))
    {
        return false;
    }
    TestEqual(TEXT("Inline sensor survives Blueprint compilation"), Component->ObservationInstances.Num(), 1);
    if (!TestTrue(TEXT("Inline Blueprint system starts"), Component->StartAI()))
    {
        return false;
    }
    float Value = 0.f;
    bool Flag = true;
    TestTrue(TEXT("Blueprint wrote float through Sample"), Component->GetObservationStore()->GetFloat(TEXT("BP.Float"), Value));
    TestEqual(TEXT("Blueprint float value correct"), Value, 75.f);
    TestTrue(TEXT("Blueprint wrote second typed output"), Component->GetObservationStore()->GetBoolean(TEXT("BP.Bool"), Flag));
    TestFalse(TEXT("Blueprint false value is valid"), Flag);
    TestTrue(TEXT("Dynamic output key resolves source observation"), Component->NotifyObservationSourceChanged(TEXT("BP.Float")));
    Component->StopAI();
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIExistingObservationAssetTest, "FuzzyAI.Observation.ExistingAssetCompatibility",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIExistingObservationAssetTest::RunTest(const FString& Parameters)
{
    const auto VerifyRedirect = [this](UObject* Expected)
    {
        const FString OldPath = TEXT("/Script/FuzzyAIObservation.") + Expected->GetName();
        UObject* Resolved = StaticLoadObject(Expected->GetClass(), nullptr, *OldPath);
        TestTrue(FString::Printf(TEXT("Legacy path resolves: %s"), *OldPath), Resolved == Expected);
        TestTrue(TEXT("Reflected type belongs to runtime package"),
            Expected->GetOutermost()->GetName() == TEXT("/Script/FuzzyAIRuntime"));
    };
    VerifyRedirect(UFuzzyAIObservationAsset::StaticClass());
    VerifyRedirect(UFuzzyAIObservationRuntime::StaticClass());
    VerifyRedirect(UFuzzyAIObservationMemory::StaticClass());
    VerifyRedirect(UFuzzyAIObservationResultLibrary::StaticClass());
    VerifyRedirect(UFuzzyAIDistanceObservation::StaticClass());
    VerifyRedirect(UFuzzyAIVisibleTargetLocationObservation::StaticClass());
    VerifyRedirect(FFuzzyAIObservationContext::StaticStruct());
    VerifyRedirect(FFuzzyAIObservationResult::StaticStruct());
    VerifyRedirect(FFuzzyAIObservationEntry::StaticStruct());
    VerifyRedirect(FFuzzyAIObservationRecord::StaticStruct());
    VerifyRedirect(FFuzzyAIRememberedObservation::StaticStruct());
    VerifyRedirect(FFuzzyAIObservedEvent::StaticStruct());
    VerifyRedirect(FFuzzyAITargetLocationKnowledge::StaticStruct());
    VerifyRedirect(StaticEnum<EFuzzyAIObservationValueType>());
    VerifyRedirect(StaticEnum<EFuzzyAIObservationSubject>());
    VerifyRedirect(StaticEnum<EFuzzyAIObservationUpdatePolicy>());
    FString AssetPath;
    if (FParse::Value(FCommandLine::Get(), TEXT("FuzzyAIValidationAsset="), AssetPath))
    {
        UObject* Asset = LoadObject<UObject>(nullptr, *AssetPath);
        if (!TestNotNull(TEXT("Existing authored observation loads"), Asset))
        {
            return false;
        }
        if (UBlueprint* Blueprint = Cast<UBlueprint>(Asset))
        {
            FKismetEditorUtilities::CompileBlueprint(Blueprint);
            TestTrue(TEXT("Existing observation Blueprint compiles"), Blueprint->Status != BS_Error);
            TestTrue(TEXT("Existing observation keeps its base class"), Blueprint->GeneratedClass &&
                Blueprint->GeneratedClass->IsChildOf(UFuzzyAIObservationAsset::StaticClass()));
        }
        else
        {
            TestTrue(TEXT("Existing observation instance remains compatible"), Asset->IsA<UFuzzyAIObservationAsset>());
        }
    }
    return true;
}
#endif

#endif
