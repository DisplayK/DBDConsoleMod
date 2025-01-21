#include "K29RushChargesHandlerComponent.h"

class ASlasherPlayer;

void UK29RushChargesHandlerComponent::SetToFullCharge()
{

}

void UK29RushChargesHandlerComponent::OnMaximumChargesChanged(const float newValue)
{

}

void UK29RushChargesHandlerComponent::OnKillerSet(ASlasherPlayer* killer)
{

}

float UK29RushChargesHandlerComponent::GetPercentageRemainingUntilNextCharge() const
{
	return 0.0f;
}

int32 UK29RushChargesHandlerComponent::GetMaximumCharges() const
{
	return 0;
}

int32 UK29RushChargesHandlerComponent::GetAvailableCharges() const
{
	return 0;
}

void UK29RushChargesHandlerComponent::AddSingleCharge()
{

}

UK29RushChargesHandlerComponent::UK29RushChargesHandlerComponent()
{
	this->_rechargeTimeByChargesLeft = NULL;
}
