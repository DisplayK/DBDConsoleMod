#include "CompendiumButtonData.h"

FCompendiumButtonData::FCompendiumButtonData()
{
	this->TomeId = TEXT("");
	this->TomeTitle = FText::GetEmpty();
	this->IsMastered = false;
	this->IsActive = false;
	this->VolumeIndex = 0;
	this->TomeLevels = TArray<UArchiveStoryLevelViewData*>();
	this->StoryBookMarkTexture = NULL;
}
