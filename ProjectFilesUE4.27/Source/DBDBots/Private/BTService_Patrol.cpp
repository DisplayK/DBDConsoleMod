#include "BTService_Patrol.h"

UBTService_Patrol::UBTService_Patrol()
{
	this->FilterOperation = EBasicKeyOperation::Set;
	this->MinPatrolInvestigationDistance = 400.000000;
	this->PatrolPointsValidityCheckInterval = 1.500000;
}
