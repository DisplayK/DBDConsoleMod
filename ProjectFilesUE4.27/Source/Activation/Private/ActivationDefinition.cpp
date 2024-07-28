#include "ActivationDefinition.h"

FActivationDefinition::FActivationDefinition()
{
	this->_activationStrategy = EActivationStrategy::ActivateIfAnyTagMatches;
	this->_activationTags = FGameplayTagContainer{};
}
