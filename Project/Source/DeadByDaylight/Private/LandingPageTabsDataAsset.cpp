#include "LandingPageTabsDataAsset.h"

ULandingPageTabsDataAsset::ULandingPageTabsDataAsset()
{
	this->BigButtonsData = TMap<EStorefrontState, FLandingPageTabData>();
	this->MediumButtonsData = TMap<EStorefrontState, FLandingPageTabData>();
	this->SmallButtonsData = TMap<EStorefrontState, FLandingPageTabData>();
}
