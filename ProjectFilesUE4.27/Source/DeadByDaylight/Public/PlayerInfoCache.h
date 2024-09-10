#pragma once

#include "CoreMinimal.h"
#include "PlayerInfoCache.generated.h"

USTRUCT()
struct FPlayerInfoCache
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FPlayerInfoCache();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerInfoCache) { return 0; }
