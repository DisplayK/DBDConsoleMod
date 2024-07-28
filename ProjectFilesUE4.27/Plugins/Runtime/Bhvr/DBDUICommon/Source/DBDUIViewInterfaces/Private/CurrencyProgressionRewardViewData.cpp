#include "CurrencyProgressionRewardViewData.h"

FCurrencyProgressionRewardViewData::FCurrencyProgressionRewardViewData()
{
	this->CurrencyType = ECurrencyType::None;
	this->ProgressionType = EProgressionType::None;
	this->Amount = 0;
	this->RewardBackgroundMaterial = NULL;
	this->RewardIcon = NULL;
	this->TooltipData = FCurrencyProgressionTooltipViewData{};
}
