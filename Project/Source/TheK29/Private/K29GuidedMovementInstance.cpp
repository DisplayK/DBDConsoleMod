#include "K29GuidedMovementInstance.h"

FK29GuidedMovementInstance::FK29GuidedMovementInstance()
{
	this->MovementDuration = 0.0f;
	this->StartingPosition = FVector{};
	this->EndingPosition = FVector{};
	this->ForwardDirection = FVector{};
	this->XYForwardDirection = FVector{};
	this->EndInImpact = false;
	this->EndAtLedge = false;
	this->StartingTime = 0.0f;
	this->EndingTime = 0.0f;
	this->MovementCurve = TArray<FVector>();
}
