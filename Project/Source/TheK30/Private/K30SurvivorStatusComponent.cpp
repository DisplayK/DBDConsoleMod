#include "K30SurvivorStatusComponent.h"
#include "Net/UnrealNetwork.h"

void UK30SurvivorStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK30SurvivorStatusComponent, _detectedSurvivor);
	DOREPLIFETIME(UK30SurvivorStatusComponent, _k30Power);
}

UK30SurvivorStatusComponent::UK30SurvivorStatusComponent()
{
	this->_detectedSurvivor = NULL;
	this->_k30Power = NULL;
}
