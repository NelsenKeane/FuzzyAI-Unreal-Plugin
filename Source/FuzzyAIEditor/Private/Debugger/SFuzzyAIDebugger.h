// Declares the dockable enemy inspector: searchable selection, cached store, remembered facts and events.
// Refreshes display snapshots at a bounded rate and holds runtime components through weak pointers only.

#pragma once

#include "CoreMinimal.h"
#include "Debugger/FuzzyAIDebugModel.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class UFuzzyAIComponent;
class STextBlock;

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

private:
    #pragma region Selection and Cached Display
    TWeakObjectPtr<UFuzzyAIComponent> SelectedComponent;
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> Enemies;
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> FilteredEnemies;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugEnemy>>> EnemyList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> StoreList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> MemoryList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> EventList;
    TSharedPtr<STextBlock> TitleText;
    TSharedPtr<STextBlock> SummaryText;
    TSharedPtr<STextBlock> DiagnosticsText;
    FFuzzyAIDebugSnapshot Snapshot;
    FString EnemyFilter;
    double NextDiscoveryTime = 0.;
    bool bLiveUpdates = true;
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
        TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>>& List, const FText& EmptyMessage);
    #pragma endregion
};
