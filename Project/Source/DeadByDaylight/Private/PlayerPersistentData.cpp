#include "PlayerPersistentData.h"

FPlayerPersistentData::FPlayerPersistentData()
{
	this->GameRole = EPlayerRole::VE_None;
	this->StartingLoadout = FPlayerLoadoutData{};
	this->CurrentLoadout = FPlayerLoadoutData{};
	this->SavedData = FPlayerSavedProfileData{};
	this->PlayerPlatform = EPlatformFlag::None;
	this->PlayerProvider = EProviderFlag::None;
}
