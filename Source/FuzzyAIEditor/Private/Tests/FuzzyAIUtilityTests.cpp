// Exercises scoring, fuzzy inference, action selection, runtime copies and native GAS lifecycle.
// Fixtures use transient worlds and assets; production enemies, abilities and maps remain untouched.
#include "Tests/FuzzyAIUtilityTestTypes.h"
#include "AbilitySystemComponent.h"

UFuzzyAIUtilityTestAbility::UFuzzyAIUtilityTestAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}
void UFuzzyAIUtilityTestAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) {}
void UFuzzyAIUtilityInstantTestAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}
float UFuzzyAIDebugCountingConsideration::EvaluateContext_Implementation(const FFuzzyAIContext& Context) const
{
    ++Calls;
    return 0.5f;
}

#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Core/FuzzyAIComponent.h"
#include "Utility/FuzzyAIAction.h"
#include "Utility/FuzzyAIConsideration.h"
#include "Utility/FuzzyAIInterpretation.h"
#include "Utility/FuzzyAIStandardActions.h"
#include "Utility/FuzzyAIDecisionProfile.h"
#include "Observation/FuzzyObservationStore.h"
#include "Observation/ObservationKeys.h"
#include "Observation/Sensors/FuzzyStandardObservations.h"
#include "Observation/Sensors/FuzzyAttributeObservation.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "GameplayTagsManager.h"
#include "Interfaces/IPluginManager.h"
#include "UObject/StrongObjectPtr.h"
#include "UObject/UnrealType.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Debugger/FuzzyAIDebugModel.h"
#include "Debugger/SFuzzyAIDebugger.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/SWindow.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "ImageUtils.h"

namespace FuzzyAIUtilityTests
{
    struct FWorld
    {
        UWorld* World;
        FString Tags;
        FWorld()
        {
            Tags = IPluginManager::Get().FindPlugin(TEXT("FuzzyAI"))->GetBaseDir() / TEXT("Tests/Tags");
            UGameplayTagsManager::Get().AddTagIniSearchPath(Tags);
            auto Values = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(true)
                .CreateNavigation(false).CreateAISystem(true).ShouldSimulatePhysics(false).SetTransactional(false);
            World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Values);
            GEngine->CreateNewWorldContext(EWorldType::Game).SetCurrentWorld(World);
        }
        ~FWorld()
        {
            World->DestroyWorld(false);
            GEngine->DestroyWorldContext(World);
            UGameplayTagsManager::Get().RemoveTagIniSearchPath(Tags);
        }
        AActor* Actor(FVector Location = FVector::ZeroVector)
        {
            auto* Actor = World->SpawnActor<AActor>();
            auto* Root = NewObject<USceneComponent>(Actor);
            Actor->SetRootComponent(Root); Root->RegisterComponent(); Actor->SetActorLocation(Location);
            return Actor;
        }
        UFuzzyAIComponent* Component(AActor* Owner = nullptr)
        {
            if (!Owner) Owner = Actor();
            auto* Component = NewObject<UFuzzyAIComponent>(Owner);
            Component->bAutoStart = false;
            Owner->AddInstanceComponent(Component); Component->RegisterComponent();
            return Component;
        }
        void Advance(float Seconds)
        {
            const int32 Steps = FMath::Max(1, FMath::CeilToInt(Seconds / 0.05f));
            for (int32 i = 0; i < Steps; ++i) World->Tick(LEVELTICK_All, Seconds / Steps);
        }
    };
    UFuzzyAIInputConsideration* Constant(UObject* Outer, float Value)
    {
        auto* Input = NewObject<UFuzzyAIInputConsideration>(Outer);
        Input->Factor.Input.Source = EFuzzyAIInputSource::Constant;
        Input->Factor.Input.Constant = Value;
        return Input;
    }
    FGameplayTag ActionTag(const TCHAR* Id)
    {
        return FGameplayTag::RequestGameplayTag(FName(FString(TEXT("AI.Action.Test.")) + Id));
    }
    UFuzzyAIWaitAction* Wait(UObject* Outer, const TCHAR* Id, float Score)
    {
        auto* Action = NewObject<UFuzzyAIWaitAction>(Outer);
        Action->ActionId = ActionTag(Id); Action->BaseScore = Score; Action->Duration = 5.f;
        return Action;
    }
    UAbilitySystemComponent* ASC(AActor* Actor)
    {
        auto* ASC = NewObject<UAbilitySystemComponent>(Actor);
        Actor->AddInstanceComponent(ASC); ASC->RegisterComponent(); ASC->InitAbilityActorInfo(Actor, Actor);
        return ASC;
    }
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIActionTagTest, "FuzzyAI.Utility.ActionTagIdentity", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIActionTagTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    const auto* Property = FindFProperty<FStructProperty>(UFuzzyAIAction::StaticClass(), TEXT("ActionId"));
    if (!TestNotNull(TEXT("Reflected action ID"), Property)) return false;
    TestTrue(TEXT("Blueprint ID type is Gameplay Tag"), Property->Struct == FGameplayTag::StaticStruct());
    TestEqual(TEXT("Picker is filtered to actions"), Property->GetMetaData(TEXT("Categories")), FString(TEXT("AI.Action")));
    auto* Component = Fixture.Component();
    auto* Parent = Wait(Component, TEXT("Parent"), 0.8f);
    auto* Child = Wait(Component, TEXT("Parent.Child"), 0.6f);
    Parent->Considerations = {Constant(Parent, 1.f)};
    FString Error;
    Parent->ActionId = FGameplayTag();
    TestFalse(TEXT("Empty IDs rejected"), Parent->Validate(Error));
    Parent->ActionId = NKFuzzyAI::ObservationKeys::TargetDistance;
    TestFalse(TEXT("Observation namespace rejected"), Parent->Validate(Error));
    Parent->ActionId = FGameplayTag::RequestGameplayTag(TEXT("AI.Action"));
    TestFalse(TEXT("Namespace root is not an identity"), Parent->Validate(Error));
    Parent->ActionId = ActionTag(TEXT("Parent"));
    TestTrue(TEXT("Registered action accepted"), Parent->Validate(Error));
    Component->Actions = {Parent, Child};
    TStrongObjectPtr<UFuzzyAIActionTagTestReceiver> Receiver(NewObject<UFuzzyAIActionTagTestReceiver>());
    Component->OnActionStarted.AddDynamic(Receiver.Get(), &UFuzzyAIActionTagTestReceiver::Started);
    Component->OnActionFinished.AddDynamic(Receiver.Get(), &UFuzzyAIActionTagTestReceiver::Finished);
    if (!TestTrue(TEXT("Related tags are distinct exact IDs"), Component->StartAI())) return false;
    TestEqual(TEXT("Started delegate carries tag"), Receiver->StartedId, Parent->ActionId);
    const auto Scores = Component->GetActionScores();
    TestEqual(TEXT("Parent and child both scored"), Scores.Num(), 2);
    TestTrue(TEXT("Scores retain child identity"), Scores.ContainsByPredicate([&](const auto& E){ return E.ActionId == Child->ActionId; }));
    const auto Debug = Component->GetDecisionDebugSnapshot();
    TestTrue(TEXT("Trace retains typed ID"), Debug.Entries.ContainsByPredicate([&](const auto& E){ return E.ActionId == Parent->ActionId; }));
    TestTrue(TEXT("Execution retains typed ID"), Debug.Executions.ContainsByPredicate([&](const auto& E){ return E.ActionId == Parent->ActionId; }));
    TestTrue(TEXT("History retains typed ID"), Debug.History.ContainsByPredicate([&](const auto& E){ return E.ActionId == Parent->ActionId; }));
    Component->StopAI();
    TestEqual(TEXT("Finished delegate carries tag"), Receiver->FinishedId, Parent->ActionId);
    TestEqual(TEXT("Cancellation result preserved"), Receiver->FinishedResult, EFuzzyAIActionResult::Cancelled);
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilityMathTest, "FuzzyAI.Utility.CurvesAndUncertainty", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilityMathTest::RunTest(const FString& Parameters)
{
    FFuzzyAIResponse Curve;
    Curve.InputMin = 100.f; Curve.InputMax = 500.f;
    TestEqual(TEXT("Input normalization"), Curve.Evaluate(300.f), 0.5f);
    Curve.bInvert = true;
    TestEqual(TEXT("Clamped low health/close curve"), Curve.Evaluate(50.f), 1.f);
    TestEqual(TEXT("No support beyond preferred range"), Curve.Evaluate(600.f), 0.f);
    Curve.bUseCurve = true;
    Curve.Curve.GetRichCurve()->AddKey(0.f, 0.f); Curve.Curve.GetRichCurve()->AddKey(0.5f, 1.f); Curve.Curve.GetRichCurve()->AddKey(1.f, 0.f);
    Curve.bInvert = false;
    TestEqual(TEXT("Distance band"), Curve.Evaluate(300.f), 1.f);
    TestTrue(TEXT("Product"), FMath::IsNearlyEqual(FuzzyAI::Combine({0.9f,0.8f,0.7f}, EFuzzyAICombine::Product), 0.504f, 1.e-6f));
    TestEqual(TEXT("Minimum"), FuzzyAI::Combine({0.9f,0.4f}, EFuzzyAICombine::Minimum), 0.4f);
    TestEqual(TEXT("Maximum"), FuzzyAI::Combine({0.9f,0.4f}, EFuzzyAICombine::Maximum), 0.9f);
    TStrongObjectPtr<UFuzzyAIUncertainConsideration> Uncertain(NewObject<UFuzzyAIUncertainConsideration>());
    FFuzzyAIWeightedSample A; A.Value=0.9f; A.Weight=0.2f;
    FFuzzyAIWeightedSample B; B.Value=0.5f; B.Weight=0.5f;
    FFuzzyAIWeightedSample C; C.Value=0.1f; C.Weight=0.3f;
    Uncertain->Samples = {A,B,C};
    TestTrue(TEXT("Paper discrete weighted utility"), FMath::IsNearlyEqual(Uncertain->EvaluateContext(FFuzzyAIContext()), 0.46f, 1.e-6f));
    for (auto& Sample : Uncertain->Samples) Sample.Weight *= 4.f;
    TestTrue(TEXT("Weight scale invariant"), FMath::IsNearlyEqual(Uncertain->EvaluateContext(FFuzzyAIContext()), 0.46f, 1.e-6f));
    Uncertain->Samples.Reset();
    TestEqual(TEXT("No belief mass gives no support"), Uncertain->EvaluateContext(FFuzzyAIContext()), 0.f);
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilitySelectionTest, "FuzzyAI.Utility.SelectionAndLifecycle", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilitySelectionTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    auto* Component = Fixture.Component();
    auto* First = Wait(Component, TEXT("Retreat"), 0.7f);
    auto* Second = Wait(Component, TEXT("Heal"), 0.65f);
    Component->Actions = {First,Second};
    TestTrue(TEXT("Configured utility startup"), Component->StartAI());
    auto Runtime = Component->GetRuntimeActions();
    TestEqual(TEXT("Highest score selected"), Component->GetActiveAction()->ActionId, ActionTag(TEXT("Retreat")));
    TestTrue(TEXT("Templates never execute"), Component->GetActiveAction() != First && !First->IsActionActive());
    Runtime[1]->BaseScore = 0.75f;
    Fixture.Advance(0.4f); Component->EvaluateDecisions();
    TestEqual(TEXT("Switch margin prevents chatter"), Component->GetActiveAction()->ActionId, ActionTag(TEXT("Retreat")));
    Runtime[1]->BaseScore = 0.95f; Component->EvaluateDecisions();
    TestEqual(TEXT("Large improvement switches"), Component->GetActiveAction()->ActionId, ActionTag(TEXT("Heal")));
    Runtime[1]->FinishAction(); Component->EvaluateDecisions();
    TestNull(TEXT("Completed action releases selection during cooldown"), Component->GetActiveAction());
    Fixture.Advance(0.3f); Component->EvaluateDecisions();
    TestNotNull(TEXT("Cooldown expires"), Component->GetActiveAction());
    Component->StopAI();
    TestNull(TEXT("Stop cancels current action"), Component->GetActiveAction());
    TestFalse(TEXT("Stopped runtime is inactive"), Runtime[1]->IsActionActive());
    TestTrue(TEXT("Restart succeeds"), Component->StartAI());
    TestTrue(TEXT("Restart makes fresh copies"), Component->GetRuntimeActions()[0] != Runtime[0]);
    Component->StopAI();

    auto* TimeoutComponent = Fixture.Component();
    auto* TimeoutAction = Wait(TimeoutComponent,TEXT("Timeout"),1.f);
    TimeoutAction->Duration = 0.05f; TimeoutAction->Timeout = 0.1f; TimeoutAction->FailureCooldown = 1.f;
    TimeoutComponent->Actions = {TimeoutAction}; TimeoutComponent->StartAI();
    Fixture.Advance(0.15f); TimeoutComponent->EvaluateDecisions();
    TestNull(TEXT("Timeout fails action before next update and enters backoff"), TimeoutComponent->GetActiveAction());
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilityInputsTest, "FuzzyAI.Utility.InputsAndInterpretations", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilityInputsTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    auto* Component = Fixture.Component();
    auto* Target = Fixture.Actor(FVector(250.f,0.f,0.f));
    Component->ObservationInstances = {NewObject<UFuzzyDistanceObservation>(Component)};
    auto* Interpretation = NewObject<UFuzzyAIRuleInterpretation>(Component);
    Interpretation->InterpretationId = TEXT("Aggression");
    FFuzzyAIRule High, Low;
    FFuzzyAIFactor Condition; Condition.Input.Source = EFuzzyAIInputSource::Constant; Condition.Input.Constant = 0.75f;
    High.Conditions = {Condition}; High.Consequent = 1.f;
    Condition.Response.bInvert = true; Low.Conditions = {Condition}; Low.Consequent = 0.f;
    Interpretation->Rules = {High,Low}; Component->Interpretations = {Interpretation};
    TestTrue(TEXT("Interpretation starts"), Component->StartAI());
    FFuzzyAIContext Context; Context.Component = Component; Context.Observer=Component->GetOwner(); Context.Target=Target;
    FFuzzyAIInput Input; Input.ObservationKey=NKFuzzyAI::ObservationKeys::TargetDistance;
    float Value;
    TestFalse(TEXT("Unseen distance unavailable"), Input.Read(Context,Value));
    Component->UpdateTargetSighting(Target,true);
    TestTrue(TEXT("Visible input readable"), Input.Read(Context,Value));
    TestEqual(TEXT("Measured distance preserved"),Value,250.f);
    Component->EvaluateDecisions();
    TestTrue(TEXT("Interpretation readable"),Component->GetInterpretation(TEXT("Aggression"),Value));
    TestEqual(TEXT("Sugeno blends overlapping rules"),Value,0.75f);
    Input.Source=EFuzzyAIInputSource::EventRatio; Input.EventKey=TEXT("ParrySuccess"); Input.OpportunityEventKey=TEXT("ParryOpportunity");
    TestFalse(TEXT("No opportunities is unknown"),Input.Read(Context,Value));
    FFuzzyAIObservedEvent Event; Event.Source=Target; Event.EventKey=TEXT("ParryOpportunity");
    Component->RecordObservedEvent(Event); Component->RecordObservedEvent(Event);
    Event.EventKey=TEXT("ParrySuccess"); Component->RecordObservedEvent(Event);
    TestTrue(TEXT("Event ratio readable"),Input.Read(Context,Value)); TestEqual(TEXT("Ratio"),Value,0.5f);
    Context.Target=Fixture.Actor(); TestFalse(TEXT("Events are scoped to current target"),Input.Read(Context,Value));
    Context.Target=Target; Input.WindowSeconds=0.1f;
    Fixture.Advance(0.2f); TestFalse(TEXT("Window expiry removes evidence"),Input.Read(Context,Value));
    Component->UpdateTargetSighting(Target,false); Input.Source=EFuzzyAIInputSource::Observation;
    TestFalse(TEXT("Lost sight invalidates current distance"),Input.Read(Context,Value));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilityGASTest, "FuzzyAI.Utility.AbilityAndAttributeIntegration", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilityGASTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    // GAS globals can initialize once here; this existing project configuration warning is unrelated to adapter behavior.
    AddExpectedMessage(TEXT("No GameplayCueNotifyPaths were specified"), ELogVerbosity::Warning, EAutomationExpectedMessageFlags::Contains, 0);
    FWorld Fixture;
    auto* Actor = Fixture.Actor(); auto* System = ASC(Actor);
    const auto Handle = System->GiveAbility(FGameplayAbilitySpec(UFuzzyAIUtilityTestAbility::StaticClass(),1));
    auto* Component = Fixture.Component(Actor);
    auto* Action = NewObject<UFuzzyAIAbilityAction>(Component); Action->AbilityClass=UFuzzyAIUtilityTestAbility::StaticClass();
    Component->Actions={Action};
    TestTrue(TEXT("GAS action starts"),Component->StartAI());
    TestTrue(TEXT("Granted ability activated"),System->FindAbilitySpecFromHandle(Handle)->IsActive());
    Component->EvaluateDecisions(); TestNotNull(TEXT("Active ability is not re-gated by start requirements"),Component->GetActiveAction());
    Component->StopAI(); TestFalse(TEXT("Stopping cancels owned ability"),System->FindAbilitySpecFromHandle(Handle)->IsActive());
    Component->StartAI(); System->CancelAbilityHandle(Handle); Component->EvaluateDecisions();
    TestNull(TEXT("External ability cancellation ends action"),Component->GetActiveAction());
    Component->StopAI();
    auto* InstantComponent=Fixture.Component(Actor);
    System->GiveAbility(FGameplayAbilitySpec(UFuzzyAIUtilityInstantTestAbility::StaticClass(),1));
    auto* Instant=NewObject<UFuzzyAIAbilityAction>(InstantComponent); Instant->AbilityClass=UFuzzyAIUtilityInstantTestAbility::StaticClass();
    InstantComponent->Actions={Instant}; InstantComponent->StartAI();
    TestNull(TEXT("Synchronous ability end does not leave action stuck"),InstantComponent->GetActiveAction());
    InstantComponent->StopAI();

    auto* AttributeSet=NewObject<UFuzzyAIUtilityTestAttributes>(Actor); System->AddAttributeSetSubobject(AttributeSet);
    const FGameplayAttribute Health(FindFProperty<FProperty>(UFuzzyAIUtilityTestAttributes::StaticClass(),TEXT("Health")));
    const FGameplayAttribute Maximum(FindFProperty<FProperty>(UFuzzyAIUtilityTestAttributes::StaticClass(),TEXT("Maximum")));
    System->SetNumericAttributeBase(Health,25.f); System->SetNumericAttributeBase(Maximum,100.f);
    auto* Sensor=NewObject<UFuzzyAttributeObservation>(Component);
    FFuzzyAIObservationOutput Output; Output.Key=NKFuzzyAI::ObservationKeys::TargetDistance; Sensor->Outputs={Output};
    FFuzzyAIAttributeBinding Binding; Binding.Attribute=Health; Binding.MaximumAttribute=Maximum; Binding.bNormalize=true; Sensor->Bindings={Binding};
    Component->Actions.Reset(); Component->ObservationInstances={Sensor}; Component->StartAI();
    float Value=0.f;
    TestTrue(TEXT("Native attribute collector publishes"),Component->GetObservationStore()->GetFloat(Output.Key,Value));
    TestEqual(TEXT("Normalized health"),Value,0.25f);
    System->SetNumericAttributeBase(Maximum,0.f); Component->RefreshAllObservations();
    TestFalse(TEXT("Invalid denominator unavailable"),Component->GetObservationStore()->GetFloat(Output.Key,Value));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilityAuthoringTest, "FuzzyAI.Utility.AuthoringAndIsolation", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilityAuthoringTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    TStrongObjectPtr<UFuzzyAIDecisionProfile> Profile(NewObject<UFuzzyAIDecisionProfile>());
    auto* Action=Wait(Profile.Get(),TEXT("Shared"),1.f); Action->Considerations={Constant(Action,0.8f)}; Profile->Actions={Action};
    auto* A=Fixture.Component(); auto* B=Fixture.Component(); A->DecisionProfile=Profile.Get(); B->DecisionProfile=Profile.Get();
    TestTrue(TEXT("Profile A"),A->StartAI()); TestTrue(TEXT("Profile B"),B->StartAI());
    TestTrue(TEXT("Action instances isolated"),A->GetActiveAction()!=B->GetActiveAction());
    TestTrue(TEXT("Nested consideration instances isolated"),A->GetActiveAction()->Considerations[0]!=B->GetActiveAction()->Considerations[0]);
    A->GetActiveAction()->FinishAction(); A->EvaluateDecisions();
    TestNotNull(TEXT("Other enemy unaffected"),B->GetActiveAction());
    auto* Blueprint=FKismetEditorUtilities::CreateBlueprint(UFuzzyAIWaitAction::StaticClass(),GetTransientPackage(),MakeUniqueObjectName(GetTransientPackage(),UBlueprint::StaticClass(),TEXT("BP_UtilityFixture")),BPTYPE_Normal,UBlueprint::StaticClass(),UBlueprintGeneratedClass::StaticClass());
    FKismetEditorUtilities::CompileBlueprint(Blueprint);
    TestTrue(TEXT("Action Blueprint compiles"),Blueprint->Status == BS_UpToDate);
    const auto Snapshot=FFuzzyAIDebugModel::Read(B);
    TestTrue(TEXT("Debugger reports utility decisions"),Snapshot.Decisions.Contains(TEXT("Shared")));
    if (FParse::Param(FCommandLine::Get(), TEXT("FuzzyAIDebuggerCapture")) && FApp::CanEverRender())
    {
        auto* Estimate=NewObject<UFuzzyAIInputInterpretation>(B);
        Estimate->InterpretationId=TEXT("Aggression"); Estimate->Factor.Input.Source=EFuzzyAIInputSource::Constant;
        Estimate->Factor.Input.Constant=0.75f;
        B->StopAI(); B->Interpretations={Estimate}; B->StartAI();
        const TSharedRef<SFuzzyAIDebugger> Widget=SNew(SFuzzyAIDebugger);
        Widget->SelectComponent(B);
        Widget->SetDebugView(EFuzzyAIDebugView::Utility);
        const TSharedRef<SWindow> Window=SNew(SWindow).Title(FText::FromString(TEXT("Utility Decisions"))).ClientSize(FVector2D(1200.f,900.f))[Widget];
        FSlateApplication::Get().AddWindow(Window);
        Window->SlatePrepass(); FSlateApplication::Get().Tick(); FSlateApplication::Get().ForceRedrawWindow(Window);
        TArray<FColor> Pixels; FIntVector Size;
        if (TestTrue(TEXT("Utility panel renders"),FSlateApplication::Get().TakeScreenshot(Window,Pixels,Size)))
        {
            for (auto& Pixel:Pixels) Pixel.A=255;
            TArray64<uint8> PNG; FImageUtils::PNGCompressImageArray(Size.X,Size.Y,TArrayView64<const FColor>(Pixels.GetData(),Pixels.Num()),PNG);
            const FString Folder=FPaths::ProjectSavedDir()/TEXT("Automation/FuzzyAIUtility/Screenshots");
            IFileManager::Get().MakeDirectory(*Folder,true);
            TestTrue(TEXT("Utility screenshot saved"),FFileHelper::SaveArrayToFile(PNG,*(Folder/TEXT("Decisions.png"))));
        }
        Window->RequestDestroyWindow(); FSlateApplication::Get().Tick();
    }
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIUtilitySafetyTest, "FuzzyAI.Utility.ConfigurationAndSafety", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAIUtilitySafetyTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    auto* Component = Fixture.Component();
    Component->Actions = {Wait(Component,TEXT("Duplicate"),1.f),Wait(Component,TEXT("Duplicate"),0.5f)};
    AddExpectedError(TEXT("Duplicate action ID"),EAutomationExpectedErrorFlags::Contains,1);
    TestFalse(TEXT("Duplicate IDs rejected"),Component->StartAI());
    Component->Actions.Reset();
    auto* GateAction=Wait(Component,TEXT("Gated"),1.f);
    FFuzzyAIRequirement Requirement;
    Requirement.Input.ObservationKey=NKFuzzyAI::ObservationKeys::TargetDistance;
    GateAction->Requirements={Requirement}; Component->Actions={GateAction};
    TestTrue(TEXT("Unknown observation gate accepted as configuration"),Component->StartAI());
    TestNull(TEXT("Missing requirement prevents action"),Component->GetActiveAction());
    Component->StopAI();
    auto* Target=Fixture.Actor();
    auto* TargetAction=Wait(Component,TEXT("TargetBound"),1.f); TargetAction->bRequiresTarget=true;
    Component->Actions={TargetAction}; Component->SetTarget(Target); Component->StartAI();
    TestNotNull(TEXT("Target action starts"),Component->GetActiveAction());
    Target->Destroy(); Component->EvaluateDecisions();
    TestNull(TEXT("Target destruction cancels action"),Component->GetActiveAction());
    Component->StopAI();
    auto* Pawn=Fixture.World->SpawnActor<ACharacter>();
    auto* Controller=Fixture.World->SpawnActor<AAIController>(); Controller->Possess(Pawn);
    auto* MoveComponent=Fixture.Component(Pawn);
    MoveComponent->ObservationInstances={NewObject<UFuzzyTargetLocationObservation>(MoveComponent)};
    auto* Move=NewObject<UFuzzyAIMoveAction>(MoveComponent); Move->Mode=EFuzzyAIMoveMode::Retreat;
    MoveComponent->Actions={Move}; auto* Threat=Fixture.Actor(FVector(200.f,0.f,0.f));
    MoveComponent->StartAI(); TestNull(TEXT("Movement refuses unknown target location"),MoveComponent->GetActiveAction());
    MoveComponent->UpdateTargetSighting(Threat,true); MoveComponent->EvaluateDecisions();
    TestNull(TEXT("Missing navigation fails safely with retry backoff"),MoveComponent->GetActiveAction());
    TestFalse(TEXT("Failed movement is no longer active"),MoveComponent->GetRuntimeActions()[0]->IsActionActive());
    MoveComponent->EvaluateDecisions();
    TestTrue(TEXT("Failed movement reports cooldown"),MoveComponent->GetActionScores()[0].Reason.Contains(TEXT("Cooldown")));
    return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAILayerDebugTest, "FuzzyAI.Debugger.DecisionLayers", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FFuzzyAILayerDebugTest::RunTest(const FString& Parameters)
{
    using namespace FuzzyAIUtilityTests;
    FWorld Fixture;
    auto* Component = Fixture.Component();
    auto* Target = Fixture.Actor(FVector(300.f,0.f,0.f));
    Component->ObservationInstances = {NewObject<UFuzzyDistanceObservation>(Component),NewObject<UFuzzyLineOfSightObservation>(Component),NewObject<UFuzzyTargetLocationObservation>(Component)};
    Component->UpdateTargetSighting(Target,true);
    auto* Threat = NewObject<UFuzzyAIRuleInterpretation>(Component); Threat->InterpretationId = TEXT("Threat");
    FFuzzyAIFactor Close; Close.Input.ObservationKey = NKFuzzyAI::ObservationKeys::TargetDistance;
    Close.Response.InputMin = 100.f; Close.Response.InputMax = 900.f; Close.Response.bInvert = true;
    FFuzzyAIRule High, Low; High.Conditions = {Close}; High.Consequent = 1.f;
    auto Far = Close; Far.Response.bInvert = false; Low.Conditions = {Far}; Low.Consequent = 0.f;
    Threat->Rules = {High,Low};
    auto* Ratio = NewObject<UFuzzyAIInputInterpretation>(Component); Ratio->InterpretationId = TEXT("ParryRatio");
    Ratio->Factor.Input.Source = EFuzzyAIInputSource::EventRatio; Ratio->Factor.Input.EventKey = TEXT("Parry");
    Ratio->Factor.Input.OpportunityEventKey = TEXT("Opportunity");
    Component->Interpretations = {Threat,Ratio};
    auto* Hold = Wait(Component,TEXT("Hold"),1.f); Hold->Cooldown = 0.f;
    auto* Response = NewObject<UFuzzyAIInputConsideration>(Hold); Response->Factor = Close;
    auto* Counter = NewObject<UFuzzyAIDebugCountingConsideration>(Hold); Hold->Considerations = {Response,Counter};
    auto* Blocked = Wait(Component,TEXT("Blocked"),1.f);
    FFuzzyAIRequirement Gate; Gate.Input.Source = EFuzzyAIInputSource::Constant; Gate.Input.Constant = 0.f; Blocked->Requirements = {Gate};
    auto* Uncertain = Wait(Component,TEXT("Uncertain"),0.01f);
    auto* Samples = NewObject<UFuzzyAIUncertainConsideration>(Uncertain);
    FFuzzyAIWeightedSample Sample; Sample.Value = 0.4f; Samples->Samples = {Sample}; Uncertain->Considerations = {Samples};
    Component->Actions = {Hold,Blocked,Uncertain};
    if (!TestTrue(TEXT("Debug fixture starts"),Component->StartAI())) return false;
    auto* RuntimeCounter = Cast<UFuzzyAIDebugCountingConsideration>(Component->GetRuntimeActions()[0]->Considerations[1]);
    const int32 Calls = RuntimeCounter->Calls;
    const auto Trace = Component->GetDecisionDebugSnapshot();
    TestTrue(TEXT("Actual fuzzy rules captured"),Trace.Entries.ContainsByPredicate([](const auto& E){return E.Kind==TEXT("Rule") && E.State==TEXT("Fired");}));
    TestTrue(TEXT("Missing evidence captured"),Trace.Entries.ContainsByPredicate([](const auto& E){return E.Owner==TEXT("ParryRatio") && !E.bValid;}));
    TestTrue(TEXT("Failed hard gate captured"),Trace.Entries.ContainsByPredicate([](const auto& E){return E.Kind==TEXT("Gate") && E.State==TEXT("Fail");}));
    TestTrue(TEXT("Uncertainty weight captured"),Trace.Entries.ContainsByPredicate([](const auto& E){return E.Kind==TEXT("Sample") && E.bHasWeight;}));
    const auto* Curve = Trace.Entries.FindByPredicate([](const auto& E){return E.ActionId==ActionTag(TEXT("Hold")) && E.Kind==TEXT("Response");});
    if (TestNotNull(TEXT("Response trace"),Curve))
    {
        TestEqual(TEXT("Raw observation captured"),Curve->Input,300.f);
        TestEqual(TEXT("Normalization captured"),Curve->Normalized,0.25f);
        TestEqual(TEXT("Response captured"),Curve->Value,0.75f);
        TestEqual(TEXT("Curve preview sampled"),Curve->Curve.Num(),33);
    }
    const auto View = FFuzzyAIDebugModel::Read(Component);
    TestTrue(TEXT("Each decision layer has rows"),!View.Fuzzy.IsEmpty() && !View.Factors.IsEmpty() && !View.Execution.IsEmpty() && !View.History.IsEmpty());
    const TSharedRef<SFuzzyAIDebugger> Widget = SNew(SFuzzyAIDebugger);
    Widget->SelectComponent(Component);
    for (int32 i=0;i<12;++i) { Widget->SetDebugView(static_cast<EFuzzyAIDebugView>(i%4)); Widget->Refresh(); }
    TestEqual(TEXT("Inspecting all layers never reevaluates custom scoring"),RuntimeCounter->Calls,Calls);
    TestEqual(TEXT("Inspecting leaves trace unchanged"),Component->GetDecisionDebugSnapshot().Entries.Num(),Trace.Entries.Num());
    if (FParse::Param(FCommandLine::Get(),TEXT("FuzzyAIDebuggerCapture")) && FApp::CanEverRender())
    {
        const TSharedRef<SWindow> Window = SNew(SWindow).Title(FText::FromString(TEXT("FuzzyAI Layers"))).ClientSize(FVector2D(1200.f,900.f))[Widget];
        FSlateApplication::Get().AddWindow(Window);
        const FString Folder = FPaths::ProjectSavedDir()/TEXT("Automation/FuzzyAILayers/Screenshots");
        IFileManager::Get().MakeDirectory(*Folder,true);
        auto Capture = [&](const TCHAR* Name)
        {
            Window->SlatePrepass(); FSlateApplication::Get().Tick(); FSlateApplication::Get().ForceRedrawWindow(Window);
            TArray<FColor> Pixels; FIntVector Size;
            if (!TestTrue(TEXT("Layer screenshot"),FSlateApplication::Get().TakeScreenshot(Window,Pixels,Size))) return;
            for (auto& Pixel:Pixels) Pixel.A=255;
            TArray64<uint8> PNG; FImageUtils::PNGCompressImageArray(Size.X,Size.Y,TArrayView64<const FColor>(Pixels.GetData(),Pixels.Num()),PNG);
            TestTrue(TEXT("Layer image saved"),FFileHelper::SaveArrayToFile(PNG,*(Folder/Name)));
        };
        Widget->SetDebugView(EFuzzyAIDebugView::Facts); Capture(TEXT("Facts.png"));
        Widget->SetDebugView(EFuzzyAIDebugView::Fuzzy);
        TestTrue(TEXT("Fuzzy response selected"),Widget->SelectDebugTrace(TEXT("Threat"),TEXT("Rule 1 / Input 1"))); Capture(TEXT("Fuzzy.png"));
        Widget->SetDebugView(EFuzzyAIDebugView::Utility);
        TestTrue(TEXT("Utility response selected"),Widget->SelectDebugTrace(ActionTag(TEXT("Hold")).GetTagName(),TEXT("Factor 1"))); Capture(TEXT("Utility.png"));
        Widget->Refresh(); Capture(TEXT("UtilityRefreshed.png"));
        Widget->SetDebugView(EFuzzyAIDebugView::Execution); Capture(TEXT("Run.png"));
        Window->Resize(FVector2D(420.f,480.f)); Capture(TEXT("NarrowRun.png"));
        Window->RequestDestroyWindow(); FSlateApplication::Get().Tick();
    }
    for (int32 i=0;i<70;++i) { Component->GetActiveAction()->FinishAction(); Component->EvaluateDecisions(); }
    TestEqual(TEXT("Execution history bounded"),Component->GetDecisionDebugSnapshot().History.Num(),64);
    auto* RuntimeSamples = Cast<UFuzzyAIUncertainConsideration>(Component->GetRuntimeActions()[2]->Considerations[0]);
    RuntimeSamples->Samples.Init(Sample,600); Component->EvaluateDecisions();
    TestEqual(TEXT("Trace capacity bounded"),Component->GetDecisionDebugSnapshot().Entries.Num(),512);
    TestTrue(TEXT("Trace overflow visible"),Component->GetDecisionDebugSnapshot().DroppedEntries>0);
    Component->bCaptureDecisionDebug=false; Component->EvaluateDecisions();
    TestTrue(TEXT("Capture can be disabled"),Component->GetDecisionDebugSnapshot().Entries.IsEmpty());
    TestEqual(TEXT("Disabling debug does not change winner"),Component->GetActiveAction()->ActionId,ActionTag(TEXT("Hold")));
    Component->StopAI();
    return true;
}
#endif
