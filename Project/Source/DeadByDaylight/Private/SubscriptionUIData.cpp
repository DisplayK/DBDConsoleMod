#include "SubscriptionUIData.h"

FSubscriptionUIData::FSubscriptionUIData()
{
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->PlatformDetails = TMap<FName, FText>();
	this->TitleTexture = NULL;
	this->PortraitBorderTexture = NULL;
}
