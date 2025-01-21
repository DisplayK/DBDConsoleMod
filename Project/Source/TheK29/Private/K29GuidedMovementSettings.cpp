#include "K29GuidedMovementSettings.h"

FK29GuidedMovementSettings::FK29GuidedMovementSettings()
{
	this->MovingActor = NULL;
	this->StartPosition = FVector{};
	this->ForwardDirection = FVector{};
	this->CapsuleHeight = 0.0f;
	this->CapsuleCenterHeightOffset = 0.0f;
	this->CapsuleRadius = 0.0f;
	this->MinimumRequiredDistance = 0.0f;
	this->MaximumDuration = 0.0f;
	this->MovementSpeedInCmPerSecond = 0.0f;
	this->IsCarryingSurvivor = false;
	this->IgnoredActors = TArray<AActor*>();
}
