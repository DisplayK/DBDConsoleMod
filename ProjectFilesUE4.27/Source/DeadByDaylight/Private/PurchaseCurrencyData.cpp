#include "PurchaseCurrencyData.h"

FPurchaseCurrencyData::FPurchaseCurrencyData()
{
	this->CurrencyType = ECurrencyType::None;
	this->Price = 0;
	this->DiscountPercentage = 0.0f;
	this->IsAffordable = false;
}
