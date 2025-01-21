#pragma once

#include "CoreMinimal.h"
#include "FearMarketItemInstance.h"
#include "UObject/NoExportTypes.h"
#include "FearMarketOfferingInstance.generated.h"

USTRUCT()
struct FFearMarketOfferingInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FFearMarketItemInstance> ObjectsForSale;

	UPROPERTY()
	FDateTime StartTime;

	UPROPERTY()
	FDateTime EndTime;

public:
	DEADBYDAYLIGHT_API FFearMarketOfferingInstance();
};

FORCEINLINE uint32 GetTypeHash(const FFearMarketOfferingInstance) { return 0; }
