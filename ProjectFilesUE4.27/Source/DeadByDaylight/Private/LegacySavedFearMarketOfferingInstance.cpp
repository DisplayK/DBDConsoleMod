#include "LegacySavedFearMarketOfferingInstance.h"

FLegacySavedFearMarketOfferingInstance::FLegacySavedFearMarketOfferingInstance()
{
	this->ObjectsForSale = TArray<FLegacySavedFearMarketItemInstance>();
	this->StartTime = FDateTime{};
	this->EndTime = FDateTime{};
}
