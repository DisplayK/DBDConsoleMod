#pragma once

#include "CoreMinimal.h"
#include "EBloodwebNodeContentType.h"
#include "EItemRarity.h"
#include "LegacySavedBloodwebNodeProperties.generated.h"

USTRUCT()
struct FLegacySavedBloodwebNodeProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	EBloodwebNodeContentType ContentType;

	UPROPERTY(SaveGame)
	EItemRarity Rarity;

	UPROPERTY(SaveGame)
	TArray<FString> Tags;

public:
	DEADBYDAYLIGHT_API FLegacySavedBloodwebNodeProperties();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedBloodwebNodeProperties) { return 0; }
