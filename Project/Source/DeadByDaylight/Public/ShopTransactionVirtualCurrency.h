#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.h"
#include "ShopTransactionVirtualCurrency.generated.h"

USTRUCT()
struct FShopTransactionVirtualCurrency
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FShopTransactionVirtualCurrencyParameters virtualCurrency;

public:
	DEADBYDAYLIGHT_API FShopTransactionVirtualCurrency();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionVirtualCurrency) { return 0; }
