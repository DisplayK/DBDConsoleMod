#pragma once

#include "CoreMinimal.h"
#include "AkMainOutputSettings.h"
#include "AkSpatialAudioSettings.h"
#include "AkCommonInitializationSettings.generated.h"

USTRUCT()
struct FAkCommonInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 MaximumNumberOfMemoryPools;

	UPROPERTY(EditAnywhere)
	uint32 MaximumNumberOfPositioningPaths;

	UPROPERTY(EditAnywhere)
	uint32 CommandQueueSize;

	UPROPERTY(EditAnywhere)
	uint32 SamplesPerFrame;

	UPROPERTY(EditAnywhere)
	FAkMainOutputSettings MainOutputSettings;

	UPROPERTY(EditAnywhere)
	float StreamingLookAheadRatio;

	UPROPERTY(EditAnywhere)
	uint16 NumberOfRefillsInVoice;

	UPROPERTY(EditAnywhere)
	FAkSpatialAudioSettings SpatialAudioSettings;

public:
	AKAUDIO_API FAkCommonInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkCommonInitializationSettings) { return 0; }
