#include "AutomaticLeanComponent.h"
#include "ELeanState.h"
#include "Net/UnrealNetwork.h"

void UAutomaticLeanComponent::Server_SetLeanState_Implementation(ELeanState leanState)
{

}

bool UAutomaticLeanComponent::Server_SetLeanState_Validate(ELeanState leanState)
{
	return true;
}

void UAutomaticLeanComponent::OnRep_LeanState()
{

}

void UAutomaticLeanComponent::Local_Unlean()
{

}

void UAutomaticLeanComponent::Local_Lean()
{

}

bool UAutomaticLeanComponent::IsLeaning() const
{
	return false;
}

ELeanState UAutomaticLeanComponent::GetPotentialLeanState() const
{
	return ELeanState::NotLeaning;
}

ELeanState UAutomaticLeanComponent::GetLeanState() const
{
	return ELeanState::NotLeaning;
}

float UAutomaticLeanComponent::GetAvailableDistanceInFrontOfCamera() const
{
	return 0.0f;
}

bool UAutomaticLeanComponent::CanInitiateLean() const
{
	return false;
}

void UAutomaticLeanComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAutomaticLeanComponent, _leanState);
}

UAutomaticLeanComponent::UAutomaticLeanComponent()
{
	this->_middleSphereTraceLength = 1.000000;
	this->_sideSphereTraceLength = 1.000000;
	this->_sphereTraceRadius = 10.000000;
	this->_standingTraceHeightOffset = 0.000000;
	this->_crouchingTraceHeightOffset = 0.000000;
	this->_sideTraceOffset = 0.000000;
	this->_maxCameraDistance = 50.000000;
	this->_maxCameraAngle = 45.000000;
	this->_debugMode = false;
	this->_leanState = ELeanState::NotLeaning;
}
