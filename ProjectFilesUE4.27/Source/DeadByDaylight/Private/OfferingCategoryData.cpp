#include "OfferingCategoryData.h"

FOfferingCategoryData::FOfferingCategoryData()
{
	this->OfferingCategory = EOfferingCategory::None;
	this->Role = TArray<EPlayerRole>();
	this->UIData = FItemUIData{};
}
