#include "AITerrorEvent.h"

FAITerrorEvent::FAITerrorEvent()
{
	this->Location = FVector{};
	this->Instigator = NULL;
	this->TerrorEmitter = NULL;
	this->TeamIdentifier = FGenericTeamId{};
}
