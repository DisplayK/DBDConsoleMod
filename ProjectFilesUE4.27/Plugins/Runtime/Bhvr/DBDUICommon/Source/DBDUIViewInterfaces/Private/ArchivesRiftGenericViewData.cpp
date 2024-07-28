#include "ArchivesRiftGenericViewData.h"

FArchivesRiftGenericViewData::FArchivesRiftGenericViewData()
{
	this->EndDate = FDateTime{};
	this->CurrentTier = 0;
	this->MaxTier = 0;
	this->CurrentStars = 0;
	this->StarsPerTiers = 0;
	this->OwnPass = false;
	this->ShowBonusTierTooltip = false;
}
