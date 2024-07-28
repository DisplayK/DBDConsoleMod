#include "K28KillerLockerState.h"

FK28KillerLockerState::FK28KillerLockerState()
{
	this->_lockerUsedByKiller = NULL;
	this->_isTeleportingToLocker = false;
	this->_enteredLockerThroughTeleportation = false;
}
