#include "K29SurvivorCarriableComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void UK29SurvivorCarriableComponent::OnRep_OwningSurvivor()
{

}

void UK29SurvivorCarriableComponent::OnKillerSet(ASlasherPlayer* killer)
{

}

bool UK29SurvivorCarriableComponent::IsBeingCarriedByK29RushOrMarkedForThrow()
{
	return false;
}

void UK29SurvivorCarriableComponent::EnableCollision()
{

}

void UK29SurvivorCarriableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK29SurvivorCarriableComponent, _owningSurvivor);
}

UK29SurvivorCarriableComponent::UK29SurvivorCarriableComponent()
{
	this->_rootJointName = TEXT("joint_Char");
	this->_isCarriedByK29Rush = false;
	this->_killerIngoreTime = 3.000000;
	this->_owningSurvivor = NULL;
}
