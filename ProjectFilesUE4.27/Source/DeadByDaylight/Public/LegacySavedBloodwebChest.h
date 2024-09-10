#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "LegacySavedBloodwebChest.generated.h"

USTRUCT()
struct FLegacySavedBloodwebChest
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName ID;

	UPROPERTY(SaveGame)
	FName EventID;

	UPROPERTY(SaveGame)
	EItemRarity Rarity;

	UPROPERTY(SaveGame)
	TArray<float> GivenItemRarity;

public:
	DEADBYDAYLIGHT_API FLegacySavedBloodwebChest();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedBloodwebChest) { return 0; }
