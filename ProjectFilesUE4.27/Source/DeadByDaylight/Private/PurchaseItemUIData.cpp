#include "PurchaseItemUIData.h"

FPurchaseItemUIData::FPurchaseItemUIData()
{
	this->ItemId = NAME_None;
	this->DisplayName = FText::GetEmpty();
	this->Quantity = 0;
	this->IconPath = TEXT("");
	this->ContentType = EEventItemContentType::None;
	this->Rarity = EItemRarity::Common;
}
