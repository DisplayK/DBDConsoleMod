#include "Gameplay_PigSurvivorAnalytics.h"

FGameplay_PigSurvivorAnalytics::FGameplay_PigSurvivorAnalytics()
{
	this->MatchId = TEXT("");
	this->RbtAttachedCount = 0;
	this->ActivatedRbtTimerCount = 0;
	this->RbtSuccessSearchCount = 0;
	this->RbtFailedSearchCount = 0;
	this->RbtDisabledPreActivation = 0;
	this->RbtDisabledPostActivation = 0;
	this->RbtChaseDuration = 0.0f;
	this->RbtAverageTimeLeftBeforeDisable = 0.0f;
	this->RbtDuration = 0.0f;
}
