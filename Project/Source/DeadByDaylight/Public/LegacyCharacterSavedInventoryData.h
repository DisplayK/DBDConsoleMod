#pragma once

#include "CoreMinimal.h"
#include "LegacyCharacterSavedInventoryData.generated.h"

USTRUCT()
struct FLegacyCharacterSavedInventoryData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	uint32 Version;

	UPROPERTY(SaveGame)
	FName Name;

	UPROPERTY(SaveGame)
	int64 TimeObtainedSinceEpoch;

public:
	DEADBYDAYLIGHT_API FLegacyCharacterSavedInventoryData();
};

FORCEINLINE uint32 GetTypeHash(const FLegacyCharacterSavedInventoryData) { return 0; }
