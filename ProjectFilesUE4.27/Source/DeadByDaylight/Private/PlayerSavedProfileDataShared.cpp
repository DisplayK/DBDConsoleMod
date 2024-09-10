#include "PlayerSavedProfileDataShared.h"

FPlayerSavedProfileDataShared::FPlayerSavedProfileDataShared()
{
	this->PlayerName = TEXT("");
	this->SelectedCamperIndex = 0;
	this->SelectedSlasherIndex = 0;
	this->SelectedCharacterCustomization = FEquippedPlayerCustomization{};
	this->CamperStreak = 0;
	this->ShowPortraitBorder = false;
	this->HasActiveSubscription = false;
	this->PlatformId = TEXT("");
}
