#include "SubscriptionRewardMap.h"

FSubscriptionRewardMap::FSubscriptionRewardMap()
{
	this->RewardsByClaimType = TMap<ESubscriptionClaimType, FSubscriptionReward>();
}
