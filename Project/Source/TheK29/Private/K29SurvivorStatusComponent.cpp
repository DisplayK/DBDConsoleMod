#include "K29SurvivorStatusComponent.h"
#include "Net/UnrealNetwork.h"

void UK29SurvivorStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK29SurvivorStatusComponent, _powerStatusHandlerComponent);
	DOREPLIFETIME(UK29SurvivorStatusComponent, _owningSurvivor);
}

UK29SurvivorStatusComponent::UK29SurvivorStatusComponent()
{
	this->_powerStatusHandlerComponent = NULL;
	this->_owningSurvivor = NULL;
}
