#include "StoreBannersData.h"

FStoreBannersData::FStoreBannersData()
{
	this->BannerId = NAME_None;
	this->BannerData = FStoreFeaturedBannerData{};
	this->UseAsDefault = false;
	this->DefaultLocation = EStoreBannerLocation::Primary;
}
