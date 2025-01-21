#include "RewardWrapperViewData.h"

FRewardWrapperViewData::FRewardWrapperViewData()
{
	this->RewardType = ERewardType::None;
	this->CharacterRewardViewData = FCharacterRewardViewData{};
	this->CurrencyProgressionRewardViewData = FCurrencyProgressionRewardViewData{};
	this->CustomizationRewardViewData = FCustomizationRewardViewData{};
}
