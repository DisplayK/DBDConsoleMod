#include "CurrencyPurchaseData.h"

FCurrencyPurchaseData::FCurrencyPurchaseData()
{
	this->IconPath = TEXT("");
	this->CurrencyName = TEXT("");
	this->CurrencyIcon = TEXT("");
	this->CurrencyAmount = 0;
	this->DisplayedPrice = TEXT("");
	this->BonusPercentage = 0.0f;
	this->BonusEndDate = FDateTime{};
	this->BasicCurrencyAmount = 0;
}
