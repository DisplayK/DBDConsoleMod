#include "Addon_K27Power_16.h"

UAddon_K27Power_16::UAddon_K27Power_16()
{
	this->_distanceOfSightFromSurvivorToKiller = 1600.000000;
	this->_survivorScreamRevealDuration = 4.000000;
	this->_screamRevealComponentClass = NULL;
	this->_cachedScreamRevealComponents = TArray<TWeakObjectPtr<UK27Addon_16_ScreamRevealComponent>>();
}
