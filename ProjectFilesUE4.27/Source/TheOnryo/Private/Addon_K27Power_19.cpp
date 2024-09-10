#include "Addon_K27Power_19.h"

UAddon_K27Power_19::UAddon_K27Power_19()
{
	this->_distanceFromSurvivorToTVToRevealAura = 800.000000;
	this->_heightOffsetLowerBoundToRevealAura = 0.000000;
	this->_heightOffsetUpperBoundToRevealAura = 300.000000;
	this->_survivorAuraRevealDuration = 7.000000;
	this->_revealSurvivorsAroundPoweredTVs = true;
	this->_revealSurvivorsAroundTurnedOffTVs = true;
	this->_timedRevealToKillerEffect = NULL;
}
