#include "FlashlightFXComponent.h"

void UFlashlightFXComponent::UpdateFXTargets()
{

}

void UFlashlightFXComponent::OnTurnedOn()
{

}

void UFlashlightFXComponent::OnTurnedOff()
{

}

float UFlashlightFXComponent::GetBlindingSuccessRatio() const
{
	return 0.0f;
}

UFlashlightFXComponent::UFlashlightFXComponent()
{
	this->_tip = NULL;
	this->_centerGlowMesh = NULL;
	this->_beamMesh = NULL;
	this->_minimumOcclusionDistanceForSpotlight = 5.000000;
	this->_flashEffectIntensityCurve = NULL;
	this->_flashEffectDuration = 0.500000;
	this->_spotLightHalfAngle = 5.000000;
	this->_spotLightIntensity = 250000.000000;
	this->_beamBlindingHalfAngle = 2.000000;
	this->_beamFlashHalfAngle = 30.000000;
	this->_beamBlindingRatioInterpSpeedWithTarget = 3.000000;
	this->_beamBlindingRatioInterpSpeedWithoutTarget = 1.000000;
	this->_resizeConeLength = false;
	this->_centerGlowWidthScaleWithoutBlindTarget = 12.500000;
	this->_centerGlowWidthScaleWithBlindTarget = 5.000000;
	this->_centerGlowWidthScaleDuringFlash = 1.000000;
	this->_centerGlowShrinkDistance = 300.000000;
	this->_centerGlowLengthMaxScale = 500.000000;
	this->_currentBeamModifyingTarget = NULL;
	this->_targets = TSet<UFlashlightTargetFXComponent*>();
}
