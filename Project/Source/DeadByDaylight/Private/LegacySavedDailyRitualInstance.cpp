#include "LegacySavedDailyRitualInstance.h"

FLegacySavedDailyRitualInstance::FLegacySavedDailyRitualInstance()
{
	this->RitualKey = NAME_None;
	this->CharacterIDs = TArray<int32>();
	this->Roles = TArray<EPlayerRole>();
	this->Progress = 0.0f;
	this->Threshold = 0.0f;
	this->Tolerance = 0.0f;
	this->DisplayThreshold = 0.0f;
	this->ExpReward = 0.0f;
	this->Active = false;
	this->Rewarded = false;
	this->StateChanged = false;
	this->DateAssigned = FDateTime{};
	this->NbGameElapsed = 0;
	this->TrackedEvents = TArray<EDBDScoreTypes>();
	this->TrackedGameEvents = TArray<FGameplayTag>();
}
