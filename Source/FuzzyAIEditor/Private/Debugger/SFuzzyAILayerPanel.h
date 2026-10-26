// Layer-specific read-only tables share cached rows with the main debugger.
// Selecting a response reveals its captured curve without calling runtime evaluation.
#pragma once
#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "Debugger/FuzzyAIDebugModel.h"

enum class EFuzzyAIDebugView : uint8 { Facts, Fuzzy, Utility, Execution };

class SFuzzyAILayerPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SFuzzyAILayerPanel) {}
        SLATE_ARGUMENT(FFuzzyAIDebugSnapshot*, Snapshot)
        SLATE_ARGUMENT(EFuzzyAIDebugView, View)
    SLATE_END_ARGS()
    void Construct(const FArguments& Args);
    void Refresh();
    bool SelectTrace(FName Owner, const FString& Path);
private:
    FFuzzyAIDebugSnapshot* Snapshot = nullptr;
    EFuzzyAIDebugView View = EFuzzyAIDebugView::Fuzzy;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> PrimaryList;
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>> DetailList;
    TSharedPtr<FFuzzyAIDebugRow> Selected;
    FString SelectedId;
    bool bSelectedPrimary = false;
    TSharedRef<SWidget> MakeTable(TArray<TSharedPtr<FFuzzyAIDebugRow>>& Rows,
        TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>>& List, bool bPrimary);
};
