#include "Gameplay_SurvivorAnalytics.h"

FGameplay_SurvivorAnalytics::FGameplay_SurvivorAnalytics()
{
	this->MatchId = TEXT("");
	this->Speed = 0.0f;
	this->InjuredSpeed = 0.0f;
	this->InjuredDuration = 0.0f;
	this->HealthyDuration = 0.0f;
	this->KODuration = 0.0f;
	this->PalletSpawned = 0;
	this->PalletProcedural = 0;
	this->PalletProceduralSetCount = 0;
	this->PalletGenerationId = 0;
	this->PalletGeneric = 0;
	this->PalletDrop = 0;
	this->PalletStun = 0;
	this->UnhookCount = 0;
	this->HealCount = 0;
	this->HealCountSuccess = 0;
	this->ClosetEnter = 0;
	this->Hatch = 0;
	this->SkillCheckCount = 0;
	this->SkillCheckCountGood = 0;
	this->SkillCheckCountGreat = 0;
	this->ChaseDuration = 0.0f;
	this->NumChases = 0;
	this->HitBySlasherCount = 0;
	this->AmountTilesVisited = 0;
	this->StartX = 0.0f;
	this->StartY = 0.0f;
	this->StartZ = 0.0f;
	this->EmotePoint = 0;
	this->EmoteCome = 0;
	this->CrouchingDuration = 0.0f;
	this->CrouchingCount = 0;
	this->CrawlingDuration = 0.0f;
}
