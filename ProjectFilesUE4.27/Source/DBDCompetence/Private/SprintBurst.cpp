#include "SprintBurst.h"

float USprintBurst::GetSprintDuration() const
{
	return 0.0f;
}

float USprintBurst::GetExhaustedDuration() const
{
	return 0.0f;
}

void USprintBurst::Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving)
{

}

USprintBurst::USprintBurst()
{
	this->_exhaustionDuration = 0.000000;
	this->_sprintDuration = 0.000000;
	this->_exhaustedEffect = NULL;
}
