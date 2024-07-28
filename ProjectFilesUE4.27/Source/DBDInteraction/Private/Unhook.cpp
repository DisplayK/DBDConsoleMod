#include "Unhook.h"

UUnhook::UUnhook()
{
	this->_snapPoints = TArray<USceneComponent*>();
	this->_enduranceEffectClass = NULL;
	this->_movementSpeedBonusEffectClass = NULL;
	this->_survivorRecentlyUnhookedEffectClass = NULL;
	this->_unhookingPlayer = NULL;
	this->_hookedCharacterSnapTime = 0.250000;
	this->_playerBeingUnhooked = NULL;
}
