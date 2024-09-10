#include "SpecialEventsData.h"

FSpecialEventsData::FSpecialEventsData()
{
	this->EventId = TEXT("");
	this->MiscRewards = TArray<FSPecialEventMiscRewards>();
	this->MiscRewards_IsSet = false;
	this->OwnerRewards = TArray<FRewardResponseItem>();
	this->OwnerRewards_IsSet = false;
	this->ScoreEventRewards = TArray<FScoreEventRewards>();
	this->ScoreEventRewards_IsSet = false;
}
