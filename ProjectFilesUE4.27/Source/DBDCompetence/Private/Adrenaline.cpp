#include "Adrenaline.h"

void UAdrenaline::Multicast_DispatchAdrenalineEvents_Implementation(const bool isHealthy, const float healAmount)
{

}

void UAdrenaline::Authority_AttemptApplyPerk()
{

}

UAdrenaline::UAdrenaline()
{
	this->_exhaustedEffectID = TEXT("ExhaustedEffect");
	this->_speedEffect = NULL;
	this->_exhaustionEffect = NULL;
	this->_movementSpeedDuration = 5.000000;
	this->_movementSpeedPercentage = 0.500000;
}
