#include "AtlantaRitualInstance.h"

FAtlantaRitualInstance::FAtlantaRitualInstance()
{
	this->RitualKey = NAME_None;
	this->CharacterId = 0;
	this->Role = EPlayerRole::VE_None;
	this->TrackedEvents = TArray<EDBDScoreTypes>();
	this->TrackedGameEvents = TArray<FString>();
	this->Evaluator = NULL;
	this->Difficulty = FAtlantaRitualDifficulty{};
	this->Progress = 0.0f;
	this->Active = false;
	this->ExpiryDate = FDateTime{};
}
