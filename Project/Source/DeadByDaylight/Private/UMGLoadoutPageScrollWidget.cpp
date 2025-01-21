#include "UMGLoadoutPageScrollWidget.h"
#include "EInventoryGridFormat.h"
#include "InventorySlotData.h"

void UUMGLoadoutPageScrollWidget::SetInventoryData(EInventoryGridFormat gridFormat, const TArray<FInventorySlotData>& inventoryData, const TArray<int32>& selectedItemsIndexes, const FString& trackingItemName, const FString& subtitle)
{

}

void UUMGLoadoutPageScrollWidget::HandleItemClicked(FName itemID)
{

}

UUMGLoadoutPageScrollWidget::UUMGLoadoutPageScrollWidget()
{
	this->ShouldResizeWidget = true;
	this->_itemWidgetClass = NULL;
	this->_gridFormat = EInventoryGridFormat::DEFAULT;
	this->_inventoryData = TArray<FInventorySlotData>();
	this->_inventorySelectedItemIndexes = TArray<int32>();
	this->_subtitle = TEXT("");
}
