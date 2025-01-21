#include "GunslingerEffectsComponent.h"

void UGunslingerEffectsComponent::OnItemUsedStateChanged(bool isPressed)
{

}

void UGunslingerEffectsComponent::Multicast_PlayOutOfAmmoSound_Implementation()
{

}

UGunslingerEffectsComponent::UGunslingerEffectsComponent()
{
	this->_minimumTimeBetweenBroadcast = 0.100000;
	this->_rifle = NULL;
}
