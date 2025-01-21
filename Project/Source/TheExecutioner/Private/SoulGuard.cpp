#include "SoulGuard.h"
#include "CamperHealResult.h"

void USoulGuard::Authority_OnSurvivorHealed(const FCamperHealResult& healResult)
{

}

USoulGuard::USoulGuard()
{
	this->_cooldownLevels = 0.000000;
	this->_enduranceEffectClass = NULL;
	this->_recover = true;
	this->_enduranceEffectDuration = 0.000000;
}
