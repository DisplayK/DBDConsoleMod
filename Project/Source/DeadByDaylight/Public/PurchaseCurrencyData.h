#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "PurchaseCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct FPurchaseCurrencyData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	ECurrencyType CurrencyType;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 Price;

	UPROPERTY(BlueprintReadWrite, Transient)
	float DiscountPercentage;

	UPROPERTY(BlueprintReadWrite, Transient)
	bool IsAffordable;

public:
	DEADBYDAYLIGHT_API FPurchaseCurrencyData();
};

FORCEINLINE uint32 GetTypeHash(const FPurchaseCurrencyData) { return 0; }
