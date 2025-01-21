#include "DailyRewardData.h"

FDailyRewardData::FDailyRewardData()
{
	this->RewardType = EAtlantaRewardType::Item;
	this->CurrencyAmount = 0;
	this->IconPath = TEXT("");
	this->ParentIconPath = TEXT("");
	this->ItemName = TEXT("");
	this->Index = 0;
	this->IsMarkedSpecial = false;
	this->ItemRarity = EItemRarity::Common;
	this->State = EUMGDailyRewardWidgetState::Unknown;
}
