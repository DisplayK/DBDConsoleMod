#include "K28DayNightComponent.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

void UK28DayNightComponent::OnRep_NighttimeNearingActivation()
{

}

void UK28DayNightComponent::OnRep_HasReachedNightCycleNearEndThreshold()
{

}

void UK28DayNightComponent::OnRep_CurrentDayNightCycle()
{

}

void UK28DayNightComponent::Authority_OnSurvivorDamageStateChanged(ECamperDamageState previousDamageState, ECamperDamageState newDamageState)
{

}

void UK28DayNightComponent::Authority_OnIntroCompleted()
{

}

void UK28DayNightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28DayNightComponent, _currentNightCycleState);
	DOREPLIFETIME(UK28DayNightComponent, _maxChargeAmount);
	DOREPLIFETIME(UK28DayNightComponent, _currentChargeAmount);
	DOREPLIFETIME(UK28DayNightComponent, _nighttimeNearingActivationThresholdReached);
	DOREPLIFETIME(UK28DayNightComponent, _hasReachedNightCycleNearEndThreshold);
}

UK28DayNightComponent::UK28DayNightComponent()
{
	this->_killerK28ComponentClass = NULL;
	this->_survivorK28ComponentClass = NULL;
	this->_currentNightCycleState = EK28NightCycleState::Charging;
	this->_authority_numberInjuredSurvivors = 0;
	this->_maxChargeAmount = 0.000000;
	this->_currentChargeAmount = 0.000000;
	this->_nighttimeNearingActivationThresholdReached = false;
	this->_hasReachedNightCycleNearEndThreshold = false;
}
