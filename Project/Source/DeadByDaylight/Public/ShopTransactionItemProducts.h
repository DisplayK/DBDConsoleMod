#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItem.h"
#include "ShopTransactionItemProducts.generated.h"

USTRUCT()
struct FShopTransactionItemProducts
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FShopTransactionItem> items;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemProducts();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemProducts) { return 0; }
