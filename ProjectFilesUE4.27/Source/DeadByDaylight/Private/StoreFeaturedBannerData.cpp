#include "StoreFeaturedBannerData.h"

FStoreFeaturedBannerData::FStoreFeaturedBannerData()
{
	this->Title = FText::GetEmpty();
	this->Subtitle = FText::GetEmpty();
	this->ImagePath = TEXT("");
	this->AssociatedDlcId = TEXT("");
	this->AssociatedCombinedItemId = TEXT("");
	this->AssociatedCombinedOutfitId = TEXT("");
	this->TextPosition = ETextBannerPosition::TopLeft;
}
