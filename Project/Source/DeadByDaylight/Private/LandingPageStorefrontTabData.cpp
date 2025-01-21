#include "LandingPageStorefrontTabData.h"

FLandingPageStorefrontTabData::FLandingPageStorefrontTabData()
{
	this->Type = TEXT("");
	this->NewStartDate = FDateTime{};
	this->NewEndDate = FDateTime{};
	this->Image = NULL;
	this->Title = FText::GetEmpty();
	this->TagText = FText::GetEmpty();
}
