#pragma once

#include "CoreMinimal.h"
#include "DebugLoadoutPerk.h"
#include "CharacterCustomizationDropdown.h"
#include "CharmDropdown.h"
#include "ItemIdDropdown.h"
#include "DebugLoadoutAddon.h"
#include "CamperLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCamperLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FCharacterCustomizationDropdown Camper;

	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot0_CharmID;

	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot1_CharmID;

	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot2_CharmID;

	UPROPERTY(EditAnywhere)
	FItemIdDropdown Item;

	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutAddon> AddonIDs;

	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutPerk> Perks;

public:
	DEADBYDAYLIGHT_API FCamperLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FCamperLoadout) { return 0; }
