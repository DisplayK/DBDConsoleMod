#include "LandingPageTabData.h"

FLandingPageTabData::FLandingPageTabData()
{
	this->DefaultText = FText::GetEmpty();
	this->DefaultImage = NULL;
	this->BannerBackgroudColor = FSlateColor{};
	this->IsButtonEnabled = false;
}
