#include "RefundUIData.h"

FRefundUIData::FRefundUIData()
{
	this->OriginalRewards = TArray<FAtlantaRewardUIData>();
	this->Refund = FAtlantaRewardUIData{};
	this->FragmentAmount = 0;
	this->FragmentRequiredAmount = 0;
}
