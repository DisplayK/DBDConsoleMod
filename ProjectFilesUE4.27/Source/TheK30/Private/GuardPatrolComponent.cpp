#include "GuardPatrolComponent.h"
#include "Net/UnrealNetwork.h"

void UGuardPatrolComponent::OnRep_IsPatrolling()
{

}

void UGuardPatrolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGuardPatrolComponent, _currentDirection);
	DOREPLIFETIME(UGuardPatrolComponent, _patrolPathLength);
	DOREPLIFETIME(UGuardPatrolComponent, _isInPatrolStartup);
	DOREPLIFETIME(UGuardPatrolComponent, _isPatrolling);
	DOREPLIFETIME(UGuardPatrolComponent, _patrolTimeLeft);
	DOREPLIFETIME(UGuardPatrolComponent, _patrolTotalDuration);
}

UGuardPatrolComponent::UGuardPatrolComponent()
{
	this->_currentDirection = 1;
	this->_patrolPathLength = -1.000000;
	this->_isInPatrolStartup = false;
	this->_isPatrolling = false;
	this->_patrolTotalDuration = 0.000000;
	this->_distanceBeforeHeadingToNextNode = 100.000000;
	this->_detectionRadiusInterpolationDurationPathLengthMultiplier = NULL;
	this->_detectionRadiusPathLenghtMultiplier = NULL;
}
