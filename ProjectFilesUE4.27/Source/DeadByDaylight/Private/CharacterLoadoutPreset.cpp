#include "CharacterLoadoutPreset.h"

FCharacterLoadoutPreset::FCharacterLoadoutPreset()
{
	this->PowerOrItem = NAME_None;
	this->AddOns = TArray<FName>();
	this->Perks = TArray<FName>();
	this->Favor = NAME_None;
}
