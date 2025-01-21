#include "PlayerCapsuleQueryParams.h"

FPlayerCapsuleQueryParams::FPlayerCapsuleQueryParams()
{
	this->Player = NULL;
	this->IgnoreActors = TSet<AActor*>();
}
