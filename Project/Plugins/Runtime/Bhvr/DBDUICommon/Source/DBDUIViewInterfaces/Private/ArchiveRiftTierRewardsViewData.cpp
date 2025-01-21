#include "ArchiveRiftTierRewardsViewData.h"

FArchiveRiftTierRewardsViewData::FArchiveRiftTierRewardsViewData()
{
	this->Tier = 0;
	this->TierType = ETierType::None;
	this->TierProgress = 0.0f;
	this->IsPremiumUnlocked = false;
	this->IsCurrentTier = false;
	this->FreeRewards = TArray<FRewardWrapperViewData>();
	this->PremiumRewards = TArray<FRewardWrapperViewData>();
}
