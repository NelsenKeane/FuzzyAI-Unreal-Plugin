// Builds the Slate debugger window and keeps the selected enemy's cached information visible during play.
// Discovers actors once per second and refreshes the selected snapshot four times per second while live updates are enabled.

#include "Debugger/SFuzzyAIDebugger.h"
#include "Core/FuzzyAIComponent.h"
#include "Editor.h"
#include "Engine/Engine.h"
#include "Engine/Selection.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "HAL/PlatformTime.h"
#include "Styling/AppStyle.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Layout/SSplitter.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Views/SHeaderRow.h"
#include "Widgets/Views/STableRow.h"

#define LOCTEXT_NAMESPACE "FuzzyAIDebugger"

#pragma region Table Row
namespace FuzzyAIDebugger
{
    class SDataRow : public SMultiColumnTableRow<TSharedPtr<FFuzzyAIDebugRow>>
    {
    public:
        SLATE_BEGIN_ARGS(SDataRow) {}
            SLATE_ARGUMENT(TSharedPtr<FFuzzyAIDebugRow>, Item)
        SLATE_END_ARGS()

        void Construct(const FArguments& Arguments, const TSharedRef<STableViewBase>& Owner)
        {
            Item = Arguments._Item;
            SMultiColumnTableRow::Construct(FSuperRowType::FArguments().Padding(3.f), Owner);
        }

        virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
        {
            FString Value;
            if (Column == TEXT("Key")) Value = Item->Key;
            else if (Column == TEXT("Type")) Value = Item->Type;
            else if (Column == TEXT("Value")) Value = Item->Value;
            else if (Column == TEXT("State")) Value = Item->State;
            else if (Column == TEXT("Subject")) Value = Item->Subject;
            else if (Column == TEXT("Age")) Value = Item->Age;
            else Value = Item->Details;

            return SNew(STextBlock)
                .Text(FText::FromString(Value))
                .ToolTipText(FText::FromString(Value))
                .ColorAndOpacity(Item->bUnavailable ? FSlateColor(FLinearColor(1.f, 0.65f, 0.35f)) : FSlateColor::UseForeground());
        }

    private:
        TSharedPtr<FFuzzyAIDebugRow> Item;
    };
}
#pragma endregion

#pragma region Window Layout
void SFuzzyAIDebugger::Construct(const FArguments& Arguments)
{
    ChildSlot
    [
        SNew(SBorder)
        .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
        .Padding(10.f)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight().Padding(0.f, 0.f, 0.f, 8.f)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot().FillWidth(1.f).VAlign(VAlign_Center)
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("Heading", "FuzzyAI Enemy Debugger"))
                    .Font(FAppStyle::GetFontStyle("HeadingExtraSmall"))
                ]
                + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(8.f, 0.f)
                [
                    SNew(SCheckBox)
                    .IsChecked_Lambda([this]() { return bLiveUpdates ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
                    .OnCheckStateChanged_Lambda([this](ECheckBoxState State)
                    {
                        bLiveUpdates = State == ECheckBoxState::Checked;
                        if (bLiveUpdates) Refresh();
                    })
                    .ToolTipText(LOCTEXT("LiveTooltip", "Refresh this display every 0.25 seconds. This does not request new sensor samples."))
                    [ SNew(STextBlock).Text(LOCTEXT("Live", "Live updates")) ]
                ]
                + SHorizontalBox::Slot().AutoWidth()
                [
                    SNew(SButton)
                    .Text(LOCTEXT("Refresh", "Refresh view"))
                    .OnClicked_Lambda([this]() { Refresh(); return FReply::Handled(); })
                ]
            ]
            + SVerticalBox::Slot().AutoHeight().Padding(0.f, 0.f, 0.f, 8.f)
            [
                SNew(STextBlock)
                .Text(LOCTEXT("ReadOnly", "Read-only local data. Start Play or Simulate to inspect running enemies. Server-only AI is shown in the server world."))
                .AutoWrapText(true)
            ]
            + SVerticalBox::Slot().FillHeight(1.f)
            [
                SNew(SSplitter)
                + SSplitter::Slot().Value(0.24f)
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot().AutoHeight().Padding(0.f, 0.f, 8.f, 6.f)
                    [
                        SNew(STextBlock)
                        .Text_Lambda([this]() { return FText::Format(LOCTEXT("EnemyCount", "Enemies ({0})"), FText::AsNumber(FilteredEnemies.Num())); })
                        .Font(FAppStyle::GetFontStyle("BoldFont"))
                    ]
                    + SVerticalBox::Slot().AutoHeight().Padding(0.f, 0.f, 8.f, 6.f)
                    [
                        SNew(SSearchBox)
                        .HintText(LOCTEXT("Search", "Search enemy or world"))
                        .OnTextChanged(this, &SFuzzyAIDebugger::OnSearchChanged)
                    ]
                    + SVerticalBox::Slot().AutoHeight().Padding(0.f, 0.f, 8.f, 6.f)
                    [
                        SNew(SButton)
                        .Text(LOCTEXT("InspectSelected", "Inspect selected actor"))
                        .ToolTipText(LOCTEXT("InspectSelectedTooltip", "Inspect a FuzzyAI component on the actor selected in this editor or play world."))
                        .OnClicked(this, &SFuzzyAIDebugger::InspectEditorSelection)
                    ]
                    + SVerticalBox::Slot().FillHeight(1.f).Padding(0.f, 0.f, 8.f, 0.f)
                    [
                        SAssignNew(EnemyList, SListView<TSharedPtr<FFuzzyAIDebugEnemy>>)
                        .ListItemsSource(&FilteredEnemies)
                        .SelectionMode(ESelectionMode::Single)
                        .OnGenerateRow(this, &SFuzzyAIDebugger::MakeEnemyRow)
                        .OnSelectionChanged(this, &SFuzzyAIDebugger::OnEnemySelected)
                    ]
                    + SVerticalBox::Slot().AutoHeight().Padding(0.f, 6.f, 8.f, 0.f)
                    [
                        SNew(STextBlock)
                        .AutoWrapText(true)
                        .Text_Lambda([this]()
                        {
                            return Enemies.IsEmpty()
                                ? LOCTEXT("NoEnemies", "No FuzzyAI components found. Add FuzzyAIComponent to an enemy. During play, only game worlds are listed.")
                                : FilteredEnemies.IsEmpty() ? LOCTEXT("NoMatches", "No enemies match this search.") : FText::GetEmpty();
                        })
                    ]
                ]
                + SSplitter::Slot().Value(0.76f)
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot().AutoHeight().Padding(8.f, 0.f, 0.f, 4.f)
                    [
                        SAssignNew(TitleText, STextBlock).Font(FAppStyle::GetFontStyle("BoldFont")).AutoWrapText(true)
                    ]
                    + SVerticalBox::Slot().AutoHeight().Padding(8.f, 0.f, 0.f, 6.f)
                    [ SAssignNew(SummaryText, STextBlock).AutoWrapText(true) ]
                    + SVerticalBox::Slot().AutoHeight().Padding(8.f, 0.f, 0.f, 6.f).MaxHeight(90.f)
                    [
                        SAssignNew(DiagnosticsText, STextBlock).AutoWrapText(true)
                        .ColorAndOpacity(FLinearColor(1.f, 0.65f, 0.35f))
                    ]
                    + SVerticalBox::Slot().AutoHeight().Padding(8.f, 0.f, 0.f, 6.f)
                    [ SNew(SSeparator) ]
                    + SVerticalBox::Slot().FillHeight(1.f).Padding(8.f, 0.f, 0.f, 0.f)
                    [
                        SNew(SSplitter).Orientation(Orient_Vertical)
                        + SSplitter::Slot().Value(0.38f)
                        [ MakeDataPanel(LOCTEXT("Store", "Observation Store"), Snapshot.Store, StoreList,
                            LOCTEXT("EmptyStore", "No current readings. The component may be stopped or have no configured sensors.")) ]
                        + SSplitter::Slot().Value(0.34f)
                        [ MakeDataPanel(LOCTEXT("Memory", "Remembered Facts"), Snapshot.Memory, MemoryList,
                            LOCTEXT("EmptyMemory", "No remembered facts. Enable Remember Last Successful on a sensor; expired facts are omitted.")) ]
                        + SSplitter::Slot().Value(0.28f)
                        [ MakeDataPanel(LOCTEXT("Events", "Observed Events (newest first)"), Snapshot.Events, EventList,
                            LOCTEXT("EmptyEvents", "No observed events. Events appear when gameplay calls Record Observed Event.")) ]
                    ]
                ]
            ]
        ]
    ];

    Refresh();
    RegisterActiveTimer(0.25f, FWidgetActiveTimerDelegate::CreateSP(this, &SFuzzyAIDebugger::UpdateDisplay));
}

TSharedRef<SWidget> SFuzzyAIDebugger::MakeDataPanel(const FText& Label, TArray<TSharedPtr<FFuzzyAIDebugRow>>& Rows,
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>>& List, const FText& EmptyMessage)
{
    auto* RowsSource = &Rows;
    return SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight().Padding(0.f, 4.f)
        [
            SNew(STextBlock).Font(FAppStyle::GetFontStyle("BoldFont"))
            .Text_Lambda([Label, RowsSource]() { return FText::Format(LOCTEXT("PanelCount", "{0} ({1})"), Label, FText::AsNumber(RowsSource->Num())); })
        ]
        + SVerticalBox::Slot().FillHeight(1.f)
        [
            SAssignNew(List, SListView<TSharedPtr<FFuzzyAIDebugRow>>)
            .ListItemsSource(RowsSource)
            .SelectionMode(ESelectionMode::None)
            .OnGenerateRow(this, &SFuzzyAIDebugger::MakeDataRow)
            .HeaderRow
            (
                SNew(SHeaderRow)
                + SHeaderRow::Column(TEXT("Key")).DefaultLabel(LOCTEXT("Key", "Key")).FillWidth(0.20f)
                + SHeaderRow::Column(TEXT("Type")).DefaultLabel(LOCTEXT("Type", "Type")).FillWidth(0.08f)
                + SHeaderRow::Column(TEXT("Value")).DefaultLabel(LOCTEXT("Value", "Value")).FillWidth(0.19f)
                + SHeaderRow::Column(TEXT("State")).DefaultLabel(LOCTEXT("State", "State")).FillWidth(0.09f)
                + SHeaderRow::Column(TEXT("Subject")).DefaultLabel(LOCTEXT("Subject", "Target / Subject")).FillWidth(0.13f)
                + SHeaderRow::Column(TEXT("Age")).DefaultLabel(LOCTEXT("Age", "Age")).FillWidth(0.08f)
                + SHeaderRow::Column(TEXT("Details")).DefaultLabel(LOCTEXT("Details", "Details")).FillWidth(0.23f)
            )
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(0.f, 3.f)
        [
            SNew(STextBlock).AutoWrapText(true).Text(EmptyMessage)
            .Visibility_Lambda([RowsSource]() { return RowsSource->IsEmpty() ? EVisibility::Visible : EVisibility::Collapsed; })
        ];
}
#pragma endregion

#pragma region Discovery and Selection
void SFuzzyAIDebugger::RefreshEnemies()
{
    TArray<UWorld*> PlayWorlds;
    TArray<UWorld*> EditorWorlds;
    if (GEngine)
    {
        for (const FWorldContext& Context : GEngine->GetWorldContexts())
        {
            if (Context.WorldType == EWorldType::PIE || Context.WorldType == EWorldType::Game)
            {
                PlayWorlds.Add(Context.World());
            }
            else if (Context.WorldType == EWorldType::Editor)
            {
                EditorWorlds.Add(Context.World());
            }
        }
    }
    // Prefer actual play instances to the editor's non-running copies of the same actors.
    TArray<TSharedPtr<FFuzzyAIDebugEnemy>> Found = FFuzzyAIDebugModel::FindEnemies(PlayWorlds.IsEmpty() ? EditorWorlds : PlayWorlds);
    bool bChanged = Found.Num() != Enemies.Num();
    for (int32 Index = 0; !bChanged && Index < Found.Num(); ++Index)
    {
        bChanged = Found[Index]->Component != Enemies[Index]->Component || Found[Index]->Name != Enemies[Index]->Name ||
            Found[Index]->World != Enemies[Index]->World;
    }
    if (bChanged)
    {
        Enemies = MoveTemp(Found);
        ApplyEnemyFilter();
    }
}

void SFuzzyAIDebugger::ApplyEnemyFilter()
{
    const TWeakObjectPtr<UFuzzyAIComponent> PreviousSelection = SelectedComponent;
    FilteredEnemies.Reset();
    TSharedPtr<FFuzzyAIDebugEnemy> SelectedItem;
    for (const auto& Enemy : Enemies)
    {
        if (EnemyFilter.IsEmpty() || Enemy->Name.Contains(EnemyFilter) || Enemy->World.Contains(EnemyFilter))
        {
            FilteredEnemies.Add(Enemy);
            if (Enemy->Component == PreviousSelection)
            {
                SelectedItem = Enemy;
            }
        }
    }
    EnemyList->RequestListRefresh();
    if (SelectedItem)
    {
        EnemyList->SetSelection(SelectedItem, ESelectInfo::Direct);
    }
    else
    {
        EnemyList->ClearSelection();
        SelectedComponent.Reset();
    }
}

bool SFuzzyAIDebugger::SelectComponent(UFuzzyAIComponent* Component)
{
    if (!IsValid(Component))
    {
        return false;
    }
    const auto* Found = FilteredEnemies.FindByPredicate([Component](const auto& Enemy) { return Enemy->Component.Get() == Component; });
    if (!Found)
    {
        return false;
    }
    EnemyList->SetSelection(*Found, ESelectInfo::Direct);
    EnemyList->RequestScrollIntoView(*Found);
    return true;
}

void SFuzzyAIDebugger::OnEnemySelected(TSharedPtr<FFuzzyAIDebugEnemy> Enemy, ESelectInfo::Type SelectInfo)
{
    SelectedComponent = Enemy ? Enemy->Component : TWeakObjectPtr<UFuzzyAIComponent>();
    RefreshDetails();
}

void SFuzzyAIDebugger::OnSearchChanged(const FText& Text)
{
    EnemyFilter = Text.ToString().TrimStartAndEnd();
    ApplyEnemyFilter();
    RefreshDetails();
}

FReply SFuzzyAIDebugger::InspectEditorSelection()
{
    Refresh();
    if (GEditor && GEditor->GetSelectedActors())
    {
        for (FSelectionIterator It(*GEditor->GetSelectedActors()); It; ++It)
        {
            if (AActor* Actor = Cast<AActor>(*It))
            {
                TArray<UFuzzyAIComponent*> Components;
                Actor->GetComponents<UFuzzyAIComponent>(Components);
                for (UFuzzyAIComponent* Component : Components)
                {
                    if (SelectComponent(Component)) return FReply::Handled();
                }
            }
        }
    }
    return FReply::Handled();
}

TSharedRef<ITableRow> SFuzzyAIDebugger::MakeEnemyRow(TSharedPtr<FFuzzyAIDebugEnemy> Enemy, const TSharedRef<STableViewBase>& Owner)
{
    return SNew(STableRow<TSharedPtr<FFuzzyAIDebugEnemy>>, Owner).Padding(6.f)
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()
        [ SNew(STextBlock).Text(FText::FromString(Enemy->Name)).ToolTipText(FText::FromString(Enemy->Identity)).AutoWrapText(true) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0.f, 3.f, 0.f, 0.f)
        [ SNew(STextBlock).Text(FText::FromString(Enemy->World)).AutoWrapText(true) ]
    ];
}

TSharedRef<ITableRow> SFuzzyAIDebugger::MakeDataRow(TSharedPtr<FFuzzyAIDebugRow> Row, const TSharedRef<STableViewBase>& Owner)
{
    return SNew(FuzzyAIDebugger::SDataRow, Owner).Item(Row);
}
#pragma endregion

#pragma region Snapshot Refresh
void SFuzzyAIDebugger::Refresh()
{
    RefreshEnemies();
    NextDiscoveryTime = FPlatformTime::Seconds() + 1.;
    RefreshDetails();
}

EActiveTimerReturnType SFuzzyAIDebugger::UpdateDisplay(double CurrentTime, float DeltaTime)
{
    // Invalidate destroyed selections even when the display is frozen.
    if (bLiveUpdates)
    {
        if (FPlatformTime::Seconds() >= NextDiscoveryTime)
        {
            RefreshEnemies();
            NextDiscoveryTime = FPlatformTime::Seconds() + 1.;
        }
        RefreshDetails();
    }
    else if (!SelectedComponent.IsValid() && Snapshot.bAvailable)
    {
        Refresh();
    }
    return EActiveTimerReturnType::Continue;
}

void SFuzzyAIDebugger::RefreshDetails()
{
    Snapshot = FFuzzyAIDebugModel::Read(SelectedComponent.Get());
    if (!Snapshot.bAvailable)
    {
        SelectedComponent.Reset();
    }
    TitleText->SetText(Snapshot.bAvailable ? FText::FromString(Snapshot.Title) : LOCTEXT("ChooseEnemy", "Select an enemy to inspect"));
    SummaryText->SetText(Snapshot.bAvailable ? FText::FromString(Snapshot.Summary)
        : LOCTEXT("ChooseHelp", "Choose a FuzzyAI component from the list. Store and memory are separate views of this enemy's knowledge."));
    DiagnosticsText->SetText(FText::FromString(Snapshot.Diagnostics));
    DiagnosticsText->SetToolTipText(FText::FromString(Snapshot.Diagnostics));
    DiagnosticsText->SetVisibility(Snapshot.Diagnostics.IsEmpty() ? EVisibility::Collapsed : EVisibility::Visible);
    StoreList->RequestListRefresh();
    MemoryList->RequestListRefresh();
    EventList->RequestListRefresh();
}
#pragma endregion

#undef LOCTEXT_NAMESPACE
