#include "ArchivesVignettes.h"

FArchivesVignettes::FArchivesVignettes()
{
	this->VignetteId = TEXT("");
	this->Title = FText::GetEmpty();
	this->Subtitle = FText::GetEmpty();
	this->Entries = TArray<FArchivesVignetteEntry>();
	this->CinematicPaths = TArray<TSoftObjectPtr<UMediaSource>>();
}
