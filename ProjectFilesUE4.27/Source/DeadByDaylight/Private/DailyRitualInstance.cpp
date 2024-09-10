#include "DailyRitualInstance.h"

FDailyRitualInstance::FDailyRitualInstance()
{
	this->RitualId = TEXT("");
	this->TrackedEvents = TArray<EDBDScoreTypes>();
	this->TrackedGameEvents = TArray<FGameplayTag>();
	this->CharacterIDs = TArray<int32>();
	this->Roles = TArray<EPlayerRole>();
	this->Progress = 0.0f;
	this->Threshold = 0.0f;
	this->Tolerance = 0.0f;
	this->DisplayThreshold = 0.0f;
	this->ExpReward = 0.0f;
	this->Active = false;
	this->IsTemporary = false;
	this->DateAssigned = FDateTime{};
	this->Evaluator = NULL;
}
