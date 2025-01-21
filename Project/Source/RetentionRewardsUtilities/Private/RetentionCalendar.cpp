#include "RetentionCalendar.h"

FRetentionCalendar::FRetentionCalendar()
{
	this->Id = TEXT("");
	this->StartTime = FDateTime{};
	this->EndTime = FDateTime{};
	this->ClaimType = EClaimType::Minute;
	this->Rewards = TArray<FRetentionReward>();
}
