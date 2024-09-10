#include "ArchiveVignetteEntryAnalytics.h"

FArchiveVignetteEntryAnalytics::FArchiveVignetteEntryAnalytics()
{
	this->ArchiveId = TEXT("");
	this->VignetteId = TEXT("");
	this->EntryId = 0;
	this->SelectEntryTimestamp = TEXT("");
	this->EntryTimeSpent = 0.0;
	this->IsTaggedAsNew = false;
	this->HasVoiceOver = false;
	this->StartWithAutoplayEnable = false;
	this->IsAutoplayEnableWhenDeselectingEntry = false;
	this->StartVoiceoverTimestamp = TEXT("");
	this->VoiceoverLongestTimeSpent = 0.0;
}
