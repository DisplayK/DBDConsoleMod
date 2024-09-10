#include "DBDCustomizationToolData.h"

FDBDCustomizationToolData::FDBDCustomizationToolData()
{
	this->Head = FCustomizationItemData{};
	this->Torso = FCustomizationItemData{};
	this->Leg = FCustomizationItemData{};
	this->Bodies = FCustomizationItemData{};
	this->CharacterName = TEXT("");
	this->RoleName = TEXT("");
	this->BaseSkeleton = NULL;
	this->MaskTexture = NULL;
	this->AnimationToPlay = NULL;
	this->StrHeadDLC = TEXT("");
	this->StrTorsoDLC = TEXT("");
	this->StrLegDLC = TEXT("");
	this->StrBodiesDLC = TEXT("");
}
