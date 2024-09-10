#include "DisconnectionDetailsAnalytics.h"

FDisconnectionDetailsAnalytics::FDisconnectionDetailsAnalytics()
{
	this->PlayerPlatform = TEXT("");
	this->MatchId = TEXT("");
	this->InGameTime = 0;
	this->Role = EPlayerRole::VE_None;
	this->Reason = TEXT("");
	this->Health = EHealthStatus::Healthy;
	this->CharacterStatus = TArray<ECharacterStatus>();
	this->GeneratorActivated = 0;
	this->HatchStatus = EHatchStatus::Hidden;
	this->DoorStatus = EDoorStatus::Closed;
	this->DisconnectionType = EGameState::VE_Active;
}
