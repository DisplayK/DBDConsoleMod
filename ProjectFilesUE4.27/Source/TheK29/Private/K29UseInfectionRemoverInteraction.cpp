#include "K29UseInfectionRemoverInteraction.h"

class ACamperPlayer;

ACamperPlayer* UK29UseInfectionRemoverInteraction::GetInteractionTarget() const
{
	return NULL;
}

UK29UseInfectionRemoverInteraction::UK29UseInfectionRemoverInteraction()
{
	this->_killerInstinctClass = NULL;
}
