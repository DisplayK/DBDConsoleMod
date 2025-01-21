#include "AISkill_InteractionTarget.h"

UAISkill_InteractionTarget::UAISkill_InteractionTarget()
{
	this->TargetRequirement = EInteractionTargetRequirements::BestTargetMustBeValid;
	this->AutoSwapBestStimulusWithBestTarget = false;
	this->StartMinRange = -1.000000;
	this->StartMaxRange = -1.000000;
	this->StopMinRange = -1.000000;
	this->StopMaxRange = -1.000000;
	this->StartMaxHalfAngle = 180.000000;
	this->StopMaxHalfAngle = 180.000000;
	this->IsMaxHalfAngle2D = true;
	this->TestMaxHalfAngleOnPath = false;
	this->MaxAngleFilterClass = NULL;
	this->InSightMode = EInteractionTargetInSightModes::None;
	this->OutOfSightModeDelay = 2.000000;
	this->TargetMoveAwayTooFastStopDelay = -1.000000;
	this->TargetMoveAwayTooFastCooldown = 8.000000;
	this->AlwaysStrafeAroundTarget = false;
	this->_unfilteredTargets = TArray<FAIDetectedStimulus>();
	this->_filteredTargets = TArray<FAIDetectedStimulus>();
	this->_targetsMoveAwayTooFastInfo = TMap<AActor*, FTargetMoveAwayToFastInfo>();
}
