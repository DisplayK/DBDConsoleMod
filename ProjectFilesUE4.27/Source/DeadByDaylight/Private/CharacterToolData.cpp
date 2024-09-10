#include "CharacterToolData.h"

FCharacterToolData::FCharacterToolData()
{
	this->Role = EPlayerRole::VE_None;
	this->CharacterId = 0;
	this->OutfitId = NAME_None;
	this->CharmId = NAME_None;
	this->SurvivorHead = NAME_None;
	this->SurvivorTorso = NAME_None;
	this->SurvivorLegs = NAME_None;
	this->KillerHead = NAME_None;
	this->KillerBody = NAME_None;
	this->KillerWeapon = NAME_None;
	this->IsAnimBP = false;
	this->AnimAsset = TEXT("");
}
