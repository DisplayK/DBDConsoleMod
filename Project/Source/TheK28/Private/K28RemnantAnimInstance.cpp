#include "K28RemnantAnimInstance.h"

class ACamperPlayer;

ACamperPlayer* UK28RemnantAnimInstance::ConsumeSurvivorWhoDestroyedRemnant()
{
	return NULL;
}

UK28RemnantAnimInstance::UK28RemnantAnimInstance()
{
	this->_currentRemnantState = EK28RemnantState::Inactive;
	this->_isTeleportingToRemnant = false;
}
