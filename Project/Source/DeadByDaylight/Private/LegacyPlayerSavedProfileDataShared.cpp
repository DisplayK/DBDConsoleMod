#include "LegacyPlayerSavedProfileDataShared.h"

FLegacyPlayerSavedProfileDataShared::FLegacyPlayerSavedProfileDataShared()
{
	this->PlayerName = TEXT("");
	this->SelectedCamperIndex = 0;
	this->SelectedSlasherIndex = 0;
	this->SelectedCharacterCustomization = TArray<FName>();
	this->SlasherSkulls = 0;
	this->CamperSkulls = 0;
	this->CamperStreak = 0;
}
