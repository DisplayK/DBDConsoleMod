#include "K29PowerChargePresentationPowerFadeComponent.h"

class UK29RushChargesHandlerComponent;
class ASlasherPlayer;

void UK29PowerChargePresentationPowerFadeComponent::SetDependencies(UK29RushChargesHandlerComponent* ammoHandler)
{

}

void UK29PowerChargePresentationPowerFadeComponent::OnKillerSet(ASlasherPlayer* killer)
{

}

UK29PowerChargePresentationPowerFadeComponent::UK29PowerChargePresentationPowerFadeComponent()
{
	this->_rushChargesHandlerComponent = NULL;
}
