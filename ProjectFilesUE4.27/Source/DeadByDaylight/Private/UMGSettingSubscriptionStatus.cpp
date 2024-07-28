#include "UMGSettingSubscriptionStatus.h"

UUMGSettingSubscriptionStatus::UUMGSettingSubscriptionStatus() : UUserWidget(FObjectInitializer::Get())
{
	this->SubscriptionStatusText = FText::GetEmpty();
	this->StatusText = FText::GetEmpty();
	this->InactiveStatusText = FText::GetEmpty();
	this->EndText = FText::GetEmpty();
	this->TypeSwitcher = NULL;
	this->ActiveWidget = NULL;
	this->InactiveWidget = NULL;
	this->TitleText = NULL;
	this->DisplayName = NULL;
	this->Status = NULL;
	this->StatusInactive = NULL;
	this->End = NULL;
	this->EndDate = NULL;
}
