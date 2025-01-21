#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeConfig.generated.h"

USTRUCT()
struct FS3PrestigeConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 MaxPrestige;

	UPROPERTY()
	TArray<int32> PerkThresholds;

	UPROPERTY()
	int32 PrestigeCost;

public:
	DEADBYDAYLIGHT_API FS3PrestigeConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeConfig) { return 0; }
