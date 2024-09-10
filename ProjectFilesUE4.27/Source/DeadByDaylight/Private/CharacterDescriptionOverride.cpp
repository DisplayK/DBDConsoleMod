#include "CharacterDescriptionOverride.h"

FCharacterDescriptionOverride::FCharacterDescriptionOverride()
{
	this->RequiredItemIds = TArray<FName>();
	this->DisplayNameOverride = FText::GetEmpty();
	this->HudIconOverride = NULL;
	this->MenuBlueprint = NULL;
	this->GameBlueprint = NULL;
	this->IconFilePathOverride = NAME_None;
}
