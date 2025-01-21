#include "Overcharge.h"

UOvercharge::UOvercharge()
{
	this->_skillCheckFailurePenalty = 0.000000;
	this->_regressionRateMultiplierCurve = NULL;
	this->_overchargedGeneratorTimers = TMap<AGenerator*, FFastTimer>();
	this->_gameplayModifierHandles = TMap<AGenerator*, uint64>();
}
