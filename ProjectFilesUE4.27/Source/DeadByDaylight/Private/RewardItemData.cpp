#include "RewardItemData.h"

FRewardItemData::FRewardItemData()
{
	this->IconPath = TEXT("");
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->Rarity = EItemRarity::Common;
	this->ItemType = EInventoryItemType::None;
	this->IsDuplicate = false;
	this->CurrencyType = ECurrencyType::None;
	this->CurrencyAmount = 0;
}
