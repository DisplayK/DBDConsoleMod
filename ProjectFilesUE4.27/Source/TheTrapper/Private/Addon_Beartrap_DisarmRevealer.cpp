#include "Addon_Beartrap_DisarmRevealer.h"

UAddon_Beartrap_DisarmRevealer::UAddon_Beartrap_DisarmRevealer()
{
	this->_auraRevealStatusEffectID = NAME_None;
	this->_auraRevealDuration = 0.000000;
	this->_disarmedTrapMap = TMap<ABearTrap*, ACamperPlayer*>();
}
