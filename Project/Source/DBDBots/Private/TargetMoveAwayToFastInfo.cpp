#include "TargetMoveAwayToFastInfo.h"

FTargetMoveAwayToFastInfo::FTargetMoveAwayToFastInfo()
{
	this->AccumulatedTime = 0.0f;
	this->CooldownUntilTime = 0.0f;
	this->Stimulus = FAIDetectedStimulus{};
}
