#include "CamperMovementComponent.h"
#include "ECamperDamageState.h"
#include "UObject/NoExportTypes.h"

void UCamperMovementComponent::OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

FRotator UCamperMovementComponent::GetRotationRateWhileCrawling() const
{
	return FRotator{};
}

float UCamperMovementComponent::GetDropStaggerTimeLeft() const
{
	return 0.0f;
}

FRotator UCamperMovementComponent::GetDefaultRotationRate() const
{
	return FRotator{};
}

void UCamperMovementComponent::DBD_SurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier)
{

}

void UCamperMovementComponent::DBD_SimulateHack_LocalSurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier)
{

}

void UCamperMovementComponent::Client_Debug_SetSurvivorMaxSpeedMultiplier_Implementation(const float maxSpeedMultiplier)
{

}

UCamperMovementComponent::UCamperMovementComponent()
{
	this->MaxCrawlSpeed = 70.000000;
	this->MaxRunSpeed = 400.000000;
	this->_dropStaggerDuration = NULL;
	this->_dropStaggerMaxSpeed = NULL;
}
