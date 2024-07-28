#include "ArchivesPastTomeViewData.h"

FArchivesPastTomeViewData::FArchivesPastTomeViewData()
{
	this->TomeId = TEXT("");
	this->TomeTitle = FText::GetEmpty();
	this->HasActiveNode = false;
	this->VolumeIndex = 0;
	this->TomeLevels = TArray<UArchiveStoryLevelViewData*>();
	this->StoryBookMarkTexture = NULL;
}
