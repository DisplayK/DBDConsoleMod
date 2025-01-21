#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettings.generated.h"

USTRUCT()
struct FAkAdvancedInitializationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint32 IO_MemorySize;

	UPROPERTY(EditAnywhere)
	uint32 IO_Granularity;

	UPROPERTY(EditAnywhere)
	float TargetAutoStreamBufferLength;

	UPROPERTY(EditAnywhere)
	bool UseStreamCache;

	UPROPERTY(EditAnywhere)
	uint32 MaximumPinnedBytesInCache;

	UPROPERTY(EditAnywhere)
	bool EnableGameSyncPreparation;

	UPROPERTY(EditAnywhere)
	uint32 ContinuousPlaybackLookAhead;

	UPROPERTY(EditAnywhere)
	uint32 MonitorQueuePoolSize;

	UPROPERTY(EditAnywhere)
	uint32 MaximumHardwareTimeoutMs;

	UPROPERTY(EditAnywhere)
	bool DebugOutOfRangeCheckEnabled;

	UPROPERTY(EditAnywhere)
	float DebugOutOfRangeLimit;

public:
	AKAUDIO_API FAkAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkAdvancedInitializationSettings) { return 0; }
