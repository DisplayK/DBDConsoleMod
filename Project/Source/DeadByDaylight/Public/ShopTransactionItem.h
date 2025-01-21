#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.h"
#include "ShopTransactionItem.generated.h"

USTRUCT()
struct FShopTransactionItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FShopTransactionItemParameters item;

public:
	DEADBYDAYLIGHT_API FShopTransactionItem();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItem) { return 0; }
