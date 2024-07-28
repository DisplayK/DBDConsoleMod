#pragma once

#include "CoreMinimal.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "UObject/NoExportTypes.h"
#include "DirectionalHeightFogInterpolationValues.generated.h"

USTRUCT()
struct FDirectionalHeightFogInterpolationValues
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float FogDensity;

	UPROPERTY()
	FLinearColor FogInscatteringColor;

	UPROPERTY()
	float DirectionalInscatteringExponent;

	UPROPERTY()
	float DirectionalInscatteringStartDistance;

	UPROPERTY()
	FLinearColor DirectionalInscatteringColor;

	UPROPERTY()
	float FogHeightFalloff;

	UPROPERTY()
	float FogMaxOpacity;

	UPROPERTY()
	float StartDistance;

	UPROPERTY()
	float SecondFogDensity;

	UPROPERTY()
	float SecondFogHeightFalloff;

	UPROPERTY()
	float SecondFogHeightOffset;

	UPROPERTY()
	bool bReplaceVolumetricFogAlbedoWithColorGradient;

	UPROPERTY()
	float VolumetricFogGradientIntensityMultiplier;

	UPROPERTY()
	float DistanceUntilFlatFog;

	UPROPERTY()
	float DistanceUntilNoFog;

	UPROPERTY()
	bool bEnableVolumetricFog;

	UPROPERTY()
	float VolumetricFogScatteringDistribution;

	UPROPERTY()
	FColor VolumetricFogAlbedo;

	UPROPERTY()
	FLinearColor VolumetricFogEmissive;

	UPROPERTY()
	float VolumetricFogExtinctionScale;

	UPROPERTY()
	float VolumetricFogDistance;

	UPROPERTY()
	float VolumetricFogStaticLightingScatteringIntensity;

	UPROPERTY()
	bool bOverrideLightColorsWithFogInscatteringColors;

public:
	DEADBYDAYLIGHT_API FDirectionalHeightFogInterpolationValues();
};

FORCEINLINE uint32 GetTypeHash(const FDirectionalHeightFogInterpolationValues) { return 0; }
