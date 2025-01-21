#include "ArchiveVignetteVideoAnalytics.h"

FArchiveVignetteVideoAnalytics::FArchiveVignetteVideoAnalytics()
{
	this->ArchiveId = TEXT("");
	this->VignetteId = TEXT("");
	this->VideoId = TEXT("");
	this->StartVideoTimestamp = TEXT("");
	this->VideoTimeSpent = 0.0;
	this->WasVideoWatchUntilEnd = false;
}
