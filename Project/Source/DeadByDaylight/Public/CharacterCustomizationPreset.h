#pragma once

#include "CoreMinimal.h"
#include "CharmIdSlot.h"
#include "CharacterCustomizationPreset.generated.h"

USTRUCT()
struct FCharacterCustomizationPreset
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName Head;

	UPROPERTY(SaveGame)
	FName TorsoOrBody;

	UPROPERTY(SaveGame)
	FName LegsOrWeapon;

	UPROPERTY(SaveGame)
	TArray<FCharmIdSlot> Charms;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationPreset();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationPreset) { return 0; }
