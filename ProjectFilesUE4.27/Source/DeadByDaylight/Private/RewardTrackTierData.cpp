#include "RewardTrackTierData.h"

FRewardTrackTierData::FRewardTrackTierData()
{
	this->TierId = 0;
	this->TierGroup = 0;
	this->Free = TArray<FRewardResponseItem>();
	this->Free_IsSet = false;
	this->Premium = TArray<FRewardResponseItem>();
	this->Premium_IsSet = false;
}
