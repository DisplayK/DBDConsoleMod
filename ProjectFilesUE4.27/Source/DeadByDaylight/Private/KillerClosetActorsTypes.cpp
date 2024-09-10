#include "KillerClosetActorsTypes.h"

FKillerClosetActorsTypes::FKillerClosetActorsTypes()
{
	this->KillerPresenceTag = FGameplayTag{};
	this->ClosetActorClass = NULL;
	this->SocketToSpawnOn = NAME_None;
}
