#pragma once

#include "CoreMinimal.h"
#include "EEventItemContentType.h"
#include "EItemRarity.h"
#include "PurchaseItemUIData.generated.h"

USTRUCT()
struct FPurchaseItemUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FName ItemId;

	UPROPERTY(Transient)
	FText DisplayName;

	UPROPERTY(Transient)
	int32 Quantity;

	UPROPERTY(Transient)
	FString IconPath;

	UPROPERTY(Transient)
	EEventItemContentType ContentType;

	UPROPERTY(Transient)
	EItemRarity Rarity;

public:
	DEADBYDAYLIGHT_API FPurchaseItemUIData();
};

FORCEINLINE uint32 GetTypeHash(const FPurchaseItemUIData) { return 0; }
