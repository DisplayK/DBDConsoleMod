#include "DirectionalHeightFogInterpolationValues.h"

FDirectionalHeightFogInterpolationValues::FDirectionalHeightFogInterpolationValues()
{
	this->FogDensity = 0.0f;
	this->FogInscatteringColor = FLinearColor{};
	this->DirectionalInscatteringExponent = 0.0f;
	this->DirectionalInscatteringStartDistance = 0.0f;
	this->DirectionalInscatteringColor = FLinearColor{};
	this->FogHeightFalloff = 0.0f;
	this->FogMaxOpacity = 0.0f;
	this->StartDistance = 0.0f;
	this->SecondFogDensity = 0.0f;
	this->SecondFogHeightFalloff = 0.0f;
	this->SecondFogHeightOffset = 0.0f;
	this->bReplaceVolumetricFogAlbedoWithColorGradient = false;
	this->VolumetricFogGradientIntensityMultiplier = 0.0f;
	this->DistanceUntilFlatFog = 0.0f;
	this->DistanceUntilNoFog = 0.0f;
	this->bEnableVolumetricFog = false;
	this->VolumetricFogScatteringDistribution = 0.0f;
	this->VolumetricFogAlbedo = FColor{};
	this->VolumetricFogEmissive = FLinearColor{};
	this->VolumetricFogExtinctionScale = 0.0f;
	this->VolumetricFogDistance = 0.0f;
	this->VolumetricFogStaticLightingScatteringIntensity = 0.0f;
	this->bOverrideLightColorsWithFogInscatteringColors = false;
}
