#include "CampaignStatus.h"

FCampaignStatus::FCampaignStatus()
{
	this->IsValid = false;
	this->StartDate = FDateTime{};
	this->EndDate = FDateTime{};
}
