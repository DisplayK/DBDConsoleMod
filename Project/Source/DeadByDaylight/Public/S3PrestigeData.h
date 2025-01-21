#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeConfig.h"
#include "S3PrestigeCharacterRewards.h"
#include "S3PrestigeData.generated.h"

USTRUCT()
struct FS3PrestigeData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FS3PrestigeConfig Config;

	UPROPERTY()
	TMap<FString, FS3PrestigeCharacterRewards> RewardsByCharacters;

public:
	DEADBYDAYLIGHT_API FS3PrestigeData();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeData) { return 0; }
