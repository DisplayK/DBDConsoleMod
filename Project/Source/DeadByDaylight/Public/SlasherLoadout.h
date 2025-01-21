#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomizationDropdown.h"
#include "DebugLoadoutPerk.h"
#include "DebugLoadoutAddon.h"
#include "SlasherLoadout.generated.h"

USTRUCT(BlueprintType)
struct FSlasherLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutPerk> Perks;

	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutAddon> PowerAddonIDs;

	UPROPERTY(EditAnywhere)
	FCharacterCustomizationDropdown Slasher;

public:
	DEADBYDAYLIGHT_API FSlasherLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FSlasherLoadout) { return 0; }
