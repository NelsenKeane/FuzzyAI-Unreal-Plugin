// Exercises the working observation layer using transient worlds and Blueprint fixtures.
// Covers inline sampling, typed storage, lifecycle, memory, scheduling and Blueprint authoring.

#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Misc/PackageName.h"
#include "UObject/UnrealType.h"
#include "FuzzyAIComponent.h"
#include "Observation/ObservationMemory.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "UObject/StrongObjectPtr.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationManager.h"
#include "Observation/ObservationKeys.h"
#include "GameplayTagsManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
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
#endif

#pragma region Test Fixtures
namespace FuzzyAIObservationTests
{
    FGameplayTag Tag(const TCHAR* Name)
    {
        return FGameplayTag::RequestGameplayTag(FName(*(FString(TEXT("Observation.")) + Name)));
    }

    FFuzzyAIObservationOutput Output(FGameplayTag Key, EFuzzyAIObservationValueType Type = EFuzzyAIObservationValueType::Float)
    {
        FFuzzyAIObservationOutput Result;
        Result.Key = Key;
        Result.ValueType = Type;
        return Result;
    }

    struct FWorld
    {
        UWorld* World;
        FString TagFixturePath;

        FWorld()
        {
            TagFixturePath = IPluginManager::Get().FindPlugin(TEXT("FuzzyAI"))->GetBaseDir() / TEXT("Tests/Tags");
            UGameplayTagsManager::Get().AddTagIniSearchPath(TagFixturePath);
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
            UGameplayTagsManager::Get().RemoveTagIniSearchPath(TagFixturePath);
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

        UFuzzyAIComponent* Component(AActor* Owner, const TArray<TObjectPtr<UFuzzyObservation>>& Sensors = {})
        {
            UFuzzyAIComponent* Result = NewObject<UFuzzyAIComponent>(Owner);
            Result->bAutoStart = false;
            Result->ObservationInstances = Sensors;
            Owner->AddInstanceComponent(Result);
            Result->RegisterComponent();
            return Result;
        }
    };
}

#pragma endregion
#pragma region Sampling Tests
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationSamplingTest, "FuzzyAI.Observation.Sampling",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationSamplingTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    AActor* Observer = Fixture.Actor();
    AActor* Target = Fixture.Actor(FVector(250., 0., 0.));
    UFuzzyAIComponent* Owner = Fixture.Component(Observer);
    TStrongObjectPtr<UFuzzyDistanceObservation> Sensor(NewObject<UFuzzyDistanceObservation>(Owner));
    Sensor->Outputs[0].ChangeTolerance = 1.f;
    TStrongObjectPtr<UFuzzyObservationManager> Manager(NewObject<UFuzzyObservationManager>(Owner));
    TStrongObjectPtr<UFuzzyObservationStore> Store(NewObject<UFuzzyObservationStore>(Owner));
    TArray<FString> Errors;
    TestTrue(TEXT("Valid inline configuration accepted"), Manager->Initialize({Sensor.Get()}, Owner, Errors));
    FFuzzyAIObservationContext Context;
    Context.Observer = Observer;
    Context.Target = Target;
    Context.bTargetVisible = true;
    Manager->Start(Owner, Store.Get(), Context);
    TArray<FGameplayTag> Sampled;
    int32 Revision = 1;
    const auto Sample = [&](double Time)
    {
        Store->BeginBatch(Time);
        Manager->Sample(Manager->GetSensorNames(), Store.Get(), Context, Revision, Time);
        return Store->Commit(Sampled);
    };
    const FGameplayTag Key = Sensor->Outputs[0].Key;
    TestEqual(TEXT("Initial result notified once"), Sample(1.).Num(), 1);
    FFuzzyAIObservationRecord Record;
    TestTrue(TEXT("Key exists"), Store->TryGetObservation(Key, Record));
    TestTrue(TEXT("Distance is valid"), Record.Result.bIsValid);
    TestEqual(TEXT("Distance in cm"), Record.Result.FloatValue, 250.f);
    TestEqual(TEXT("Unchanged reading stays quiet"), Sample(2.).Num(), 0);
    Store->TryGetObservation(Key, Record);
    TestEqual(TEXT("Successful reading refreshes timestamp"), Record.LastSuccessTime, 2.);
    Target->SetActorLocation(FVector(250.6, 0., 0.));
    TestEqual(TEXT("Sub-tolerance change stays quiet"), Sample(3.).Num(), 0);
    Target->SetActorLocation(FVector(251.2, 0., 0.));
    TestEqual(TEXT("Changes accumulate against notified baseline"), Sample(4.).Num(), 1);
    Context.bTargetVisible = false;
    TestEqual(TEXT("Sight loss notifies invalidity"), Sample(5.).Num(), 1);
    Store->TryGetObservation(Key, Record);
    TestFalse(TEXT("Hidden target unavailable"), Record.Result.bIsValid);
    TestEqual(TEXT("Failure preserves last-success time"), Record.LastSuccessTime, 4.);
    Context.Target = Fixture.Actor(Target->GetActorLocation());
    ++Revision;
    TestEqual(TEXT("New context notifies even with same invalid value"), Sample(6.).Num(), 1);
    Store->TryGetObservation(Key, Record);
    TestEqual(TEXT("New target has no inherited success time"), Record.LastSuccessTime, -1.);
    TestFalse(TEXT("Duplicate output keys reject configuration"), Manager->Initialize({Sensor.Get(), Sensor.Get()}, Owner, Errors));
    TestFalse(TEXT("Duplicate error returned"), Errors.IsEmpty());
    TestTrue(TEXT("Rejected configuration has no runnable sensors"), Manager->GetSensorNames().IsEmpty());
    Sensor->Interval = -1.f;
    TestFalse(TEXT("Invalid timing rejects configuration"), Manager->Initialize({Sensor.Get()}, Owner, Errors));
    Sensor->Interval = 0.2f;
    TestTrue(TEXT("Corrected settings can start again"), Manager->Initialize({Sensor.Get()}, Owner, Errors));
    TestTrue(TEXT("Successful retry clears stale errors"), Errors.IsEmpty());
    Manager->Shutdown();
    return true;
}

#pragma endregion
#pragma region Memory Tests
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
    Record.Key = Tag(TEXT("Target.VisibleLocation"));
    Record.Observer = Observer;
    Record.Target = TargetA;
    Record.bTargetDependent = true;
    Record.Result = FFuzzyAIObservationResult::MakeVector(FVector::ZeroVector);
    Record.LastSuccessTime = 1.;
    TArray<FGameplayTag> Changed;
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
    Record.Result = FFuzzyAIObservationResult::MakeFloat(1.f);
    Record.LastSuccessTime = 5.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    Record.Target = TargetB;
    Record.LastSuccessTime = 6.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    Record.Key = Tag(TEXT("AnotherFact"));
    Record.LastSuccessTime = 7.;
    Memory->Remember(Record, 0.f, 0.f, Changed);
    TestEqual(TEXT("Memory capacity bounded"), Memory->GetSnapshot(7.).Num(), 2);
    TestFalse(TEXT("Least recently observed memory evicted"), Memory->TryGetObservation(Tag(TEXT("Target.VisibleLocation")), TargetA, 7., Remembered));
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

#pragma endregion
#pragma region Update Policy Tests
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationPoliciesTest, "FuzzyAI.Observation.UpdatePolicies",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationPoliciesTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    UFuzzyAIComponent* Owner = Fixture.Component(Fixture.Actor());
    TStrongObjectPtr<UFuzzyObservationManager> Manager(NewObject<UFuzzyObservationManager>(Owner));
    TStrongObjectPtr<UFuzzyObservationStore> Store(NewObject<UFuzzyObservationStore>(Owner));
    TArray<TObjectPtr<UFuzzyObservation>> Sensors;
    const EFuzzyAIObservationUpdatePolicy Policies[] = { EFuzzyAIObservationUpdatePolicy::Interval,
        EFuzzyAIObservationUpdatePolicy::SourceEvent, EFuzzyAIObservationUpdatePolicy::EveryFrame, EFuzzyAIObservationUpdatePolicy::Manual };
    for (int32 Index = 0; Index < 4; ++Index)
    {
        UFuzzyDistanceObservation* Sensor = NewObject<UFuzzyDistanceObservation>(Owner);
        Sensor->Outputs[0].Key = Tag(*FString::Printf(TEXT("Policy%d"), Index));
        Sensor->UpdatePolicy = Policies[Index];
        Sensor->Interval = 0.2f;
        Sensors.Add(Sensor);
    }
    TArray<FString> Errors;
    TestTrue(TEXT("All inline policies initialize"), Manager->Initialize(Sensors, Owner, Errors));
    TestTrue(TEXT("Frame sensor enables frame scheduling"), Manager->NeedsEveryFrame());
    FFuzzyAIObservationContext Context;
    Context.Observer = Owner->GetOwner();
    Context.Target = Fixture.Actor(FVector(100., 0., 0.));
    Context.bTargetVisible = true;
    Manager->Start(Owner, Store.Get(), Context);
    Store->BeginBatch(0.);
    Manager->Sample(Manager->GetSensorNames(), Store.Get(), Context, 0, 0.);
    TArray<FGameplayTag> Sampled;
    Store->Commit(Sampled);
    TestEqual(TEXT("Initial sample includes event/manual sensors"), Sampled.Num(), 4);
    TestEqual(TEXT("Intervals not sampled early"), Manager->GetDueSensorNames(0.1, false).Num(), 0);
    TestEqual(TEXT("Only interval sensor scheduled by timer"), Manager->GetDueSensorNames(0.21, false).Num(), 1);
    TestEqual(TEXT("Only frame sensor scheduled by tick"), Manager->GetDueSensorNames(0.21, true).Num(), 1);
    Sensors.RemoveAt(2);
    TestTrue(TEXT("Configuration without frame sensor initializes"), Manager->Initialize(Sensors, Owner, Errors));
    TestFalse(TEXT("Tick unnecessary without frame sensors"), Manager->NeedsEveryFrame());
    Manager->Shutdown();
    return true;
}

#pragma endregion
#pragma region Component Integration Tests
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
    TStrongObjectPtr<UFuzzyTargetLocationObservation> Location(NewObject<UFuzzyTargetLocationObservation>());
    Location->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::SourceEvent;
    UFuzzyAIComponent* A = Fixture.Component(EnemyA, {Location.Get()});
    UFuzzyAIComponent* B = Fixture.Component(EnemyB, {Location.Get()});
    TestTrue(TEXT("First enemy starts"), A->StartAI());
    TestTrue(TEXT("Second enemy starts"), B->StartAI());
    TestFalse(TEXT("Event-only component tick disabled"), A->IsComponentTickEnabled());
    A->UpdateTargetSighting(TargetA, true);
    B->UpdateTargetSighting(TargetB, true);
    TestEqual(TEXT("First enemy owns independent result"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(100., 0., 0.));
    TestEqual(TEXT("Second enemy shares template but not state"), B->GetTargetLocationKnowledge().ActiveLocation, FVector(200., 0., 0.));
    TargetA->SetActorLocation(FVector(150., 0., 0.));
    TestEqual(TEXT("Source event cache unchanged before notification"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(100., 0., 0.));
    TestTrue(TEXT("Source notification accepted"), A->NotifyObservationSourceChanged(Location->Outputs[0].Key));
    TestEqual(TEXT("Source notification samples new position"), A->GetTargetLocationKnowledge().ActiveLocation, FVector(150., 0., 0.));
    A->UpdateTargetSighting(TargetA, false);
    TargetA->SetActorLocation(FVector(999., 0., 0.));
    A->RequestObservationRefresh(Location->Outputs[0].Key);
    auto Knowledge = A->GetTargetLocationKnowledge();
    TestFalse(TEXT("Active location unavailable after sight loss"), Knowledge.bHasActiveLocation);
    TestTrue(TEXT("Last sighting retained"), Knowledge.bHasLastSeenLocation);
    TestEqual(TEXT("Hidden movement never updates last-seen location"), Knowledge.LastSeenLocation, FVector(150., 0., 0.));
    A->SetTarget(TargetB);
    TestFalse(TEXT("New target does not inherit old target's memory"), A->GetTargetLocationKnowledge().bHasLastSeenLocation);
    FFuzzyAIRememberedObservation OldMemory;
    TestTrue(TEXT("Old target memory remains explicitly queryable"), A->TryGetRememberedObservation(Location->Outputs[0].Key, TargetA, OldMemory));
    A->UpdateTargetSighting(TargetB, true);
    TargetB->Destroy();
    TestFalse(TEXT("Destroyed target clears active knowledge"), A->GetTargetLocationKnowledge().bHasActiveLocation);
    A->StopAI();
    B->StopAI();
    TestFalse(TEXT("Stopped component rejects refresh"), A->RequestObservationRefresh(Location->Outputs[0].Key));
    TestTrue(TEXT("Restart succeeds"), A->StartAI());
    TestTrue(TEXT("Restart begins a new memory session"), A->GetMemorySnapshot().IsEmpty());
    A->StopAI();
    return true;
}

#pragma endregion
#pragma region Typed Store Tests
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIObservationStoreTest, "FuzzyAI.Observation.TypedStore",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIObservationStoreTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    TStrongObjectPtr<UFuzzyObservationStore> Store(NewObject<UFuzzyObservationStore>());
    TStrongObjectPtr<UFuzzyDistanceObservation> Writer(NewObject<UFuzzyDistanceObservation>());
    TStrongObjectPtr<UFuzzyDistanceObservation> OtherWriter(NewObject<UFuzzyDistanceObservation>());
    FFuzzyAIObservationContext Context;
    Context.Observer = Fixture.Actor();
    const TArray<FFuzzyAIObservationOutput> Outputs = {Output(Tag(TEXT("Test.Float"))), Output(Tag(TEXT("Test.Bool")), EFuzzyAIObservationValueType::Boolean)};
    TestFalse(TEXT("Consumers cannot write outside Sample"), Store->SetFloat(Tag(TEXT("Test.Float")), 1.f));
    Store->BeginBatch(1.);
    Store->BeginSample(Writer.Get(), Outputs, false, Context, 0);
    TestFalse(TEXT("Registered but undeclared keys rejected"), Store->SetFloat(Tag(TEXT("Test.Undeclared")), 50.f));
    Store->SetFloat(Tag(TEXT("Test.Float")), 0.f);
    Store->SetBoolean(Tag(TEXT("Test.Bool")), false);
    float Number = -1.f;
    TestFalse(TEXT("Staged data not exposed before commit"), Store->GetFloat(Tag(TEXT("Test.Float")), Number));
    Store->EndSample();
    TArray<FGameplayTag> Sampled;
    TestEqual(TEXT("One sensor can publish two outputs"), Store->Commit(Sampled).Num(), 2);
    TestTrue(TEXT("Zero is a valid float"), Store->GetFloat(Tag(TEXT("Test.Float")), Number));
    bool Flag = true;
    TestTrue(TEXT("False is a valid bool"), Store->GetBoolean(Tag(TEXT("Test.Bool")), Flag));
    TestFalse(TEXT("Boolean value preserved"), Flag);
    TestFalse(TEXT("Wrong typed getter fails"), Store->GetFloat(Tag(TEXT("Test.Bool")), Number));
    Store->BeginBatch(2.);
    Store->BeginSample(Writer.Get(), Outputs, false, Context, 0);
    Store->SetFloat(Tag(TEXT("Test.Float")), 2.f);
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Omitted output becomes unavailable instead of staying stale"), Store->GetBoolean(Tag(TEXT("Test.Bool")), Flag));
    Store->BeginBatch(3.);
    Store->BeginSample(OtherWriter.Get(), Outputs, false, Context, 0);
    TestFalse(TEXT("A different sensor cannot overwrite an owned key"), Store->SetFloat(Tag(TEXT("Test.Float")), 99.f));
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Conflicting key marked unavailable"), Store->GetFloat(Tag(TEXT("Test.Float")), Number));
    TestFalse(TEXT("Conflict diagnostic exposed"), Store->GetWriteErrors().IsEmpty());
    Store->BeginBatch(4.);
    Store->BeginSample(Writer.Get(), Outputs, false, Context, 0);
    TestFalse(TEXT("Every declared output type checked"), Store->SetBoolean(Tag(TEXT("Test.Float")), true));
    Store->EndSample();
    Store->Commit(Sampled);
    TestFalse(TEXT("Wrong output type is unavailable"), Store->GetFloat(Tag(TEXT("Test.Float")), Number));

    TArray<FFuzzyAIObservationOutput> TypedOutputs = {
        Output(Tag(TEXT("Test.Integer")), EFuzzyAIObservationValueType::Integer),
        Output(Tag(TEXT("Test.Vector")), EFuzzyAIObservationValueType::Vector),
        Output(Tag(TEXT("Test.Object")), EFuzzyAIObservationValueType::Object),
        Output(Tag(TEXT("Test.Tag")), EFuzzyAIObservationValueType::GameplayTag)};
    Store->BeginBatch(5.);
    Store->BeginSample(Writer.Get(), TypedOutputs, false, Context, 0);
    TestTrue(TEXT("Integer output accepted"), Store->SetInteger(Tag(TEXT("Test.Integer")), 7));
    TestTrue(TEXT("Origin vector output accepted"), Store->SetVector(Tag(TEXT("Test.Vector")), FVector::ZeroVector));
    TestTrue(TEXT("Intentional null object accepted"), Store->SetObject(Tag(TEXT("Test.Object")), nullptr));
    TestTrue(TEXT("Gameplay Tag value is independent from its key"), Store->SetGameplayTag(Tag(TEXT("Test.Tag")), NKFuzzyAI::ObservationKeys::TargetHasLineOfSight));
    Store->EndSample();
    Store->Commit(Sampled);
    int32 Integer = 0;
    FVector Vector;
    UObject* Object = Context.Observer.Get();
    FGameplayTag TagValue;
    TestTrue(TEXT("Integer getter succeeds"), Store->GetInteger(Tag(TEXT("Test.Integer")), Integer));
    TestEqual(TEXT("Integer value preserved"), Integer, 7);
    TestTrue(TEXT("Vector getter succeeds"), Store->GetVector(Tag(TEXT("Test.Vector")), Vector));
    TestEqual(TEXT("Origin preserved"), Vector, FVector::ZeroVector);
    TestTrue(TEXT("Null object is valid knowledge"), Store->GetObject(Tag(TEXT("Test.Object")), Object));
    TestNull(TEXT("Null object preserved"), Object);
    TestTrue(TEXT("Tag getter succeeds"), Store->GetGameplayTag(Tag(TEXT("Test.Tag")), TagValue));
    TestTrue(TEXT("Tag value preserved"), TagValue == NKFuzzyAI::ObservationKeys::TargetHasLineOfSight);
    FFuzzyAIObservationRecord Unknown;
    TestFalse(TEXT("Undeclared write never creates a record"), Store->TryGetObservation(Tag(TEXT("Test.Undeclared")), Unknown));
    return true;
}

#pragma endregion
#pragma region Declared Output Schema Tests
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIDeclaredOutputsTest, "FuzzyAI.Observation.DeclaredOutputs",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIDeclaredOutputsTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIObservationTests;
    FWorld Fixture;
    UFuzzyAIComponent* Owner = Fixture.Component(Fixture.Actor());
    UFuzzyDistanceObservation* Sensor = NewObject<UFuzzyDistanceObservation>(Owner);
    Sensor->Outputs = {Output(Tag(TEXT("Test.Float"))), Output(Tag(TEXT("AnotherFact")))};
    Sensor->Outputs[0].ChangeTolerance = 1.f;
    Sensor->Outputs[0].bRememberLastSuccessful = true;
    Sensor->Outputs[0].MemoryDuration = 2.f;
    Sensor->Outputs[1].ChangeTolerance = 0.f;
    TStrongObjectPtr<UFuzzyObservationManager> Manager(NewObject<UFuzzyObservationManager>(Owner));
    TArray<FString> Errors;
    TestTrue(TEXT("Multi-output declaration valid"), Manager->Initialize({Sensor}, Owner, Errors));
    TestNotNull(TEXT("Secondary key resolves before first sample"), Manager->FindObservation(Tag(TEXT("AnotherFact"))));
    UFuzzyDistanceObservation* Other = NewObject<UFuzzyDistanceObservation>(Owner);
    Other->Outputs[0].Key = Tag(TEXT("AnotherFact"));
    TestFalse(TEXT("Duplicate secondary output rejected before sampling"), Manager->Initialize({Sensor, Other}, Owner, Errors));
    Sensor->Outputs[1].Key = Sensor->Outputs[0].Key;
    TestFalse(TEXT("Duplicate keys in same sensor rejected"), Manager->Initialize({Sensor}, Owner, Errors));
    Sensor->Outputs[1].Key = FGameplayTag();
    TestFalse(TEXT("Empty key rejected"), Manager->Initialize({Sensor}, Owner, Errors));
    Sensor->Outputs[1].Key = NKFuzzyAI::ObservationKeys::Root;
    TestFalse(TEXT("Root category cannot be used as a value key"), Manager->Initialize({Sensor}, Owner, Errors));
    Sensor->Outputs[1].Key = Tag(TEXT("AnotherFact"));
    Sensor->Outputs[1].MemoryDuration = -1.f;
    TestFalse(TEXT("Secondary memory settings validated"), Manager->Initialize({Sensor}, Owner, Errors));
    Sensor->Outputs[1].MemoryDuration = 10.f;
    TStrongObjectPtr<UFuzzyObservationStore> Store(NewObject<UFuzzyObservationStore>(Owner));
    TStrongObjectPtr<UFuzzyAIObservationMemory> Memory(NewObject<UFuzzyAIObservationMemory>(Owner));
    Memory->Initialize(10, 10, 30.f);
    FFuzzyAIObservationContext Context;
    Context.Observer = Owner->GetOwner();
    TArray<FGameplayTag> Sampled;
    TArray<FGameplayTag> MemoryChanged;
    auto Sample = [&](double Time, float Health, float MaxHealth)
    {
        Store->BeginBatch(Time);
        Store->BeginSample(Sensor, Sensor->Outputs, false, Context, 0);
        Store->SetFloat(Sensor->Outputs[0].Key, Health);
        Store->SetFloat(Sensor->Outputs[1].Key, MaxHealth);
        Store->EndSample();
        const auto Changes = Store->Commit(Sampled);
        for (FGameplayTag Key : Sampled)
        {
            const auto* Settings = Store->FindSettings(Key);
            FFuzzyAIObservationRecord Record;
            if (Settings && Settings->bRememberLastSuccessful && Store->TryGetObservation(Key, Record))
            {
                Memory->Remember(Record, Settings->MemoryDuration, Settings->ChangeTolerance, MemoryChanged);
            }
        }
        return Changes;
    };
    TestEqual(TEXT("Both values commit in one batch"), Sample(1., 75.f, 100.f).Num(), 2);
    const auto Changes = Sample(2., 75.5f, 100.5f);
    TestEqual(TEXT("Per-output tolerances are independent"), Changes.Num(), 1);
    TestTrue(TEXT("Only zero-tolerance output changed"), Changes.Num() == 1 && Changes[0].Current.Key == Sensor->Outputs[1].Key);
    TestEqual(TEXT("Output picker filters to observation keys"),
        FindFProperty<FProperty>(FFuzzyAIObservationOutput::StaticStruct(), TEXT("Key"))->GetMetaData(TEXT("Categories")), FString(TEXT("Observation")));
    TestEqual(TEXT("Write key pin filters to observation keys"),
        UGameplayTagsManager::Get().GetCategoriesMetaFromFunction(UFuzzyObservationStore::StaticClass()->FindFunctionByName(TEXT("SetFloat")), TEXT("Key")), FString(TEXT("Observation")));
    TestTrue(TEXT("Gameplay Tag value pin remains unrestricted"),
        UGameplayTagsManager::Get().GetCategoriesMetaFromFunction(UFuzzyObservationStore::StaticClass()->FindFunctionByName(TEXT("SetGameplayTag")), TEXT("Value")).IsEmpty());
    TestEqual(TEXT("Only opted-in output remembered"), Memory->GetSnapshot(2.).Num(), 1);
    TestTrue(TEXT("Successful sample renews per-output memory expiry"), Memory->GetSnapshot(3.5).Num() == 1);
    TestTrue(TEXT("Per-output memory expires"), Memory->GetSnapshot(4.).IsEmpty());
    Store->Reset();
    Store->BeginBatch(5.);
    Store->BeginSample(Sensor, Sensor->Outputs, false, Context, 0);
    Store->InvalidateCurrentSample(TEXT("Source unavailable"));
    Store->EndSample();
    Store->Commit(Sampled);
    TestEqual(TEXT("All outputs exist even before first success"), Store->GetSnapshot().Num(), 2);
    for (const auto& Record : Store->GetSnapshot())
    {
        TestFalse(TEXT("Unavailable source invalidates every declared output"), Record.Result.bIsValid);
        TestEqual(TEXT("Invalidation reason preserved"), Record.Result.FailureReason, FString(TEXT("Source unavailable")));
    }
    return true;
}
#pragma endregion
#pragma region Instanced Sensor Tests
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
    Disabled->Outputs[0].Key = Tag(TEXT("Disabled.Distance"));
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
    TestTrue(TEXT("Typed blackboard exposes distance"), A->GetObservationStore()->GetFloat(Tag(TEXT("Target.Distance")), Value));
    TestEqual(TEXT("Distance sample is correct"), Value, 250.f);
    bool bVisible = false;
    TestTrue(TEXT("Sight observation has a valid bool"), A->GetObservationStore()->GetBoolean(Tag(TEXT("Target.HasLineOfSight")), bVisible));
    TestTrue(TEXT("Sight is true"), bVisible);
    TestFalse(TEXT("Second enemy does not inherit first enemy readings"), B->GetObservationStore()->GetFloat(Tag(TEXT("Target.Distance")), Value));
    A->UpdateTargetSighting(Target, false);
    Target->SetActorLocation(FVector(999., 0., 0.));
    TestFalse(TEXT("Current distance becomes unavailable"), A->GetObservationStore()->GetFloat(Tag(TEXT("Target.Distance")), Value));
    TestTrue(TEXT("Sight false remains valid knowledge"), A->GetObservationStore()->GetBoolean(Tag(TEXT("Target.HasLineOfSight")), bVisible));
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

#pragma endregion
#if WITH_EDITOR
#pragma region Blueprint Component Tests
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
    UFuzzyDistanceObservation* Distance = NewObject<UFuzzyDistanceObservation>(Template);
    Distance->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::Manual;
    Template->ObservationInstances.Add(Distance);
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
    TestEqual(TEXT("Inline sensor survives Blueprint compilation"), Component->ObservationInstances.Num(), 1);
    TestTrue(TEXT("Blueprint component starts"), Component->StartAI());
    Component->UpdateTargetSighting(Fixture.Actor(FVector(250., 0., 0.)), true);
    FFuzzyAIObservationRecord Result;
    TestTrue(TEXT("Blueprint component exposes result"), Component->TryGetObservation(Distance->Outputs[0].Key, Result));
    TestTrue(TEXT("Blueprint-configured distance is valid"), Result.Result.bIsValid);
    TestEqual(TEXT("Blueprint-configured distance is correct"), Result.Result.FloatValue, 250.f);
    TArray<UFuzzyAIComponent*> Components;
    Enemy->GetComponents(Components);
    TestEqual(TEXT("Exactly one actor component for FuzzyAI"), Components.Num(), 1);
    Component->StopAI();
    return true;
}
#pragma endregion
#pragma region Blueprint Sensor Tests
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
    UK2Node_CallFunction* FloatWrite = AddWrite(GET_FUNCTION_NAME_CHECKED(UFuzzyObservationStore, SetFloat), TEXT("(TagName=\"Observation.BP.Float\")"), TEXT("75.0"));
    UK2Node_CallFunction* BoolWrite = AddWrite(GET_FUNCTION_NAME_CHECKED(UFuzzyObservationStore, SetBoolean), TEXT("(TagName=\"Observation.BP.Bool\")"), TEXT("false"));
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
    SensorTemplate->Outputs = { Output(Tag(TEXT("BP.Float"))), Output(Tag(TEXT("BP.Bool")), EFuzzyAIObservationValueType::Boolean) };
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
    TestTrue(TEXT("Blueprint wrote float through Sample"), Component->GetObservationStore()->GetFloat(Tag(TEXT("BP.Float")), Value));
    TestEqual(TEXT("Blueprint float value correct"), Value, 75.f);
    TestTrue(TEXT("Blueprint wrote second typed output"), Component->GetObservationStore()->GetBoolean(Tag(TEXT("BP.Bool")), Flag));
    TestFalse(TEXT("Blueprint false value is valid"), Flag);
    TestTrue(TEXT("Declared output key resolves source observation"), Component->NotifyObservationSourceChanged(Tag(TEXT("BP.Float"))));
    Component->StopAI();
    return true;
}

#pragma endregion
#pragma region Inline API Tests
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIInlineOnlyAPITest, "FuzzyAI.Observation.InlineOnlyAPI",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIInlineOnlyAPITest::RunTest(const FString& Parameters)
{
    TestNull(TEXT("Asset-based component array has been removed"), FindFProperty<FProperty>(UFuzzyAIComponent::StaticClass(), TEXT("Observations")));
    TestNotNull(TEXT("Inline sensor array is the supported authoring path"), FindFProperty<FProperty>(UFuzzyAIComponent::StaticClass(), TEXT("ObservationInstances")));
    TestNull(TEXT("Asset reader class is not registered"), FindObject<UClass>(nullptr, TEXT("/Script/FuzzyAIRuntime.FuzzyAIObservationAsset")));
    TestNull(TEXT("Asset runtime class is not registered"), FindObject<UClass>(nullptr, TEXT("/Script/FuzzyAIRuntime.FuzzyAIObservationRuntime")));
    TestNull(TEXT("Editable observation ID removed"), FindFProperty<FProperty>(UFuzzyObservation::StaticClass(), TEXT("ObservationId")));
    TestNull(TEXT("Single primary key removed"), FindFProperty<FProperty>(UFuzzyObservation::StaticClass(), TEXT("ObservationKey")));
    TestNotNull(TEXT("Declared outputs exposed"), FindFProperty<FArrayProperty>(UFuzzyObservation::StaticClass(), TEXT("Outputs")));
    return true;
}
#pragma endregion
#endif

#endif
