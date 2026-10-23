// Verifies debugger discovery, formatting and read-only snapshots using transient enemy actors.
// Exercises selection, destruction and tab reopening without saving maps or changing production enemies.

#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Debugger/FuzzyAIDebugModel.h"
#include "Debugger/SFuzzyAIDebugger.h"
#include "Core/FuzzyAIComponent.h"
#include "Observation/FuzzyObservation.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/Sensors/FuzzyStandardObservations.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Docking/TabManager.h"
#include "GameFramework/Actor.h"
#include "HAL/FileManager.h"
#include "ImageUtils.h"
#include "Misc/App.h"
#include "Misc/CommandLine.h"
#include "Misc/FileHelper.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SWindow.h"

#pragma region Test Fixtures
namespace FuzzyAIDebuggerTests
{
    struct FWorld
    {
        UWorld* World;
        TArray<TWeakObjectPtr<UFuzzyAIComponent>> Components;

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
            for (auto& Component : Components)
            {
                if (Component.IsValid()) Component->StopAI();
            }
            World->DestroyWorld(false);
            GEngine->DestroyWorldContext(World);
        }

        AActor* Actor(const FVector& Location = FVector::ZeroVector)
        {
            AActor* Result = World->SpawnActor<AActor>();
            USceneComponent* Root = NewObject<USceneComponent>(Result);
            Result->SetRootComponent(Root);
            Root->RegisterComponent();
            Result->SetActorLocation(Location);
            return Result;
        }

        UFuzzyAIComponent* Enemy()
        {
            AActor* Owner = Actor();
            UFuzzyAIComponent* Result = NewObject<UFuzzyAIComponent>(Owner);
            Result->bAutoStart = false;
            Result->ObservationInstances.Add(NewObject<UFuzzyDistanceObservation>(Result));
            Result->ObservationInstances.Add(NewObject<UFuzzyLineOfSightObservation>(Result));
            Result->ObservationInstances.Add(NewObject<UFuzzyTargetLocationObservation>(Result));
            for (UFuzzyObservation* Sensor : Result->ObservationInstances)
            {
                Sensor->UpdatePolicy = EFuzzyAIObservationUpdatePolicy::Manual;
            }
            Owner->AddInstanceComponent(Result);
            Result->RegisterComponent();
            Components.Add(Result);
            return Result;
        }
    };

    const FFuzzyAIDebugRow* Find(const TArray<TSharedPtr<FFuzzyAIDebugRow>>& Rows, const FString& Key)
    {
        const auto* Match = Rows.FindByPredicate([&Key](const auto& Row) { return Row->Key == Key; });
        return Match ? Match->Get() : nullptr;
    }

    bool CaptureWindow(const TSharedRef<SWindow>& Window, const FString& Name)
    {
        Window->SlatePrepass();
        FSlateApplication::Get().Tick();
        FSlateApplication::Get().ForceRedrawWindow(Window);
        TArray<FColor> Pixels;
        FIntVector Size;
        if (!FSlateApplication::Get().TakeScreenshot(Window, Pixels, Size) || Size.X <= 0 || Size.Y <= 0)
        {
            return false;
        }
        for (FColor& Pixel : Pixels) Pixel.A = 255;
        TArray64<uint8> Png;
        FImageUtils::PNGCompressImageArray(Size.X, Size.Y, TArrayView64<const FColor>(Pixels.GetData(), Pixels.Num()), Png);
        const FString Folder = FPaths::ProjectSavedDir() / TEXT("Automation/FuzzyAIDebugger/Screenshots");
        IFileManager::Get().MakeDirectory(*Folder, true);
        return FFileHelper::SaveArrayToFile(Png, *(Folder / Name));
    }
}
#pragma endregion

#pragma region Read Only Snapshot Test
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIDebuggerSnapshotTest, "FuzzyAI.Debugger.ReadOnlySnapshots",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIDebuggerSnapshotTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIDebuggerTests;
    FWorld Fixture;
    UFuzzyAIComponent* Enemy = Fixture.Enemy();
    AActor* Target = Fixture.Actor(FVector(250.f, 0.f, 0.f));
    TestTrue(TEXT("AI starts"), Enemy->StartAI());
    Enemy->UpdateTargetSighting(Target, true);
    const FFuzzyAIDebugSnapshot Visible = FFuzzyAIDebugModel::Read(Enemy);
    TestTrue(TEXT("Snapshot identifies a valid enemy"), Visible.bAvailable);
    TestEqual(TEXT("All three current observations are shown"), Visible.Store.Num(), 3);
    TestEqual(TEXT("One successful location is remembered"), Visible.Memory.Num(), 1);
    if (const auto* Distance = Find(Visible.Store, TEXT("Target.Distance")))
    {
        TestEqual(TEXT("Distance formatting"), Distance->Value, FString(TEXT("250.0")));
        TestEqual(TEXT("Valid state"), Distance->State, FString(TEXT("Valid")));
    }
    else AddError(TEXT("Distance row missing"));

    FFuzzyAIObservationRecord Before;
    Enemy->TryGetObservation(TEXT("Target.VisibleLocation"), Before);
    Target->SetActorLocation(FVector(900.f, 0.f, 0.f));
    const auto PassiveRead = FFuzzyAIDebugModel::Read(Enemy);
    FFuzzyAIObservationRecord After;
    Enemy->TryGetObservation(TEXT("Target.VisibleLocation"), After);
    TestEqual(TEXT("Inspecting does not resample a moving target"), After.Result.VectorValue, Before.Result.VectorValue);
    TestEqual(TEXT("Inspecting preserves attempt timestamp"), After.LastAttemptTime, Before.LastAttemptTime);

    Enemy->UpdateTargetSighting(Target, false);
    const auto Hidden = FFuzzyAIDebugModel::Read(Enemy);
    if (const auto* Location = Find(Hidden.Store, TEXT("Target.VisibleLocation")))
    {
        TestTrue(TEXT("Current hidden location is unavailable"), Location->bUnavailable);
        TestFalse(TEXT("Failure reason is visible"), Location->Details.IsEmpty());
    }
    else AddError(TEXT("Current location row missing"));
    if (const auto* Remembered = Find(Hidden.Memory, TEXT("Target.VisibleLocation")))
    {
        TestEqual(TEXT("Hidden movement does not leak into remembered location"), Remembered->Value,
            Before.Result.VectorValue.ToCompactString());
        TestTrue(TEXT("Memory expiry is displayed"), Remembered->Details.StartsWith(TEXT("Expires in")));
    }
    else AddError(TEXT("Remembered location row missing"));

    FFuzzyAIObservedEvent Event;
    Event.EventKey = TEXT("Test.HeardNoise");
    Event.Source = Target;
    Enemy->RecordObservedEvent(Event);
    Enemy->RecordObservedEvent(Event);
    const auto Events = FFuzzyAIDebugModel::Read(Enemy);
    TestEqual(TEXT("Repeated event occurrences remain separate"), Events.Events.Num(), 2);
    if (!Events.Events.IsEmpty())
    {
        TestEqual(TEXT("Payload is optional"), Events.Events[0]->State, FString(TEXT("No payload")));
        TestEqual(TEXT("No payload does not imply a float value"), Events.Events[0]->Type, FString(TEXT("None")));
        TestFalse(TEXT("No payload is not a failed event"), Events.Events[0]->bUnavailable);
    }
    Enemy->StopAI();
    const auto Stopped = FFuzzyAIDebugModel::Read(Enemy);
    TestTrue(TEXT("Stopped status warns about cached readings"), Stopped.Summary.Contains(TEXT("Stopped")));
    TestEqual(TEXT("Inspecting never starts AI"), Enemy->IsObserving(), false);
    TestEqual(TEXT("Stopped cache remains inspectable"), Stopped.Store.Num(), 3);
    TestFalse(TEXT("Null component is handled"), FFuzzyAIDebugModel::Read(nullptr).bAvailable);
    return true;
}
#pragma endregion

#pragma region Discovery and Lifetime Test
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIDebuggerDiscoveryTest, "FuzzyAI.Debugger.DiscoveryAndLifetime",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIDebuggerDiscoveryTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIDebuggerTests;
    FWorld First;
    FWorld Second;
    UFuzzyAIComponent* Enemy = First.Enemy();
    First.Actor();
    Second.Enemy();
    auto Found = FFuzzyAIDebugModel::FindEnemies({First.World, First.World, nullptr});
    TestEqual(TEXT("Only actors in requested worlds with registered FuzzyAI components appear"), Found.Num(), 1);
    if (Found.IsEmpty()) return false;
    TestTrue(TEXT("Enemy is identified by its component"), Found[0]->Component.Get() == Enemy);
    TestFalse(TEXT("World label is populated"), Found[0]->World.IsEmpty());
    TestEqual(TEXT("Worlds remain distinct"), FFuzzyAIDebugModel::FindEnemies({First.World, Second.World}).Num(), 2);

    Enemy->GetOwner()->Destroy();
    TestTrue(TEXT("Destroyed enemy leaves the picker"), FFuzzyAIDebugModel::FindEnemies({First.World}).IsEmpty());
    TestFalse(TEXT("Destroyed enemy cannot be inspected"), FFuzzyAIDebugModel::Read(Found[0]->Component.Get()).bAvailable);
    TestEqual(TEXT("False remains a valid displayed value"), FFuzzyAIDebugModel::FormatValue(FFuzzyAIObservationResult::MakeBoolean(false)), FString(TEXT("False")));
    TestEqual(TEXT("Null object remains a valid displayed value"), FFuzzyAIDebugModel::FormatValue(FFuzzyAIObservationResult::MakeObject(nullptr)), FString(TEXT("None")));
    TestEqual(TEXT("Never sampled is distinct from zero age"), FFuzzyAIDebugModel::FormatAge(-1., 10.), FString(TEXT("Never")));
    TestEqual(TEXT("Age uses world seconds"), FFuzzyAIDebugModel::FormatAge(5., 8.), FString(TEXT("3.00 s")));
    return true;
}
#pragma endregion

#pragma region Window Selection Test
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIDebuggerWidgetTest, "FuzzyAI.Debugger.WindowSelection",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIDebuggerWidgetTest::RunTest(const FString& Parameters)
{
    if (!FSlateApplication::IsInitialized())
    {
        AddError(TEXT("Slate must be initialized to validate the debug window."));
        return false;
    }
    using namespace FuzzyAIDebuggerTests;
    FWorld Fixture;
    UFuzzyAIComponent* First = Fixture.Enemy();
    UFuzzyAIComponent* Second = Fixture.Enemy();
    First->StartAI();
    First->UpdateTargetSighting(Fixture.Actor(FVector(200.f, 0.f, 0.f)), true);

    TSharedRef<SFuzzyAIDebugger> Widget = SNew(SFuzzyAIDebugger);
    TestFalse(TEXT("No automatic enemy selection"), Widget->GetSnapshot().bAvailable);
    TestTrue(TEXT("Picker selects first enemy"), Widget->SelectComponent(First));
    TestTrue(TEXT("Selected enemy has running data"), Widget->GetSnapshot().Store.Num() == 3);

    if (FParse::Param(FCommandLine::Get(), TEXT("FuzzyAIDebuggerCapture")))
    {
        if (!FApp::CanEverRender())
        {
            AddError(TEXT("Debugger screenshots require a rendering RHI; omit -NullRHI."));
            return false;
        }
        First->GetOwner()->SetActorLabel(TEXT("Debugger Test - Guard"));
        Widget->Refresh();
        FFuzzyAIObservedEvent Event;
        Event.EventKey = TEXT("Target.Spotted");
        Event.Source = First->GetOwner();
        Event.Target = First->GetTarget();
        First->RecordObservedEvent(Event);
        Widget->Refresh();
        TSharedRef<SWindow> Window = SNew(SWindow)
            .Title(FText::FromString(TEXT("FuzzyAI Debugger Verification")))
            .ClientSize(FVector2D(1440.f, 960.f))
            .SizingRule(ESizingRule::FixedSize)
            .SupportsMaximize(false).SupportsMinimize(false)
            [ Widget ];
        FSlateApplication::Get().AddWindow(Window);
        TestTrue(TEXT("Visible-target window screenshot"), CaptureWindow(Window, TEXT("VisibleTarget.png")));
        First->UpdateTargetSighting(First->GetTarget(), false);
        Widget->Refresh();
        TestTrue(TEXT("Hidden-target window screenshot"), CaptureWindow(Window, TEXT("HiddenTarget.png")));
        FSlateApplication::Get().DestroyWindowImmediately(Window);
    }

    TestTrue(TEXT("Picker switches to a different enemy"), Widget->SelectComponent(Second));
    TestTrue(TEXT("Selection belongs to second enemy"), Widget->GetSelectedComponent() == Second);
    TestTrue(TEXT("Second enemy does not inherit first enemy data"), Widget->GetSnapshot().Store.IsEmpty());
    TestFalse(TEXT("Debugger does not start stopped enemies"), Second->IsObserving());

    Second->GetOwner()->Destroy();
    Widget->Refresh();
    TestFalse(TEXT("Destroyed selection clears the view"), Widget->GetSnapshot().bAvailable);
    TestNull(TEXT("Destroyed component is not retained"), Widget->GetSelectedComponent());

    const FName TabName(TEXT("FuzzyAI.Debugger"));
    TestTrue(TEXT("Debugger tab is registered"), FGlobalTabmanager::Get()->HasTabSpawner(TabName));
    // Do not close a user's already-open debugger when running tests inside the editor.
    // NullRHI uses generic native windows, which do not implement desktop window geometry.
    if (FApp::CanEverRender() && !FGlobalTabmanager::Get()->FindExistingLiveTab(TabName))
    {
        TSharedPtr<SDockTab> Tab = FGlobalTabmanager::Get()->TryInvokeTab(TabName);
        TestTrue(TEXT("Debugger tab opens"), Tab.IsValid());
        if (Tab)
        {
            Tab->RequestCloseTab();
            Tab.Reset();
            Tab = FGlobalTabmanager::Get()->TryInvokeTab(TabName);
            TestTrue(TEXT("Debugger tab reopens"), Tab.IsValid());
            if (Tab) Tab->RequestCloseTab();
        }
    }
    return true;
}
#pragma endregion

#endif
