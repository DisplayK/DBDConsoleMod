#include "OnryoTeleportTargeterComponent.h"
#include "Net/UnrealNetwork.h"

class AOnryoTelevision;

void UOnryoTeleportTargeterComponent::Server_SetTeleportTarget_Implementation(AOnryoTelevision* tv)
{

}

void UOnryoTeleportTargeterComponent::OnRep_TargetTelevision()
{

}

void UOnryoTeleportTargeterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UOnryoTeleportTargeterComponent, _replicatedTargetTelevision);
}

UOnryoTeleportTargeterComponent::UOnryoTeleportTargeterComponent()
{
	this->_replicatedTargetTelevision = NULL;
	this->_localTargetTelevision = NULL;
	this->_previousTarget = NULL;
	this->_targetUpdateInterval = 0.100000;
}
