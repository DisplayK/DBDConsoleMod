#include "ArchivesVignetteViewData.h"

FArchivesVignetteViewData::FArchivesVignetteViewData()
{
	this->VignetteId = TEXT("");
	this->Title = FText::GetEmpty();
	this->Subtitle = FText::GetEmpty();
	this->LastShownProgressValue = 0;
	this->CurrentProgress = 0;
	this->MaxProgress = 0;
	this->CinematicsNumber = 0;
	this->Entries = TArray<FArchivesVignetteEntryViewData>();
}
