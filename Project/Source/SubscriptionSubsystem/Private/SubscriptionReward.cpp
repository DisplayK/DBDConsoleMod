#include "SubscriptionReward.h"

FSubscriptionReward::FSubscriptionReward()
{
	this->Rewards = TArray<FRewardItem>();
	this->NextClaimTime = FDateTime{};
	this->AnalyticsEventId = TEXT("");
}
