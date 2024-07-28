#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPreset.generated.h"

USTRUCT()
struct FCharacterLoadoutPreset
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName PowerOrItem;

	UPROPERTY(SaveGame)
	TArray<FName> AddOns;

	UPROPERTY(SaveGame)
	TArray<FName> Perks;

	UPROPERTY(SaveGame)
	FName Favor;

public:
	DEADBYDAYLIGHT_API FCharacterLoadoutPreset();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLoadoutPreset) { return 0; }
