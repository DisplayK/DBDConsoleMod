#include "Addon_K28Power_18.h"

class ALocker;

void UAddon_K28Power_18::Multicast_TriggerLockerAnimationOnAllLockers_Implementation(const TArray<ALocker*>& lockers)
{

}

UAddon_K28Power_18::UAddon_K28Power_18()
{
	this->_survivorImposedEffectClass = NULL;
	this->_survivorStatusEffectTime = 3.000000;
	this->_lockersToSlamRange = 1000.000000;
}
