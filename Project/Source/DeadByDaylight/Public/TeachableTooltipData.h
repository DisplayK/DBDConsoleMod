#pragma once

#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "BaseTooltipData.h"
#include "ETeachableStatus.h"
#include "EItemRarity.h"
#include "TeachableTooltipData.generated.h"

USTRUCT()
struct FTeachableTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EItemRarity ItemRarity;

	UPROPERTY(Transient)
	EInventoryItemType ItemType;

	UPROPERTY(Transient)
	FString CharacterName;

	UPROPERTY(Transient)
	FString AvailabilityMessage;

	UPROPERTY(Transient)
	FString EffectMessage;

	UPROPERTY(Transient)
	bool UseInCharacterSelectionScreen;

	UPROPERTY(Transient)
	ETeachableStatus TeachableStatus;

public:
	DEADBYDAYLIGHT_API FTeachableTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FTeachableTooltipData) { return 0; }
