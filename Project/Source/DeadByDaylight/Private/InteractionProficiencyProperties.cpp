#include "InteractionProficiencyProperties.h"

FInteractionProficiencyProperties::FInteractionProficiencyProperties()
{
	this->ProficiencyID = NAME_None;
	this->ProficiencyBlueprint = NULL;
	this->BuffLevelThresholds = TArray<float>();
	this->DebuffLevelThresholds = TArray<float>();
	this->HasLevels = false;
	this->IconFilePath = TEXT("");
}
