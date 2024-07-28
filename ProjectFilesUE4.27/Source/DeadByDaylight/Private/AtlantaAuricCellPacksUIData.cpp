#include "AtlantaAuricCellPacksUIData.h"

FAtlantaAuricCellPacksUIData::FAtlantaAuricCellPacksUIData()
{
	this->CurrencyPurchaseData = TArray<FCurrencyPurchaseData>();
	this->FirstPurchaseBundleMultiplier = 0;
	this->FirstPurchaseBundleMultiplierEndDate = FDateTime{};
	this->IsSet = false;
}
