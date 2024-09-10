#include "DailyRitualAnalytics.h"

FDailyRitualAnalytics::FDailyRitualAnalytics()
{
	this->Status = TEXT("");
	this->RitualId = TEXT("");
	this->HoursElapsed = 0.0f;
	this->Progress = 0;
	this->Threshold = 0;
	this->PendingRituals = 0;
	this->SpecificCharacter = 0;
}
