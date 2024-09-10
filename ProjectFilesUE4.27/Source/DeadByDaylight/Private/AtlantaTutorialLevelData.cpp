#include "AtlantaTutorialLevelData.h"

FAtlantaTutorialLevelData::FAtlantaTutorialLevelData()
{
	this->ID = NAME_None;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->MapName = TEXT("");
	this->IsKillerTutorial = false;
}
