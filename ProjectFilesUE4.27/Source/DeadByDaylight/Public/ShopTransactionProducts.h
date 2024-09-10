#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrency.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionProducts.generated.h"

USTRUCT()
struct FShopTransactionProducts
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FShopTransactionVirtualCurrency> virtualCurrencies;

	UPROPERTY()
	TArray<FShopTransactionItem> items;

public:
	DEADBYDAYLIGHT_API FShopTransactionProducts();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionProducts) { return 0; }
