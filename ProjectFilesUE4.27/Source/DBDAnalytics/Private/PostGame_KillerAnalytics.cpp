#include "PostGame_KillerAnalytics.h"

FPostGame_KillerAnalytics::FPostGame_KillerAnalytics()
{
	this->Brutality = 0;
	this->Deviousness = 0;
	this->Hunter = 0;
	this->Sacrifice = 0;
	this->BrutalityBonus = 0;
	this->DeviousnessBonus = 0;
	this->HunterBonus = 0;
	this->SacrificeBonus = 0;
	this->BonusEvent = 0;
	this->MatchIncentive = 0;
	this->TotalBloodpointsPostGame = 0;
	this->EscapeesCount = 0;
	this->SacrificedCount = 0;
	this->KilledCount = 0;
	this->DisconnectCount = 0;
	this->BotCount = 0;
	this->TimeOpenGate = 0;
	this->SurvivorSpawningPosition = TEXT("");
	this->GeneratorsDone = 0;
	this->EGS_starter = TEXT("");
	this->EGS_time = 0.0f;
	this->EGS_duration = 0.0f;
	this->EGS_sacrifice = 0;
	this->EGS_reachEnd = false;
	this->UsedController = false;
	this->UsedKeyboard = false;
	this->UsedHapticsVibration = false;
}
