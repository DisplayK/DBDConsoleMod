#include "ActivateOnEventTimedStatusEffect.h"
#include "ActivateOnEventAlwaysActivationStrategy.h"

UActivateOnEventTimedStatusEffect::UActivateOnEventTimedStatusEffect()
{
	this->_activationStrategyClass = UActivateOnEventAlwaysActivationStrategy::StaticClass();
	this->_activationStrategy = NULL;
}
