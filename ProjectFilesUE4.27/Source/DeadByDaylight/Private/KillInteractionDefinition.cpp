#include "KillInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"

class ACamperPlayer;

ACamperPlayer* UKillInteractionDefinition::GetOwningSurvivor() const
{
	return NULL;
}

FAnimationMontageDescriptor UKillInteractionDefinition::GetExitAnimationMontage_Implementation() const
{
	return FAnimationMontageDescriptor{};
}

bool UKillInteractionDefinition::GetChargeCompleted() const
{
	return false;
}

UKillInteractionDefinition::UKillInteractionDefinition()
{
	this->_disableFOVSystemDuringInteraction = false;
	this->_overrideSlasherFieldOfViewDuringInteraction = false;
	this->_overrideCamperFieldOfViewDuringInteraction = false;
	this->_camperCopySlasherFOVCurve = false;
	this->_cameraFOVCurveName = TEXT("CameraFOV");
	this->_nonOverrideableTargetInteractions = TArray<FString>();
	this->_chargeCompleted = false;
	this->_isKillShownInThirdPerson = true;
	this->_manuallyManageMeshHiding = false;
	this->_survivorAnimationLastAfterInteractionEnds = false;
	this->_maximumDelayBeforeSurvivorDeath = 5.000000;
	this->_slasherFacingTolerance = 70.000000;
}
