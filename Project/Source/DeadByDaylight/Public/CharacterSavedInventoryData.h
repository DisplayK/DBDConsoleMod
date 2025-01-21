#pragma once

#include "CoreMinimal.h"
#include "CharacterSavedInventoryData.generated.h"

USTRUCT()
struct FCharacterSavedInventoryData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	uint32 Version;

	UPROPERTY()
	FName Name;

public:
	DEADBYDAYLIGHT_API FCharacterSavedInventoryData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSavedInventoryData) { return 0; }
