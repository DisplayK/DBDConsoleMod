#include "SlasherMovementComponent.h"

float USlasherMovementComponent::GetBaseMaxSpeed() const
{
	return 0.0f;
}

void USlasherMovementComponent::DBD_SimulateHack_LocalKillerMaxSpeedMultiplier(const float maxSpeedMultiplier)
{

}

void USlasherMovementComponent::DBD_KillerMaxSpeedMultiplier(const float maxSpeedMultiplier)
{

}

void USlasherMovementComponent::Client_Debug_SetKillerMaxSpeedMultiplier_Implementation(const float maxSpeedMultiplier)
{

}

USlasherMovementComponent::USlasherMovementComponent()
{
	this->OnHitLedgeEventCooldown = -1.000000;
}
