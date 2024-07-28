#pragma once

#include "CoreMinimal.h"
#include "CharacterSlotData.h"
#include "TeachableData.h"
#include "KillerAttributesData.h"
#include "InventorySlotData.h"
#include "CharacterInfoData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterInfoData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FCharacterSlotData SlotData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString Description;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FTeachableData> TeachablePerksData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FInventorySlotData PowerData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FKillerAttributesData killerAttributesData;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsKiller;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

public:
	DEADBYDAYLIGHT_API FCharacterInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterInfoData) { return 0; }
