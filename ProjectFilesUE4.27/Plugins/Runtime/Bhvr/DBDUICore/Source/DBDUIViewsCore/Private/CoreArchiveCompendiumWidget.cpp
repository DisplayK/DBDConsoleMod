#include "CoreArchiveCompendiumWidget.h"

class UGridSlot;
class UCoreButtonWidget;
class UCoreArchiveCompendiumButtonWidget;

void UCoreArchiveCompendiumWidget::SetGridSlot(UGridSlot* gridSlot, int32 index)
{

}

void UCoreArchiveCompendiumWidget::ResetScroll()
{

}

void UCoreArchiveCompendiumWidget::Reset()
{

}

void UCoreArchiveCompendiumWidget::OnPastStoryClicked(UCoreButtonWidget* button)
{

}

void UCoreArchiveCompendiumWidget::CreateGhostStories(const int32 currentStoryNum)
{

}

UCoreArchiveCompendiumButtonWidget* UCoreArchiveCompendiumWidget::CreateAndAddButtonToGrid(int32 index)
{
	return NULL;
}

UCoreArchiveCompendiumWidget::UCoreArchiveCompendiumWidget()
{
	this->_compendiumButtonWidgetClass = NULL;
	this->CompendiumGrid = NULL;
	this->CompendiumScroll = NULL;
	this->_cellsPerRow = 5;
	this->_compendiumButtonWidgetPool = TArray<UCoreArchiveCompendiumButtonWidget*>();
	this->_compendiumButtonWidgetList = TArray<UCoreArchiveCompendiumButtonWidget*>();
}
