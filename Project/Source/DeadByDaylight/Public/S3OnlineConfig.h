#pragma once

#include "CoreMinimal.h"
#include "S3OnlineConfig.generated.h"

USTRUCT()
struct FS3OnlineConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<int32> HiddenProgressiveQueueDelays;

	UPROPERTY()
	int32 HiddenQueueDelayResetThreshold;

	UPROPERTY()
	int32 RandomQueueDelayMin;

	UPROPERTY()
	int32 RandomQueueDelayMax;

public:
	DEADBYDAYLIGHT_API FS3OnlineConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3OnlineConfig) { return 0; }
