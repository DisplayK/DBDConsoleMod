#include "SnowmanWinterEventPlayerComponent.h"

USnowmanWinterEventPlayerComponent::USnowmanWinterEventPlayerComponent()
{
	this->_previouslyHighFivedPlayers = TSet<TWeakObjectPtr<ADBDPlayer>>();
}
