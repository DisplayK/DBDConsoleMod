#include "LegacyCharacterSavedProfileData.h"

FLegacyCharacterSavedProfileData::FLegacyCharacterSavedProfileData()
{
	this->VersionNumber = 0;
	this->BloodPoints = 0;
	this->BloodWebLevel = 0;
	this->PrestigeLevel = 0;
	this->TimesConfronted = 0;
	this->PrestigeDates = TArray<FDateTime>();
	this->BloodWebData = FLegacySavedBloodWebPersistentData{};
	this->CharacterLoadoutData = FLegacySavedPlayerLoadoutData{};
	this->Inventory = TArray<FName>();
	this->InventoryData = TArray<FLegacyCharacterSavedInventoryData>();
	this->CurrentCustomization = TArray<FName>();
}
