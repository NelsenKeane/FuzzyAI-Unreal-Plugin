// Declares the dockable enemy inspector: searchable selection, cached store, remembered facts and events.
// Refreshes display snapshots at a bounded rate and holds runtime components through weak pointers only.

#pragma once

#include "CoreMinimal.h"
#include "Debugger/FuzzyAIDebugModel.h"
#include "Debugger/SFuzzyAILayerPanel.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class UFuzzyAIComponent;
class STextBlock;
class SExpandableArea;
class SSearchBox;
class SWidgetSwitcher;

class SFuzzyAIDebugger : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SFuzzyAIDebugger) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& Arguments);

    /** Also used by editor integrations to inspect a known component without changing editor selection. */
    bool SelectComponent(UFuzzyAIComponent* Component);
    void Refresh();
    UFuzzyAIComponent* GetSelectedComponent() const { return SelectedComponent.Get(); }
    const FFuzzyAIDebugSnapshot& GetSnapshot() const { return Snapshot; }
    void SetEnemyDrawerOpen(bool bOpen);
    bool IsEnemyDrawerOpen() const { return bEnemyDrawerOpen; }
    virtual bool SupportsKeyboardFocus() const override { return true; }
    virtual FReply OnKeyDown(const FGeometry& MyGeometry, const FKeyEvent& KeyEvent) override;
    void SetDebugView(EFuzzyAIDebugView View) { DebugView = View; }
    EFuzzyAIDebugView GetDebugView() const { return DebugView; }
    bool SelectDebugTrace(FName Owner, const FString& Path);

private:
    #pragma region Selection and Cached Display
    TWeakObjectPtr<UFuzzyAIComponent> SelectedComponent;
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> Enemies;
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> FilteredEnemies;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugEnemy>>> EnemyList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> StoreList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> MemoryList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> EventList;
    TSharedPtr<SSearchBox> EnemySearch;
    TSharedPtr<SExpandableArea> StoreArea;
    TSharedPtr<SExpandableArea> MemoryArea;
    TSharedPtr<SExpandableArea> EventArea;
    TSharedPtr<STextBlock> TitleText;
    TSharedPtr<STextBlock> SummaryText;
    TSharedPtr<STextBlock> DiagnosticsText;
    TSharedPtr<SWidgetSwitcher> LayerSwitcher;
    TSharedPtr<SFuzzyAILayerPanel> FuzzyPanel;
    TSharedPtr<SFuzzyAILayerPanel> UtilityPanel;
    TSharedPtr<SFuzzyAILayerPanel> ExecutionPanel;
    EFuzzyAIDebugView DebugView = EFuzzyAIDebugView::Facts;
    FFuzzyAIDebugSnapshot Snapshot;
    FString EnemyFilter;
    double NextDiscoveryTime = 0.;
    bool bLiveUpdates = true;
    bool bEnemyDrawerOpen = false;
    #pragma endregion

    #pragma region Display Updates and Row Construction
    EActiveTimerReturnType UpdateDisplay(double CurrentTime, float DeltaTime);
    void RefreshEnemies();
    void ApplyEnemyFilter();
    void RefreshDetails();
    void OnEnemySelected(TSharedPtr<FFuzzyAIDebugEnemy> Enemy, ESelectInfo::Type SelectInfo);
    void OnSearchChanged(const FText& Text);
    FReply InspectEditorSelection();
    TSharedRef<ITableRow> MakeEnemyRow(TSharedPtr<FFuzzyAIDebugEnemy> Enemy, const TSharedRef<STableViewBase>& Owner);
    TSharedRef<ITableRow> MakeDataRow(TSharedPtr<FFuzzyAIDebugRow> Row, const TSharedRef<STableViewBase>& Owner);
    TSharedRef<SWidget> MakeDataPanel(const FText& Label, TArray<TSharedPtr<FFuzzyAIDebugRow>>& Rows,
        TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>>& List, TSharedPtr<SExpandableArea>& Area, const FText& EmptyMessage);
    TSharedRef<SWidget> MakeEnemyDrawer();
    float GetMinimumObservationHeight() const;
    TSharedRef<SWidget> MakeLayerTabs();
    #pragma endregion
};
