#pragma once

#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.h"
#include "SavedFearMarketOfferingInstanceV7.generated.h"

USTRUCT()
struct FSavedFearMarketOfferingInstanceV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale;

	UPROPERTY(SaveGame)
	FString StartTime;

	UPROPERTY(SaveGame)
	FString EndTime;

public:
	DEADBYDAYLIGHT_API FSavedFearMarketOfferingInstanceV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedFearMarketOfferingInstanceV7) { return 0; }
