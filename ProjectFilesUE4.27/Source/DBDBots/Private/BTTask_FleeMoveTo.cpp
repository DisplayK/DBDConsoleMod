#include "BTTask_FleeMoveTo.h"

UBTTask_FleeMoveTo::UBTTask_FleeMoveTo()
{
	this->InScrambleMovementMinDistance = 2400.000000;
	this->OutScrambleMovementMinDistance = 2000.000000;
	this->InScrambleMovementInterval = 1.000000;
	this->LoopScrambleMovementInterval = 5.000000;
	this->LoopScrambleMovementRandomDeviation = 1.000000;
	this->CrouchWithinLastEvadeLoopPointRadius = 100.000000;
}
