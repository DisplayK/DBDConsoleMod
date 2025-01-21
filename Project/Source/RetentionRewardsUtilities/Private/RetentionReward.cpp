#include "RetentionReward.h"

FRetentionReward::FRetentionReward()
{
	this->ItemId = TEXT("");
	this->Amount = 0;
	this->RewardType = ERewardItemType::None;
	this->GameSpecificData = TMap<FName, FString>();
}
