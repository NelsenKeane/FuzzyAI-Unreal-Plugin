#include "Core/FuzzyAIPipeline.h"
#include "Core/FuzzyAIConfig.h"
#include "Profiling/FuzzyProfileDefinition.h"
#include "Profiling/FuzzyProfileProcessor.h"
#include "Interpretation/FuzzyModelAsset.h"
#include "Interpretation/FuzzyInterpreter.h"
#include "Utility/FuzzyUtilityAction.h"
#include "Utility/FuzzyUtilitySelector.h"

void UFuzzyAIPipeline::InitializeLayers()
{
    if (!ProfileProcessor)
    {
        ProfileProcessor = NewObject<UFuzzyProfileProcessor>(this);
        Interpreter = NewObject<UFuzzyInterpreter>(this);
        UtilitySelector = NewObject<UFuzzyUtilitySelector>(this);
    }
}

FFuzzyAIDebugSnapshot UFuzzyAIPipeline::Preview(const FFuzzyAIDecisionContext& Context, const UFuzzyAIConfig* Config)
{
    FFuzzyAIDebugSnapshot Snapshot;
    Snapshot.Evidence = Context;
    Snapshot.ExecutionStage = FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotRun, TEXT("Preview does not execute actions."));
    if (!IsValid(Config))
    {
        Snapshot.ProfileStage = FFuzzyAIStageResult::Make(EFuzzyAIStageStatus::NotConfigured, TEXT("Assign an optional decision configuration."));
        return Snapshot;
    }
    InitializeLayers();

    // Each stage consumes snapshots and stops the preview if its predecessor cannot produce valid output.
    Snapshot.ProfileStage = ProfileProcessor->BuildProfile(Context, Config->ProfileDefinition, Snapshot.Profile);
    if (Snapshot.ProfileStage.Status != EFuzzyAIStageStatus::Succeeded)
    {
        return Snapshot;
    }
    Snapshot.InterpretationStage = Interpreter->Interpret(Context, Snapshot.Profile, Config->FuzzyModel, Snapshot.Interpretation);
    if (Snapshot.InterpretationStage.Status != EFuzzyAIStageStatus::Succeeded)
    {
        return Snapshot;
    }
    FFuzzyAIUtilityContext UtilityContext;
    UtilityContext.Evidence = Context;
    UtilityContext.Profile = Snapshot.Profile;
    UtilityContext.Interpretation = Snapshot.Interpretation;
    Snapshot.UtilityStage = UtilitySelector->SelectAction(UtilityContext, Config->Actions, Snapshot.Decision);
    return Snapshot;
}
