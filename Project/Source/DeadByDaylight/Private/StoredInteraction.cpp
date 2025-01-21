#include "StoredInteraction.h"

FStoredInteraction::FStoredInteraction()
{
	this->_interaction = NULL;
	this->_inputType = EInputInteractionType::VE_None;
	this->_playerProperties = FInteractionPlayerProperties{};
}
