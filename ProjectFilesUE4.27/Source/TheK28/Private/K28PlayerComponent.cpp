#include "K28PlayerComponent.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UK28PlayerComponent::OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player)
{

}

void UK28PlayerComponent::OnRep_DayNightComponent()
{

}

void UK28PlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28PlayerComponent, _dayNightComponent);
}

UK28PlayerComponent::UK28PlayerComponent()
{
	this->_dayNightComponent = NULL;
}
