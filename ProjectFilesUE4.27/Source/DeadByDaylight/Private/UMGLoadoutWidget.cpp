#include "UMGLoadoutWidget.h"

UUMGLoadoutWidget::UUMGLoadoutWidget()
{
	this->InventoryItemTypeText = FText::GetEmpty();
	this->InventoryFilterText = FText::GetEmpty();
	this->PageScrollWidget = NULL;
	this->LoadoutTitleText = FText::GetEmpty();
	this->InventoryPanelTitleText = FText::GetEmpty();
}
