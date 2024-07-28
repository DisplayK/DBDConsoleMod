#include "K29SurvivorThrowableComponent.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementInstance.h"

class ACamperPlayer;

void UK29SurvivorThrowableComponent::Server_EndThrow_Implementation()
{

}

void UK29SurvivorThrowableComponent::Server_CancelThrowOnOtherSurvivorCollision_Implementation(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision)
{

}

void UK29SurvivorThrowableComponent::OnWalkingAllowedAfterFall()
{

}

void UK29SurvivorThrowableComponent::OnThrowTimeout()
{

}

void UK29SurvivorThrowableComponent::Multicast_SetCurrentThrow_Implementation(FK29GuidedMovementInstance throwInstance, ACamperPlayer* thrownSurvivor)
{

}

void UK29SurvivorThrowableComponent::Multicast_InstantlyLetGoSurvivor_Implementation(const bool hasDealtDamage)
{

}

void UK29SurvivorThrowableComponent::Multicast_EndThrow_Implementation()
{

}

void UK29SurvivorThrowableComponent::Multicast_CancelThrowOnOtherSurvivorCollision_Implementation(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision)
{

}

void UK29SurvivorThrowableComponent::EndThrow()
{

}

UK29SurvivorThrowableComponent::UK29SurvivorThrowableComponent()
{
	this->_throwMovementSpeedMultiplierCurve = NULL;
}
