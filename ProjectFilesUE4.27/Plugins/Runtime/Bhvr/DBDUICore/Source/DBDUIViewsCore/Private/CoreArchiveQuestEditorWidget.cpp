#include "CoreArchiveQuestEditorWidget.h"
#include "UObject/NoExportTypes.h"

class UCoreButtonWidget;

void UCoreArchiveQuestEditorWidget::OnSnapGridChecked(bool checked)
{

}

void UCoreArchiveQuestEditorWidget::OnSaveGraphClick(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestEditorWidget::OnRefreshGridClick(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestEditorWidget::OnPathClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeYPixelChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeYPercentChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeXPixelChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeXPercentChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeSubmitClick(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestEditorWidget::OnNodeBeginDrag(const FName& id)
{

}

void UCoreArchiveQuestEditorWidget::OnMoveNodesModeChecked(bool checked)
{

}

void UCoreArchiveQuestEditorWidget::OnLinkNodesModeChecked(bool checked)
{

}

void UCoreArchiveQuestEditorWidget::OnGridVisbilityChecked(bool checked)
{

}

void UCoreArchiveQuestEditorWidget::OnGridTileWidthPixelChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnGridTileWidthPercentChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnGridTileHeightPixelChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::OnGridTileHeightPercentChanged(const FText& text)
{

}

void UCoreArchiveQuestEditorWidget::NodeDragged(const FVector2D& position)
{

}

void UCoreArchiveQuestEditorWidget::IntermediatePathMove(const FVector2D& position)
{

}

UCoreArchiveQuestEditorWidget::UCoreArchiveQuestEditorWidget()
{
	this->_gridLinesListVertical = TArray<FLinePair>();
	this->_gridLinesListHorizontal = TArray<FLinePair>();
	this->_activeNode = NULL;
	this->_pathInCreation = NULL;
	this->_isCreatingPath = false;
	this->EditorBorder = NULL;
	this->MoveNodesRadioCheckbox = NULL;
	this->LinkNodesRadioCheckbox = NULL;
	this->GridVisibilityCheckbox = NULL;
	this->SnapGridCheckbox = NULL;
	this->GridTileWidthInputPixelsTextBox = NULL;
	this->GridTileWidthInputPercentTextBox = NULL;
	this->GridTileHeightInputPixelsTextBox = NULL;
	this->GridTileHeightInputPercentTextBox = NULL;
	this->RefreshGridButton = NULL;
	this->NodeCoordinateContainer = NULL;
	this->NodeXInputPixels = NULL;
	this->NodeXInputPercent = NULL;
	this->NodeYInputPixels = NULL;
	this->NodeYInputPercent = NULL;
	this->SubmitButton = NULL;
	this->SaveQuestMapButton = NULL;
	this->SaveInfoContainer = NULL;
	this->PathTextBlock = NULL;
	this->GridTileHeightValuePercent = 0.000000;
	this->GridTileWidthValuePercent = 0.000000;
	this->IsSnapping = false;
	this->IsGridVisible = false;
	this->Mode = EEditorMode::Node;
}
