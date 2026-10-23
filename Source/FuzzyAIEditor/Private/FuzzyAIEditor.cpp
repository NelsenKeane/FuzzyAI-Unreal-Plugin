// Registers the dockable FuzzyAI enemy debugger and its Window menu entry.
// Removes editor callbacks and closes the tab on shutdown; runtime code stays in FuzzyAIRuntime.

#include "Modules/ModuleManager.h"
#include "Debugger/SFuzzyAIDebugger.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Docking/TabManager.h"
#include "Styling/AppStyle.h"
#include "ToolMenus.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SNullWidget.h"
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"

#define LOCTEXT_NAMESPACE "FuzzyAIEditor"

namespace FuzzyAIEditor
{
    const FName DebuggerTabName(TEXT("FuzzyAI.Debugger"));
}

class FFuzzyAIEditorModule : public IModuleInterface
{
public:
    #pragma region Module Lifecycle
    virtual void StartupModule() override
    {
        if (IsRunningCommandlet()) return;

        FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FuzzyAIEditor::DebuggerTabName,
            FOnSpawnTab::CreateRaw(this, &FFuzzyAIEditorModule::SpawnDebugger))
            .SetDisplayName(LOCTEXT("TabTitle", "FuzzyAI Debugger"))
            .SetTooltipText(LOCTEXT("TabTooltip", "Inspect an enemy's observation store, remembered facts and observed events."))
            .SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Details"))
            .SetGroup(WorkspaceMenu::GetMenuStructure().GetDeveloperToolsDebugCategory())
            .SetMenuType(ETabSpawnerMenuType::Hidden);

        UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FFuzzyAIEditorModule::RegisterMenus));
    }

    virtual void ShutdownModule() override
    {
        UToolMenus::UnRegisterStartupCallback(this);
        UToolMenus::UnregisterOwner(this);
        if (FSlateApplication::IsInitialized())
        {
            if (TSharedPtr<SDockTab> Tab = FGlobalTabmanager::Get()->FindExistingLiveTab(FuzzyAIEditor::DebuggerTabName))
            {
                Tab->SetContent(SNullWidget::NullWidget);
                Tab->RequestCloseTab();
            }
            FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FuzzyAIEditor::DebuggerTabName);
        }
    }
    #pragma endregion

private:
    #pragma region Debugger Tab and Menu
    TSharedRef<SDockTab> SpawnDebugger(const FSpawnTabArgs& Arguments)
    {
        return SNew(SDockTab).TabRole(ETabRole::NomadTab)
        [ SNew(SFuzzyAIDebugger) ];
    }

    void RegisterMenus()
    {
        FToolMenuOwnerScoped Owner(this);
        UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
        FToolMenuSection& Section = Menu->FindOrAddSection("FuzzyAI");
        Section.Label = LOCTEXT("MenuSection", "FuzzyAI");
        Section.AddMenuEntry("OpenFuzzyAIDebugger", LOCTEXT("OpenDebugger", "FuzzyAI Debugger"),
            LOCTEXT("OpenDebuggerTooltip", "Inspect enemies with a FuzzyAI component in the current editor or play session."),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Tabs.Details"),
            FUIAction(FExecuteAction::CreateLambda([]() { FGlobalTabmanager::Get()->TryInvokeTab(FuzzyAIEditor::DebuggerTabName); })));
    }
    #pragma endregion
};

IMPLEMENT_MODULE(FFuzzyAIEditorModule, FuzzyAIEditor)

#undef LOCTEXT_NAMESPACE
