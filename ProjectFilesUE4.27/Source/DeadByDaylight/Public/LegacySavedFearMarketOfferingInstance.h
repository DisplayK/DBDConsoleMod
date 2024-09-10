#pragma once

#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedFearMarketOfferingInstance.generated.h"

USTRUCT()
struct FLegacySavedFearMarketOfferingInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale;

	UPROPERTY(SaveGame)
	FDateTime StartTime;

	UPROPERTY(SaveGame)
	FDateTime EndTime;

public:
	DEADBYDAYLIGHT_API FLegacySavedFearMarketOfferingInstance();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedFearMarketOfferingInstance) { return 0; }
