#pragma once

#include "CoreMinimal.h"
#include "OnMovementCacheStruct.generated.h"

USTRUCT(BlueprintType)
struct FOnMovementCacheStruct
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FOnMovementCacheStruct();
};

FORCEINLINE uint32 GetTypeHash(const FOnMovementCacheStruct) { return 0; }
