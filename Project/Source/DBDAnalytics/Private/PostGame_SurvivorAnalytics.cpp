#include "PostGame_SurvivorAnalytics.h"

FPostGame_SurvivorAnalytics::FPostGame_SurvivorAnalytics()
{
	this->Objectives = 0;
	this->Survival = 0;
	this->Altruism = 0;
	this->Boldness = 0;
	this->ObjectivesBonus = 0;
	this->SurvivalBonus = 0;
	this->AltruismBonus = 0;
	this->BoldnessBonus = 0;
	this->BonusEvent = 0;
	this->MatchIncentive = 0;
	this->TotalBloodpointsPostGame = 0;
	this->Outcome = TEXT("");
	this->DamageState = ECamperDamageState::VE_Healthy;
	this->HookedCount = 0;
	this->UsedController = false;
	this->UsedKeyboard = false;
	this->UsedHapticsVibration = false;
}
