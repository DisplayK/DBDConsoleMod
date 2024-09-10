#include "K28KillerLockerComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UK28KillerLockerComponent::OnRep_LockerState_Replicated()
{

}

void UK28KillerLockerComponent::OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker)
{

}

void UK28KillerLockerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK28KillerLockerComponent, _lockerState_replicated);
}

UK28KillerLockerComponent::UK28KillerLockerComponent()
{
	this->_fovChangeTeleportationCurve = NULL;
	this->_fovChangeTime = 1.500000;
	this->_extraArmsAnimationFollowerActorClass = NULL;
	this->_extraArmsAnimationFollowerActor = NULL;
	this->_timeBetweenAttemptTrigger = 0.500000;
}
