#include "CharacterSlideData.h"

FCharacterSlideData::FCharacterSlideData()
{
	this->DisplayName = TEXT("");
	this->Overview = TEXT("");
	this->Playstyle = TEXT("");
	this->Role = EPlayerRole::VE_None;
	this->ImageFilePath = TEXT("");
	this->SurvivorPerkCategories = TArray<EPerkCategory>();
	this->KillerPowerIconPath = TEXT("");
}
