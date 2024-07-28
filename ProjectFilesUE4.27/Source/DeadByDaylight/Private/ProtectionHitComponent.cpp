#include "ProtectionHitComponent.h"

void UProtectionHitComponent::Authority_HandleProtectionScoringEvents()
{

}

UProtectionHitComponent::UProtectionHitComponent()
{
	this->_nearbyInjuredSurvivors = TArray<ACamperPlayer*>();
}
