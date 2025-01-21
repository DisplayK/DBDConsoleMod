#include "PlayerScoreComponent.h"

UPlayerScoreComponent::UPlayerScoreComponent()
{
	this->_emitterDB = NULL;
	this->_emitters = TSet<UPlayerScoreEmitter*>();
}
