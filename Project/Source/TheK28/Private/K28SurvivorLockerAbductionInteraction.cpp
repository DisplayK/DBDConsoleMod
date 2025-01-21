#include "K28SurvivorLockerAbductionInteraction.h"
#include "Net/UnrealNetwork.h"

void UK28SurvivorLockerAbductionInteraction::OnRep_OverriddenInteractionInstance()
{

}

void UK28SurvivorLockerAbductionInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28SurvivorLockerAbductionInteraction, _overriddenInteractionInstance);
}

UK28SurvivorLockerAbductionInteraction::UK28SurvivorLockerAbductionInteraction()
{
	this->_overriddenInteractionInstance = NULL;
	this->_overridingTags = TArray<FGameplayTag>();
	this->_fadeOutTime = 0.330000;
	this->_minDotProductFadeOutThreshold = 0.150000;
	this->_rotationMaxTime = 0.500000;
}
