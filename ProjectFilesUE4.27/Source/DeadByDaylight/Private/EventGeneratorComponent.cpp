#include "EventGeneratorComponent.h"

void UEventGeneratorComponent::Authority_FireGenCompletedEventScore(bool isAutoCompleted)
{

}

UEventGeneratorComponent::UEventGeneratorComponent()
{
	this->_offeringEffectTypeNeeded = EOfferingEffectType::SlasherPointsAll;
	this->_updateOutlineForSurvivor = true;
	this->_updateOutlineForSlasher = true;
}
