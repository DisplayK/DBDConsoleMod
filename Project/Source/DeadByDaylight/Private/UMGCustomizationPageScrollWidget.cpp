#include "UMGCustomizationPageScrollWidget.h"

void UUMGCustomizationPageScrollWidget::OnAvailableItemSelectedCallback(int32 itemIndex)
{

}

UUMGCustomizationPageScrollWidget::UUMGCustomizationPageScrollWidget()
{
	this->_customizationItemWidgetClass = NULL;
	this->_availableItemsData = TArray<FStoreItemSlotData>();
	this->_itemWidgets = TArray<UUMGCustomizationItemWidget*>();
}
