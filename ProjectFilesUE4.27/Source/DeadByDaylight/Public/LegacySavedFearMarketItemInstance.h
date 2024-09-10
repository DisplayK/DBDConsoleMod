#pragma once

#include "CoreMinimal.h"
#include "LegacySavedFearMarketItemInstance.generated.h"

USTRUCT()
struct FLegacySavedFearMarketItemInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName ItemId;

	UPROPERTY(SaveGame)
	int32 Cost;

	UPROPERTY(SaveGame)
	int32 BloodpointConversion;

	UPROPERTY(SaveGame)
	bool Purchased;

public:
	DEADBYDAYLIGHT_API FLegacySavedFearMarketItemInstance();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedFearMarketItemInstance) { return 0; }
