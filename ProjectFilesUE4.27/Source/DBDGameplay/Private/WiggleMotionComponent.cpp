#include "WiggleMotionComponent.h"
#include "ESkillCheckCustomType.h"

class ADBDPlayer;

void UWiggleMotionComponent::SetIsBeingWiggled(const bool isBeingWiggled)
{

}

void UWiggleMotionComponent::Server_SetIsBeingWiggled_Implementation(const bool isBeingWiggled)
{

}

void UWiggleMotionComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UWiggleMotionComponent::OnSurvivorRemoved(ADBDPlayer* target)
{

}

void UWiggleMotionComponent::OnSurvivorPickedUp(ADBDPlayer* target)
{

}

void UWiggleMotionComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType type)
{

}

UWiggleMotionComponent::UWiggleMotionComponent()
{
	this->_carriedPlayer = NULL;
	this->_ownerMovementComponent = NULL;
}
