#include "ChaseUpdateInfo.h"

FChaseUpdateInfo::FChaseUpdateInfo()
{
	this->ChaseTimer = FTargetFocusTimer{};
	this->SurvivorTravelDistance = 0.0f;
	this->KillerTravelDistance = 0.0f;
	this->ChaseStartHealthStatus = ECamperDamageState::VE_Healthy;
}
