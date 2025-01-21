#include "CharacterCustomizationPresetsList.h"

FCharacterCustomizationPresetsList::FCharacterCustomizationPresetsList()
{
	this->CharacterId = 0;
	this->ActivePreset = 0;
	this->Presets = TArray<FCharacterCustomizationPreset>();
}
