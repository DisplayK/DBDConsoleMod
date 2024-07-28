#include "CharacterLoadoutPresetsList.h"

FCharacterLoadoutPresetsList::FCharacterLoadoutPresetsList()
{
	this->CharacterId = 0;
	this->ActivePreset = 0;
	this->Presets = TArray<FCharacterLoadoutPreset>();
}
