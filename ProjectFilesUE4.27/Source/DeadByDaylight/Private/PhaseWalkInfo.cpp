#include "PhaseWalkInfo.h"

FPhaseWalkInfo::FPhaseWalkInfo()
{
	this->IsActivePhaseWalking = false;
	this->IsPassivePhaseWalking = false;
	this->IsInteractionPhaseWalking = false;
	this->HuskLocation = FVector{};
	this->HuskRotation = FRotator{};
	this->TeleportToHusk = false;
}
