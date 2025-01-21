#include "AtlantaBaseEventsUIData.h"

FAtlantaBaseEventsUIData::FAtlantaBaseEventsUIData()
{
	this->EventId = TEXT("");
	this->Type = TEXT("");
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->CampaignName = TEXT("");
	this->Image = NULL;
	this->EventPriority = 0;
	this->BannerPriority = 0;
	this->DeepLink = TEXT("");
	this->StartDate = FDateTime{};
	this->EndDate = FDateTime{};
	this->DisplayStartDate = FDateTime{};
	this->DisplayEndDate = FDateTime{};
	this->BannerStartDate = FDateTime{};
	this->BannerEndDate = FDateTime{};
	this->HotStartDate = FDateTime{};
	this->HotEndDate = FDateTime{};
	this->NewStartDate = FDateTime{};
	this->NewEndDate = FDateTime{};
	this->RelatedItemsId = TArray<FString>();
	this->mustHideParticipateButton = false;
}
