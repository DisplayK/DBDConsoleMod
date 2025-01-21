#include "Hysteria.h"

UHysteria::UHysteria()
{
	this->_obliviousEffectDuration = 0.000000;
	this->_perkCooldownDuration = 0.000000;
	this->_obliviousEffectClass = NULL;
	this->_obliviousEffectPerSurvivorMap = TMap<ACamperPlayer*, UHysteriaObliviousEffect*>();
}
