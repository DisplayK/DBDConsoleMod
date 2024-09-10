#pragma once

#include "CoreMinimal.h"
#include "InventorySlotData.h"
#include "ETeachableStatus.h"
#include "TeachableData.generated.h"

USTRUCT(BlueprintType)
struct FTeachableData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FInventorySlotData InventorySlotData;

	UPROPERTY(BlueprintReadOnly, Transient)
	ETeachableStatus Status;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 UnlockLevel;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString Message;

public:
	DEADBYDAYLIGHT_API FTeachableData();
};

FORCEINLINE uint32 GetTypeHash(const FTeachableData) { return 0; }
