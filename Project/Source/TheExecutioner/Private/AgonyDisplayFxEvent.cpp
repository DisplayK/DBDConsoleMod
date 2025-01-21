#include "AgonyDisplayFxEvent.h"

FAgonyDisplayFxEvent::FAgonyDisplayFxEvent()
{
	this->GameEvent = FGameplayTag{};
	this->Protagonist = EProtagonist::Instigator;
}
