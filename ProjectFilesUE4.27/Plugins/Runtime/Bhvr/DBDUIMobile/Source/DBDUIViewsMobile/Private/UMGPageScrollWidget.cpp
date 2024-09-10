#include "UMGPageScrollWidget.h"

void UUMGPageScrollWidget::HandlePageButtonClicked(int32 pageIndex)
{

}

UUMGPageScrollWidget::UUMGPageScrollWidget()
{
	this->ItemWidth = 180.000000;
	this->ItemHeight = 180.000000;
	this->RowCount = 2;
	this->ColumnCount = 6;
	this->ItemGapDistance = 5;
	this->TotalPageCount = 1;
	this->ButtonWidth = 60.000000;
	this->OnPageChangeSound = NULL;
	this->ContainerPanel = NULL;
	this->ButtonsPanel = NULL;
	this->_pageButtonWidgetClass = NULL;
	this->_itemArray = TArray<UCanvasPanel*>();
	this->_currentPageIndex = 0;
	this->_activeWidgets = TArray<UMobileBaseUserWidget*>();
}
