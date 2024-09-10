#include "SubscriptionRewardDataAsset.h"

USubscriptionRewardDataAsset::USubscriptionRewardDataAsset()
{
	this->Data = TMap<ESubscriptionRewardType, FSubscriptionRewardTypeData>();
}
