#include "EventEntryPopupViewData.h"

UEventEntryPopupViewData::UEventEntryPopupViewData()
{
	this->AvailabilityDates = FText::GetEmpty();
	this->EventFrameLabel = FText::GetEmpty();
	this->ImageBannerText = FText::GetEmpty();
	this->ImageTexture = NULL;
	this->ShouldShowEventTomeButton = false;
}
