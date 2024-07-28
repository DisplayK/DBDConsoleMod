#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeRewards.h"
#include "S3PrestigeCharacterRewards.generated.h"

USTRUCT()
struct FS3PrestigeCharacterRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FS3PrestigeRewards> RewardsByPrestigeLevel;

public:
	DEADBYDAYLIGHT_API FS3PrestigeCharacterRewards();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeCharacterRewards) { return 0; }
