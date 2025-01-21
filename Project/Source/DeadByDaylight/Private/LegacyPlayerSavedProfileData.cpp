#include "LegacyPlayerSavedProfileData.h"

FLegacyPlayerSavedProfileData::FLegacyPlayerSavedProfileData()
{
	this->PlayerUID = TEXT("");
	this->SharedData = FLegacyPlayerSavedProfileDataShared{};
	this->LocalData = FLegacyPlayerSavedProfileDataLocal{};
}
