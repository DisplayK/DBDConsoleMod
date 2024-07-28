#include "UMGCustomizationItemPriceWidget.h"

UUMGCustomizationItemPriceWidget::UUMGCustomizationItemPriceWidget()
{
	this->CurrencyValue = NULL;
	this->DiscountPercentageContainer = NULL;
	this->DiscountPercentage = NULL;
	this->CurrencyIcon = NULL;
	this->CurrencyTextures = TMap<ECurrencyType, TSoftObjectPtr<UTexture2D>>();
	this->_itemId = TEXT("");
	this->_currencyType = ECurrencyType::None;
	this->_hasDiscountPercentage = false;
}
