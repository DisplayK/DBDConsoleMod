#include "UMGCustomizationItemBuyButton.h"

void UUMGCustomizationItemBuyButton::BroadcastUnlockWithCurrency()
{

}

UUMGCustomizationItemBuyButton::UUMGCustomizationItemBuyButton()
{
	this->CurrencyColorStripe = NULL;
	this->_currencyStripeColors = TMap<ECurrencyType, FColor>();
}
