#include "HookAnalytics.h"

FHookAnalytics::FHookAnalytics()
{
	this->HookStartTime = 0.0f;
	this->MirrorsIdSurvivor = TEXT("");
	this->SurvivorIsABot = 0;
	this->MirrorsIdKiller = TEXT("");
	this->KillerIsABot = 0;
	this->MirrorsIdRescuer = TEXT("");
	this->RescuerIsABot = 0;
	this->TimesOnHook = 0;
	this->Outcome = TEXT("");
	this->HookDuration = 0.0f;
	this->EscapeAttemptStart = 0;
	this->EscapeAttemptFull = 0;
	this->SurvivorsRemaining = 0;
	this->NumberOfActiveSurvivorsStart = 0;
	this->NumberOfActiveSurvivorsEnd = 0;
	this->NumberOfActiveSurvivorsTotal = 0;
	this->DurationCampFace = 0.0f;
	this->DurationCampHard = 0.0f;
	this->DurationCampSoft = 0.0f;
	this->NumberOfRescuers = 0;
	this->TimeForFirstRescuer = 0.0f;
	this->MatchId = TEXT("");
	this->ReverseBearTrapOn = false;
}
