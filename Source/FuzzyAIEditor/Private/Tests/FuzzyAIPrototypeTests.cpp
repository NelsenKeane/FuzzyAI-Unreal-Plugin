#if WITH_DEV_AUTOMATION_TESTS

#include "Misc/AutomationTest.h"
#include "Misc/ScopeExit.h"
#include "Core/FuzzyAIComponent.h"
#include "Core/FuzzyAIConfig.h"
#include "Profiling/FuzzyProfileDefinition.h"
#include "Interpretation/FuzzyInterpreter.h"
#include "Interpretation/FuzzyModelAsset.h"
#include "Utility/FuzzyUtilityAction.h"
#include "Utility/FuzzyUtilitySelector.h"
#include "Execution/FuzzyActionExecutor.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "UObject/StrongObjectPtr.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FFuzzyAIPrototypeBoundaryTest, "FuzzyAI.Prototype.UnfinishedStages",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FFuzzyAIPrototypeBoundaryTest::RunTest(const FString& Parameters)
{
    const UWorld::InitializationValues Values = UWorld::InitializationValues()
        .AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false)
        .CreateAISystem(false).ShouldSimulatePhysics(false).SetTransactional(false);
    UWorld* World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Values);
    if (!TestNotNull(TEXT("Transient test world exists"), World))
    {
        return false;
    }
    GEngine->CreateNewWorldContext(EWorldType::Game).SetCurrentWorld(World);
    ON_SCOPE_EXIT
    {
        World->DestroyWorld(false);
        GEngine->DestroyWorldContext(World);
    };
    AActor* Owner = World->SpawnActor<AActor>();
    UFuzzyAIComponent* Component = NewObject<UFuzzyAIComponent>(Owner);
    Owner->AddInstanceComponent(Component);
    Component->bAutoStart = false;
    Component->RegisterComponent();
    TestTrue(TEXT("Stopped component cannot evaluate a preview"),
        Component->PreviewDecisionPipeline().ProfileStage.Status == EFuzzyAIStageStatus::NotReady);
    if (!TestTrue(TEXT("Existing observation layer starts without decision configuration"), Component->StartAI()))
    {
        return false;
    }
    TestTrue(TEXT("Missing optional config is explicit"),
        Component->PreviewDecisionPipeline().ProfileStage.Status == EFuzzyAIStageStatus::NotConfigured);

    Component->DecisionConfig = NewObject<UFuzzyAIConfig>();
    Component->DecisionConfig->ProfileDefinition = NewObject<UFuzzyProfileDefinition>();
    const FFuzzyAIDebugSnapshot Preview = Component->PreviewDecisionPipeline();
    TestTrue(TEXT("Preview captures the local observer"), Preview.Evidence.Observer == Owner);
    TestTrue(TEXT("Configured profiling stays explicitly unfinished"), Preview.ProfileStage.Status == EFuzzyAIStageStatus::NotImplemented);
    TestTrue(TEXT("Downstream inference is not evaluated with missing profile evidence"), Preview.InterpretationStage.Status == EFuzzyAIStageStatus::NotRun);
    TestTrue(TEXT("Preview never requests action execution"), Preview.ExecutionStage.Status == EFuzzyAIStageStatus::NotRun);
    TestNull(TEXT("Prototype cannot invent a selected action"), Preview.Decision.SelectedAction.Get());
    TestTrue(TEXT("Prototype cannot invent behavior estimates"), Preview.Profile.BehaviorMetrics.IsEmpty());
    TestTrue(TEXT("Manual preview leaves observation collection running"), Component->IsObserving());

    TStrongObjectPtr<UFuzzyInterpreter> Interpreter(NewObject<UFuzzyInterpreter>());
    TStrongObjectPtr<UFuzzyModelAsset> Model(NewObject<UFuzzyModelAsset>());
    FFuzzyAIInterpretationSnapshot Interpretation;
    TestTrue(TEXT("A model asset is not a working fuzzy engine"),
        Interpreter->Interpret(Preview.Evidence, Preview.Profile, Model.Get(), Interpretation).Status == EFuzzyAIStageStatus::NotImplemented);
    TestTrue(TEXT("No semantic values are fabricated"), Interpretation.Values.IsEmpty());

    TStrongObjectPtr<UFuzzyUtilitySelector> Selector(NewObject<UFuzzyUtilitySelector>());
    TStrongObjectPtr<UFuzzyUtilityAction> Action(NewObject<UFuzzyUtilityAction>());
    FFuzzyAIUtilityDecision Decision;
    FFuzzyAIUtilityContext UtilityContext;
    UtilityContext.Evidence = Preview.Evidence;
    TestTrue(TEXT("Candidate definitions are not a working selector"),
        Selector->SelectAction(UtilityContext, {Action.Get()}, Decision).Status == EFuzzyAIStageStatus::NotImplemented);
    TestNull(TEXT("Selector does not fall back to the first action"), Decision.SelectedAction.Get());

    TStrongObjectPtr<UFuzzyActionExecutor> Executor(NewObject<UFuzzyActionExecutor>());
    TestTrue(TEXT("Base executor explicitly declines execution"),
        Executor->ExecuteAction(Preview.Evidence, FGameplayTag()).Status == EFuzzyAIStageStatus::NotImplemented);
    Executor->CancelAction();
    Component->StopAI();
    return true;
}

#endif
