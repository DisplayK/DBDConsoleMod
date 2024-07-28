#include "UMGCustomizationItemWidget.h"

void UUMGCustomizationItemWidget::BroadcastAvailableItemSelected()
{

}

UUMGCustomizationItemWidget::UUMGCustomizationItemWidget()
{
	this->RarityBackground = NULL;
	this->PaintOverlay = NULL;
	this->Icon = NULL;
	this->NewIndicator = NULL;
	this->OutfitIndicator = NULL;
	this->PricesContainer = NULL;
	this->ItemSelectedBorder = NULL;
	this->EquippedContainer = NULL;
	this->_customizationItemPriceWidgetClass = NULL;
	this->_priceWidgets = TArray<UUMGCustomizationItemPriceWidget*>();
	this->_itemIndex = -1;
	this->_itemId = NAME_None;
}
