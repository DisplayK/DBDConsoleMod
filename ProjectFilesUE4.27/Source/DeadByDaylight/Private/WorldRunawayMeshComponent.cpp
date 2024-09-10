#include "WorldRunawayMeshComponent.h"

void UWorldRunawayMeshComponent::SetShouldRunAwayWithRandomDelay(bool should, float delayRange)
{

}

void UWorldRunawayMeshComponent::SetShouldRunAwayWithDelay(bool should, float delay)
{

}

void UWorldRunawayMeshComponent::SetShouldRunAway(bool should)
{

}

bool UWorldRunawayMeshComponent::GetShouldRunAway() const
{
	return false;
}

UWorldRunawayMeshComponent::UWorldRunawayMeshComponent()
{
	this->ResetCooldown = 0.000000;
	this->_runAwayMustTickDuration = 0.000000;
	this->_returnMustTickDuration = 0.000000;
}
