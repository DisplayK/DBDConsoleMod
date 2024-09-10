#include "LegacySavedBloodwebNodeGate.h"

FLegacySavedBloodwebNodeGate::FLegacySavedBloodwebNodeGate()
{
	this->Description = NAME_None;
	this->Rarity = EItemRarity::Common;
	this->Role = EPlayerRole::VE_None;
	this->GateType = EBloodwebNodeGateTypes::RequiredRank;
	this->Param = TEXT("");
}
