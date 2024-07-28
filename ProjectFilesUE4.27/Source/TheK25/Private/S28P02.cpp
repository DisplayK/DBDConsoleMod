#include "S28P02.h"

US28P02::US28P02()
{
	this->_healingSpeedGainPercentage = 0.000000;
	this->_canSelfHeal = true;
	this->_selfHealSpeedPenalty = 0.000000;
	this->_blessedEffectClass = NULL;
	this->_allowSelfHealEffectClass = NULL;
	this->_selfHealSpeedPenaltyEffectClass = NULL;
}
