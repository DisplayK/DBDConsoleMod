#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "PromoPackItemData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPromoPackItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	UTexture2D* ItemIcon;

	UPROPERTY(BlueprintReadWrite)
	FName ItemID;

	UPROPERTY(BlueprintReadWrite)
	EItemRarity ItemRarity;

	UPROPERTY(BlueprintReadWrite)
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FPromoPackItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackItemData) { return 0; }
