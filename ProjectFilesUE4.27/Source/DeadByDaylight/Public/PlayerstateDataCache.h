#pragma once

#include "CoreMinimal.h"
#include "AwardedScores.h"
#include "PlayerstateDataCache.generated.h"

USTRUCT()
struct FPlayerstateDataCache
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<FName, FAwardedScores> awardedScoresByType;

	UPROPERTY()
	bool IsDataCacheValid;

public:
	DEADBYDAYLIGHT_API FPlayerstateDataCache();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerstateDataCache) { return 0; }
