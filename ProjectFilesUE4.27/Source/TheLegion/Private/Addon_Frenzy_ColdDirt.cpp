#include "Addon_Frenzy_ColdDirt.h"

UAddon_Frenzy_ColdDirt::UAddon_Frenzy_ColdDirt()
{
	this->_mapTokenPerChainedHit = TMap<int32, int32>();
	this->_tokensToReachForActivation = 30;
	this->_movementSpeedMultiplierModifier = 0.040000;
}
