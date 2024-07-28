#include "HexDevourHope.h"

UHexDevourHope::UHexDevourHope()
{
	this->_devourHopeSpeedStatusEffect = NULL;
	this->_exposedStatusEffect = NULL;
	this->_rangeFromUnhookedSurvivorNeeded = 20.000000;
	this->_tokenThresholdToImposeSpeedBoost = 2;
	this->_tokenThresholdToImposeExposeEffect = 3;
	this->_tokenThresholdToImposeAbilityToKill = 5;
	this->_moveSpeedIncrement = 0.000000;
	this->_vulnerabilityStatusViewID = NAME_None;
}
