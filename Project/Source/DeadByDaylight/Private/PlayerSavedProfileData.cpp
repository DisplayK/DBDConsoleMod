#include "PlayerSavedProfileData.h"

FPlayerSavedProfileData::FPlayerSavedProfileData()
{
	this->PlayerUID = TEXT("");
	this->SharedData = FPlayerSavedProfileDataShared{};
	this->LocalData = FPlayerSavedProfileDataLocal{};
	this->ConsoleUserSettings = FConsoleUserSettings{};
}
