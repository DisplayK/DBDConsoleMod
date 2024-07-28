#include "CharacterCustomizationPreset.h"

FCharacterCustomizationPreset::FCharacterCustomizationPreset()
{
	this->Head = NAME_None;
	this->TorsoOrBody = NAME_None;
	this->LegsOrWeapon = NAME_None;
	this->Charms = TArray<FCharmIdSlot>();
}
