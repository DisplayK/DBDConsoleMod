#pragma once

#include "CoreMinimal.h"
#include "StorefrontStateData.generated.h"

USTRUCT(BlueprintType)
struct FStorefrontStateData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FStorefrontStateData();
};

FORCEINLINE uint32 GetTypeHash(const FStorefrontStateData) { return 0; }
