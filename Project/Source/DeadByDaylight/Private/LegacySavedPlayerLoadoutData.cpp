#include "LegacySavedPlayerLoadoutData.h"

FLegacySavedPlayerLoadoutData::FLegacySavedPlayerLoadoutData()
{
	this->Item = NAME_None;
	this->ItemAddOns = TArray<FName>();
	this->CamperPerks = TArray<FName>();
	this->CamperPerkLevels = TArray<int32>();
	this->CamperFavor = NAME_None;
	this->Power = NAME_None;
	this->PowerAddOns = TArray<FName>();
	this->SlasherPerks = TArray<FName>();
	this->SlasherPerkLevels = TArray<int32>();
	this->SlasherFavor = NAME_None;
}
