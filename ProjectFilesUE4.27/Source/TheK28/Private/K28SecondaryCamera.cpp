#include "K28SecondaryCamera.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

void AK28SecondaryCamera::Server_SetIsKillerPlayerViewTarget_Implementation(bool isKillerPlayerViewTarget)
{

}

void AK28SecondaryCamera::Server_SetCameraOrientation_Implementation(FRotator newOrientation)
{

}

void AK28SecondaryCamera::OnRep_IsKillerPlayerViewTarget()
{

}

void AK28SecondaryCamera::OnLevelReadyToPlay()
{

}

void AK28SecondaryCamera::Multicast_SetCameraOrientation_Implementation(FRotator newOrientation, bool isRelativeRotation)
{

}

bool AK28SecondaryCamera::GetIsKillerPlayerViewTarget() const
{
	return false;
}

FRotator AK28SecondaryCamera::GetCameraWorldRotation() const
{
	return FRotator{};
}

void AK28SecondaryCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK28SecondaryCamera, _isKillerPlayerViewTarget);
}

AK28SecondaryCamera::AK28SecondaryCamera()
{
	this->_minimumCameraPitchOrientationAngle = -50.000000;
	this->_maximumCameraPitchOrientationAngle = 50.000000;
	this->_observerRotationSpeed = 10.000000;
	this->_minTimeBetweenCameraRotationUpdateRPC = 0.050000;
	this->_survivorGrabTransition_CameraRotationEndPercentage = 0.400000;
	this->_survivorGrabTransition_DistanceFromLocker = 300.000000;
	this->_isKillerPlayerViewTarget = false;
}
