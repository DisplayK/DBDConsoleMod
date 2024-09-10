#pragma once

#include "CoreMinimal.h"
#include "PlayerStateData.h"
#include "EquippedPlayerCustomization.h"
#include "PlayerDataSync.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDataSync
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FPlayerStateData PlayerData;

	UPROPERTY()
	FEquippedPlayerCustomization EquippedCustomization;

	UPROPERTY()
	FName EquipedItemId;

	UPROPERTY()
	TArray<FName> EquipedItemAddonIds;

public:
	DEADBYDAYLIGHT_API FPlayerDataSync();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerDataSync) { return 0; }
