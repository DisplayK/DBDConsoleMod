#include "Gameplay_ChaseAnalytics.h"

FGameplay_ChaseAnalytics::FGameplay_ChaseAnalytics()
{
	this->MatchId = TEXT("");
	this->IsABot = false;
	this->MirrorsIdSurvivor = TEXT("");
	this->CoordXStartKiller = 0.0f;
	this->CoordYStartKiller = 0.0f;
	this->CoordZStartKiller = 0.0f;
	this->CoordXEndKiller = 0.0f;
	this->CoordYEndKiller = 0.0f;
	this->CoordZEndKiller = 0.0f;
	this->PalletsDestroyedByKiller = 0;
	this->WindowsVaultedByKiller = 0;
	this->PalletsVaultedByKiller = 0;
	this->BasicAttackSwingsByKiller = 0;
	this->BasicAttackHitsByKiller = 0;
	this->SpecialAttackAttemptsByKiller = 0;
	this->SpecialAttackHitsByKiller = 0;
	this->DistanceCoveredKiller = 0.0f;
	this->CoordXStartSurvivor = 0.0f;
	this->CoordYStartSurvivor = 0.0f;
	this->CoordZStartSurvivor = 0.0f;
	this->CoordXEndSurvivor = 0.0f;
	this->CoordYEndSurvivor = 0.0f;
	this->CoordZEndSurvivor = 0.0f;
	this->PalletsDroppedBySurvivor = 0;
	this->PalletsStunnedBySurvivor = 0;
	this->WindowsVaultedBySurvivor = 0;
	this->PalletsVaultedBySurvivor = 0;
	this->StartingHealthOfSurvivor = 0;
	this->EndingHealthOfSurvivor = 0;
	this->AmountHealedOfSurvivor = 0;
	this->StartingTileSurvivor = TEXT("");
	this->EndingTileSurvivor = TEXT("");
	this->AmountOfTilesVisitedSurvivor = 0;
	this->TilesVisitedSurvivor = TArray<FString>();
	this->DistanceCoveredSurvivor = 0.0f;
	this->DisplacementSurvivor = 0.0f;
	this->ChaseStartTimeInSecond = 0.0f;
	this->ChaseEndTimeInSecond = 0.0f;
}
