#pragma once

#include "CoreMinimal.h"
#include "CharacterSavedInventoryDataV7.generated.h"

USTRUCT()
struct FCharacterSavedInventoryDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName Id;

	UPROPERTY()
	int32 Num;

	UPROPERTY(SaveGame)
	FString I;

public:
	DEADBYDAYLIGHT_API FCharacterSavedInventoryDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSavedInventoryDataV7) { return 0; }
