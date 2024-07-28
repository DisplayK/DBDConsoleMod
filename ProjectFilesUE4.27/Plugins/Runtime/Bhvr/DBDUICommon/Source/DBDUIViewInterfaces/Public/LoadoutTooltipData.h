#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "LoadoutTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsLocked;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText EventName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventId;

public:
	DBDUIVIEWINTERFACES_API FLoadoutTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutTooltipData) { return 0; }
