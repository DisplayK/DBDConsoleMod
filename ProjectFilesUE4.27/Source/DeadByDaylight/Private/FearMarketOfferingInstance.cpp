#include "FearMarketOfferingInstance.h"

FFearMarketOfferingInstance::FFearMarketOfferingInstance()
{
	this->ObjectsForSale = TArray<FFearMarketItemInstance>();
	this->StartTime = FDateTime{};
	this->EndTime = FDateTime{};
}
