#include "AtlantaRewardUIData.h"

FAtlantaRewardUIData::FAtlantaRewardUIData()
{
	this->Id = NAME_None;
	this->Type = EAtlantaRewardType::Item;
	this->Quantity = 0;
	this->IconFilePath = TEXT("");
	this->Currency = ECurrencyType::None;
	this->Rarity = EItemRarity::Common;
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
}
