#include "DBDCharacterMovementComponent.h"
#include "MontageStopDefinition.h"
#include "MontagePlaybackDefinition.h"
#include "Engine/NetSerialization.h"
#include "SnappingData.h"
#include "EMovementCurveType.h"
#include "UObject/NoExportTypes.h"
#include "YawAndPitchRotator_NetQuantize32.h"

class UAnimMontage;
class UCurveFloat;

void UDBDCharacterMovementComponent::SetRandomInputAmplitude(float value)
{

}

void UDBDCharacterMovementComponent::Server_StopMontage_Implementation(float timestamp, const FMontageStopDefinition montageStopDefinition)
{

}

bool UDBDCharacterMovementComponent::Server_StopMontage_Validate(float timestamp, const FMontageStopDefinition montageStopDefinition)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_StartSnapping_Implementation(float timestamp, const FSnappingData data, int32 snappingCallCount)
{

}

bool UDBDCharacterMovementComponent::Server_StartSnapping_Validate(float timestamp, const FSnappingData data, int32 snappingCallCount)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetStopSnapping_Implementation(float timestamp, const bool snapToFinalDestination)
{

}

bool UDBDCharacterMovementComponent::Server_SetStopSnapping_Validate(float timestamp, const bool snapToFinalDestination)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetMaxSpeedOverride_Implementation(float timestamp, float value, bool isSet)
{

}

bool UDBDCharacterMovementComponent::Server_SetMaxSpeedOverride_Validate(float timestamp, float value, bool isSet)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar_Implementation(float timestamp, float value)
{

}

bool UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar_Validate(float timestamp, float value)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetMaxAcceleration_Implementation(float timestamp, float value)
{

}

bool UDBDCharacterMovementComponent::Server_SetMaxAcceleration_Validate(float timestamp, float value)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetIgnorePawnCollisionOverride_Implementation(float timestamp, bool isIgnoringPawnCollision)
{

}

bool UDBDCharacterMovementComponent::Server_SetIgnorePawnCollisionOverride_Validate(float timestamp, bool isIgnoringPawnCollision)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetGroundFriction_Implementation(float timestamp, float value)
{

}

bool UDBDCharacterMovementComponent::Server_SetGroundFriction_Validate(float timestamp, float value)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar_Implementation(float timestamp, float value)
{

}

bool UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar_Validate(float timestamp, float value)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_ReplicateControlRotation_Implementation(uint8 clientRoll, uint32 view)
{

}

bool UDBDCharacterMovementComponent::Server_ReplicateControlRotation_Validate(uint8 clientRoll, uint32 view)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType)
{

}

bool UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve_Validate(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_PlayMontage_Implementation(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition)
{

}

bool UDBDCharacterMovementComponent::Server_PlayMontage_Validate(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_Launch_Implementation(float timestamp, FVector launchVelocity, int32 launchCallCount)
{

}

bool UDBDCharacterMovementComponent::Server_Launch_Validate(float timestamp, FVector launchVelocity, int32 launchCallCount)
{
	return true;
}

void UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType)
{

}

bool UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve_Validate(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType)
{
	return true;
}

void UDBDCharacterMovementComponent::OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage)
{

}

void UDBDCharacterMovementComponent::OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage)
{

}

void UDBDCharacterMovementComponent::Local_AddMaxSpeedMultiplierCurve(const UCurveFloat* curve, float duration, bool autoRemove)
{

}

bool UDBDCharacterMovementComponent::IsApplyingRandomInput() const
{
	return false;
}

void UDBDCharacterMovementComponent::DBD_SimulateHack_LocalLaunch(const float xVelocity, const float yVelocity, const float zVelocity)
{

}

void UDBDCharacterMovementComponent::Client_TeleportTo_Implementation(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation)
{

}

void UDBDCharacterMovementComponent::Client_Stop_Implementation()
{

}

void UDBDCharacterMovementComponent::Client_PreventMovement_Implementation(const bool value)
{

}

UDBDCharacterMovementComponent::UDBDCharacterMovementComponent()
{
	this->ProjectedWallSlidingFactor = 1.000000;
	this->RandomInputFrontMultiplier = 0.800000;
	this->RandomInputSideMultiplier = 1.000000;
	this->RandomInputBackMultiplier = 0.200000;
	this->_forceUseDropStaggerFix = false;
	this->_velocityAdditiveStrategy = NULL;
	this->_inputAccelerationConstraintStrategy = NULL;
	this->_rotationStrategy = NULL;
	this->_lookAtTarget = NULL;
}
