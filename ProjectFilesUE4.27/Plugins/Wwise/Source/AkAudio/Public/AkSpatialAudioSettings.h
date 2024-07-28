#pragma once

#include "CoreMinimal.h"
#include "AkSpatialAudioSettings.generated.h"

USTRUCT()
struct FAkSpatialAudioSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 MaxSoundPropagationDepth;

	UPROPERTY(EditAnywhere)
	float MovementThreshold;

	UPROPERTY(EditAnywhere)
	uint32 NumberOfPrimaryRays;

	UPROPERTY(EditAnywhere)
	uint32 ReflectionOrder;

	UPROPERTY(EditAnywhere)
	float MaximumPathLength;

	UPROPERTY(EditAnywhere)
	float CPULimitPercentage;

	UPROPERTY(EditAnywhere)
	bool EnableDiffractionOnReflections;

	UPROPERTY(EditAnywhere)
	bool EnableGeometricDiffractionAndTransmission;

	UPROPERTY(EditAnywhere)
	bool CalcEmitterVirtualPosition;

	UPROPERTY(EditAnywhere)
	bool UseObstruction;

	UPROPERTY(EditAnywhere)
	bool UseOcclusion;

public:
	AKAUDIO_API FAkSpatialAudioSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkSpatialAudioSettings) { return 0; }
