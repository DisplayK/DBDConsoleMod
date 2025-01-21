#include "TutorialObjectivesViewData.h"

FTutorialObjectivesViewData::FTutorialObjectivesViewData()
{
	this->Description = TEXT("");
	this->PrimaryInteractionPromptViewData = FInteractionPromptViewData{};
	this->SecondaryInteractionPromptViewData = FInteractionPromptViewData{};
}
