// Presents fuzzy memberships/rules, utility factors and execution state with compact labels.
// The curve preview and numeric markers use only already-captured snapshot data.
#include "Debugger/SFuzzyAILayerPanel.h"
#include "Styling/AppStyle.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SSplitter.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SOverlay.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "Widgets/Views/SHeaderRow.h"
#include "Widgets/Views/STableRow.h"
#include "Widgets/SLeafWidget.h"
#include "Rendering/DrawElements.h"

namespace
{
    class SLayerRow : public SMultiColumnTableRow<TSharedPtr<FFuzzyAIDebugRow>>
    {
    public:
        SLATE_BEGIN_ARGS(SLayerRow) {} SLATE_ARGUMENT(TSharedPtr<FFuzzyAIDebugRow>, Row) SLATE_END_ARGS()
        void Construct(const FArguments& Args, const TSharedRef<STableViewBase>& Owner)
        {
            Row = Args._Row;
            SMultiColumnTableRow::Construct(FSuperRowType::FArguments().Padding(3.f), Owner);
        }
        virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
        {
            FString Value;
            if (Column == TEXT("Item")) Value = Row->Key;
            else if (Column == TEXT("Owner")) Value = Row->Subject;
            else if (Column == TEXT("Kind")) Value = Row->Type;
            else if (Column == TEXT("Input")) Value = Row->Input;
            else if (Column == TEXT("X")) Value = Row->Normalized;
            else if (Column == TEXT("Value")) Value = Row->Value;
            else if (Column == TEXT("Weight")) Value = Row->Weight;
            else if (Column == TEXT("Age")) Value = Row->Age;
            else if (Column == TEXT("State")) Value = Row->State;
            else Value = Row->Details;
            auto Text = SNew(STextBlock).Text(FText::FromString(Value)).OverflowPolicy(ETextOverflowPolicy::Ellipsis)
                .ToolTipText(FText::FromString(Row->Tooltip.IsEmpty() ? Value : Row->Tooltip));
            if (Column == TEXT("Value") && Row->bHasScore)
            {
                return SNew(SOverlay)
                    + SOverlay::Slot().Padding(0.f, 2.f)
                    [SNew(SProgressBar).Percent(FMath::Clamp(Row->Score, 0.f, 1.f)).FillColorAndOpacity(FAppStyle::GetSlateColor(TEXT("Colors.AccentBlue")).GetSpecifiedColor().CopyWithNewOpacity(0.3f))]
                    + SOverlay::Slot().HAlign(HAlign_Center)[Text];
            }
            return SNew(SBox).Padding(FMargin(4.f,0.f))[Text];
        }
    private:
        TSharedPtr<FFuzzyAIDebugRow> Row;
    };

    class SResponsePreview : public SLeafWidget
    {
    public:
        SLATE_BEGIN_ARGS(SResponsePreview) {} SLATE_ATTRIBUTE(TSharedPtr<FFuzzyAIDebugRow>, Row) SLATE_END_ARGS()
        void Construct(const FArguments& Args) { Row = Args._Row; }
        virtual FVector2D ComputeDesiredSize(float) const override { return FVector2D(300.f, 100.f); }
        virtual int32 OnPaint(const FPaintArgs&, const FGeometry& Geometry, const FSlateRect&, FSlateWindowElementList& Draw,
            int32 Layer, const FWidgetStyle& Style, bool) const override
        {
            const auto Data = Row.Get();
            if (!Data || Data->Curve.IsEmpty()) return Layer;
            const FVector2D Size = Geometry.GetLocalSize();
            auto Point = [&](FVector2D P) { return FVector2D(10.f + P.X * FMath::Max(1., Size.X - 20.), 8.f + (1. - P.Y) * FMath::Max(1., Size.Y - 16.)); };
            const auto Foreground = FAppStyle::GetSlateColor(TEXT("Colors.Foreground")).GetSpecifiedColor();
            const auto Accent = FAppStyle::GetSlateColor(TEXT("Colors.AccentBlue")).GetSpecifiedColor();
            TArray<FVector2D> Axes = {Point({0.,1.}), Point({0.,0.}), Point({1.,0.})};
            FSlateDrawElement::MakeLines(Draw, Layer, Geometry.ToPaintGeometry(), Axes, ESlateDrawEffect::None, Foreground.CopyWithNewOpacity(0.3f), true, 1.f);
            TArray<FVector2D> Points;
            for (const auto& P : Data->Curve) Points.Add(Point(P));
            FSlateDrawElement::MakeLines(Draw, Layer + 1, Geometry.ToPaintGeometry(), Points, ESlateDrawEffect::None, Accent, true, 2.f);
            if (Data->bHasMarker)
            {
                const FVector2D P = Point({Data->MarkerX,Data->MarkerY});
                TArray<FVector2D> Marker = {P + FVector2D(-4.,0.),P + FVector2D(4.,0.)};
                FSlateDrawElement::MakeLines(Draw, Layer + 2, Geometry.ToPaintGeometry(), Marker, ESlateDrawEffect::None, Foreground, true, 3.f);
                Marker = {Point({Data->MarkerX,0.}),P};
                FSlateDrawElement::MakeLines(Draw, Layer + 2, Geometry.ToPaintGeometry(), Marker, ESlateDrawEffect::None, Foreground.CopyWithNewOpacity(0.6f), true, 1.f);
            }
            return Layer + 2;
        }
    private:
        TAttribute<TSharedPtr<FFuzzyAIDebugRow>> Row;
    };
}

void SFuzzyAILayerPanel::Construct(const FArguments& Args)
{
    Snapshot = Args._Snapshot; View = Args._View;
    auto& Primary = View == EFuzzyAIDebugView::Fuzzy ? Snapshot->Estimates : View == EFuzzyAIDebugView::Utility ? Snapshot->Actions : Snapshot->Execution;
    auto& Details = View == EFuzzyAIDebugView::Fuzzy ? Snapshot->Fuzzy : View == EFuzzyAIDebugView::Utility ? Snapshot->Factors : Snapshot->History;
    const FString TopLabel = View == EFuzzyAIDebugView::Fuzzy ? TEXT("Estimates") : View == EFuzzyAIDebugView::Utility ? TEXT("Actions") : TEXT("Execution");
    const FString BottomLabel = View == EFuzzyAIDebugView::Fuzzy ? TEXT("Rules / Responses") : View == EFuzzyAIDebugView::Utility ? TEXT("Factors / Gates") : TEXT("History");
    ChildSlot
    [SNew(SScrollBox)
      + SScrollBox::Slot().FillContentSize(1.f,0.f)
      [SNew(SBox).MinDesiredHeight(460.f)
       [SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight().Padding(0.f,2.f,0.f,6.f)
        [SNew(STextBlock).Text_Lambda([this]() { return FText::FromString(View == EFuzzyAIDebugView::Utility ? Snapshot->Selection + TEXT(" | ") + Snapshot->TraceStatus : Snapshot->TraceStatus); })]
        + SVerticalBox::Slot().FillHeight(1.f)
        [SNew(SSplitter).Orientation(Orient_Vertical)
            + SSplitter::Slot().Value(0.3f).MinSize(100.f)
            [SNew(SVerticalBox)
                + SVerticalBox::Slot().AutoHeight().Padding(2.f)[SNew(STextBlock).Text(FText::FromString(TopLabel)).Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))]
                + SVerticalBox::Slot().FillHeight(1.f)[MakeTable(Primary, PrimaryList, true)]]
            + SSplitter::Slot().Value(0.7f).MinSize(120.f)
            [SNew(SVerticalBox)
                + SVerticalBox::Slot().AutoHeight().Padding(2.f)[SNew(STextBlock).Text(FText::FromString(BottomLabel)).Font(FAppStyle::GetFontStyle(TEXT("BoldFont")))]
                + SVerticalBox::Slot().FillHeight(1.f)[MakeTable(Details, DetailList, false)]]]
        + SVerticalBox::Slot().AutoHeight()
        [SNew(SVerticalBox).Visibility_Lambda([this]() { return Selected && !Selected->Curve.IsEmpty() ? EVisibility::Visible : EVisibility::Collapsed; })
            + SVerticalBox::Slot().AutoHeight().Padding(2.f)
            [SNew(STextBlock).Text_Lambda([this]() { return FText::FromString(Selected ? FString::Printf(TEXT("%s | Input %s | X %s | Score %s"), *Selected->Key, *Selected->Input, *Selected->Normalized, *Selected->Value) : TEXT("")); })
                .ToolTipText_Lambda([this]() { return FText::FromString(Selected ? Selected->Tooltip : TEXT("")); })]
            + SVerticalBox::Slot().AutoHeight()[SNew(SResponsePreview).Row_Lambda([this]() { return Selected; })
                .ToolTipText(FText::FromString(TEXT("X: normalized input | Y: score")))]]
       ]]
    ];
}

TSharedRef<SWidget> SFuzzyAILayerPanel::MakeTable(TArray<TSharedPtr<FFuzzyAIDebugRow>>& Rows,
    TSharedPtr<SListView<TSharedPtr<FFuzzyAIDebugRow>>>& List, bool bPrimary)
{
    auto Header = SNew(SHeaderRow);
    auto Column = [&](const TCHAR* Id, const TCHAR* Label, float Width)
    { Header->AddColumn(SHeaderRow::Column(Id).DefaultLabel(FText::FromString(Label)).FillWidth(Width)); };
    Column(TEXT("Item"), bPrimary ? TEXT("Name") : TEXT("Item"), 0.18f);
    if (bPrimary && View == EFuzzyAIDebugView::Execution) Column(TEXT("Owner"),TEXT("Target"),0.12f);
    if (!bPrimary && View != EFuzzyAIDebugView::Execution) { Column(TEXT("Owner"),TEXT("Owner"),0.12f); Column(TEXT("Kind"),TEXT("Kind"),0.10f); }
    if (View != EFuzzyAIDebugView::Execution || bPrimary)
    {
        if (!bPrimary || View == EFuzzyAIDebugView::Execution) Column(TEXT("Input"),View == EFuzzyAIDebugView::Execution ? TEXT("Elapsed") : TEXT("Input"),0.09f);
        Column(TEXT("Value"),View == EFuzzyAIDebugView::Execution ? TEXT("Left") : TEXT("Score"),0.12f);
        if (!bPrimary || View == EFuzzyAIDebugView::Execution) Column(TEXT("Weight"),View == EFuzzyAIDebugView::Execution ? TEXT("Cooldown") : TEXT("Weight"),0.08f);
    }
    else Column(TEXT("Age"),TEXT("Age"),0.10f);
    Column(TEXT("State"),TEXT("State"),0.11f);
    Column(TEXT("Details"),View == EFuzzyAIDebugView::Execution ? TEXT("Details") : TEXT("Source / Reason"),0.24f);
    return SNew(SScrollBox).Orientation(Orient_Horizontal)
        + SScrollBox::Slot().FillContentSize(1.f,0.f)
        [SNew(SBox).MinDesiredWidth(850.f)
            [SAssignNew(List,SListView<TSharedPtr<FFuzzyAIDebugRow>>).ListItemsSource(&Rows)
                .SelectionMode(ESelectionMode::Single)
                .OnGenerateRow_Lambda([](TSharedPtr<FFuzzyAIDebugRow> Row, const TSharedRef<STableViewBase>& Owner) -> TSharedRef<ITableRow> { return SNew(SLayerRow,Owner).Row(Row); })
                .OnSelectionChanged_Lambda([this,bPrimary](TSharedPtr<FFuzzyAIDebugRow> Row, ESelectInfo::Type) { Selected = Row; SelectedId = Row ? Row->Id : FString(); bSelectedPrimary = bPrimary; })
                .HeaderRow(Header)]];
}
void SFuzzyAILayerPanel::Refresh()
{
    PrimaryList->RequestListRefresh(); DetailList->RequestListRefresh();
    if (SelectedId.IsEmpty()) return;
    auto& Rows = bSelectedPrimary ? (View == EFuzzyAIDebugView::Fuzzy ? Snapshot->Estimates : View == EFuzzyAIDebugView::Utility ? Snapshot->Actions : Snapshot->Execution) :
        (View == EFuzzyAIDebugView::Fuzzy ? Snapshot->Fuzzy : View == EFuzzyAIDebugView::Utility ? Snapshot->Factors : Snapshot->History);
    const auto* Match = Rows.FindByPredicate([this](const auto& Row) { return Row->Id == SelectedId; });
    Selected = Match ? *Match : nullptr;
    if (Selected) (bSelectedPrimary ? PrimaryList : DetailList)->SetSelection(Selected,ESelectInfo::Direct);
}
bool SFuzzyAILayerPanel::SelectTrace(FName Owner, const FString& Path)
{
    auto& Rows = View == EFuzzyAIDebugView::Fuzzy ? Snapshot->Fuzzy : Snapshot->Factors;
    const auto* Match = Rows.FindByPredicate([&](const auto& Row) { return Row->Subject == Owner.ToString() && Row->Key == Path && !Row->Curve.IsEmpty(); });
    if (!Match) return false;
    DetailList->SetSelection(*Match,ESelectInfo::Direct);
    DetailList->RequestScrollIntoView(*Match);
    return true;
}
