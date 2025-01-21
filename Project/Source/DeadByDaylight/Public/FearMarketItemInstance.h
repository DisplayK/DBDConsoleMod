#pragma once

#include "CoreMinimal.h"
#include "FearMarketItemInstance.generated.h"

USTRUCT()
struct FFearMarketItemInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName ItemId;

	UPROPERTY()
	int32 BloodpointConversion;

	UPROPERTY()
	bool Purchased;

	UPROPERTY()
	float DiscountPercentage;

public:
	DEADBYDAYLIGHT_API FFearMarketItemInstance();
};

FORCEINLINE uint32 GetTypeHash(const FFearMarketItemInstance) { return 0; }
