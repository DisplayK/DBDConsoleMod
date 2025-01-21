#include "Tinkerer.h"

class UChargeableComponent;

float UTinkerer::GetTriggerThreshold() const
{
	return 0.0f;
}

float UTinkerer::GetActivationTimeAtLevel() const
{
	return 0.0f;
}

void UTinkerer::Authority_OnLevelReadyToPlay()
{

}

void UTinkerer::Authority_OnGeneratorChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

UTinkerer::UTinkerer()
{
	this->_undetectableEffectClass = NULL;
	this->_triggerThreshold = 0.700000;
	this->_distanceThreshold = 600.000000;
	this->_activationTime = 0.000000;
	this->_generatorActivationTimes = TMap<AActor*, float>();
}
