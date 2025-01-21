#include "K28SecondaryCameraMovementData.h"

FK28SecondaryCameraMovementData::FK28SecondaryCameraMovementData()
{
	this->InitialActorLocation = FVector{};
	this->TargetActorLocation = FVector{};
	this->IsPerformingGrabRotation = false;
	this->InitialCameraRotation = FRotator{};
	this->TargetCameraRotation = FRotator{};
	this->TransitionCurve = NULL;
	this->CameraMovementDuration = 0.0f;
}
