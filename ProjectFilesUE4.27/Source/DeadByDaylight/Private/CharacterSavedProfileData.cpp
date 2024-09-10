#include "CharacterSavedProfileData.h"

FCharacterSavedProfileData::FCharacterSavedProfileData()
{
	this->BloodWebLevel = 0;
	this->TimesConfronted = 0;
	this->PrestigeEarnedDates = TArray<FDateTime>();
	this->BloodWebData = FBloodWebPersistentData{};
	this->CharacterLoadoutData = FPlayerLoadoutData{};
	this->CurrentCustomization = FEquippedPlayerCustomization{};
	this->UniquePerksAdded = TArray<FName>();
	this->CharacterBloodwebMigrationIsDone = false;
	this->InventoryData = TArray<FCharacterSavedInventoryData>();
	this->CharacterLevelData = TArray<FSavedCharacterLevelData>();
	this->StatProgression = TArray<FSavedStatsData>();
	this->PrestigeLevel = 0;
	this->LegacyPrestigeLevel = 0;
	this->CharacterExperience = 0;
}
