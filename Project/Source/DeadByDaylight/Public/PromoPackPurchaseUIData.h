#pragma once

#include "CoreMinimal.h"
#include "PurchaseCurrencyData.h"
#include "PromoPackPurchaseUIData.generated.h"

USTRUCT(BlueprintType)
struct FPromoPackPurchaseUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FPurchaseCurrencyData AuricCellsPurchaseData;

	UPROPERTY(BlueprintReadWrite)
	bool HasAuricCellsData;

	UPROPERTY(BlueprintReadWrite)
	FPurchaseCurrencyData IridescentShardsPurchaseData;

	UPROPERTY(BlueprintReadWrite)
	bool HasIridescentShards;

public:
	DEADBYDAYLIGHT_API FPromoPackPurchaseUIData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackPurchaseUIData) { return 0; }
