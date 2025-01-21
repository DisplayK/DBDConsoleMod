#include "ArchivesVignetteEntryViewData.h"

FArchivesVignetteEntryViewData::FArchivesVignetteEntryViewData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IsRead = false;
	this->HasAudio = false;
}
