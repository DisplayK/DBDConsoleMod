#pragma once

#include "CoreMinimal.h"
#include "PromoPackItemPayloadData.generated.h"

USTRUCT()
struct FPromoPackItemPayloadData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FPromoPackItemPayloadData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackItemPayloadData) { return 0; }
