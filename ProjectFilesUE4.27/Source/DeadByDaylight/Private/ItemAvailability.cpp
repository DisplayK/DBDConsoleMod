#include "ItemAvailability.h"

FItemAvailability::FItemAvailability()
{
	this->itemAvailability = EItemAvailability::Available;
	this->DLCId = TEXT("");
	this->CloudInventoryId = 0;
	this->CommunityId = TEXT("");
}
