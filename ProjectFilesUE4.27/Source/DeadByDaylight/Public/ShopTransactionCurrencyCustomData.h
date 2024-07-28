#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionCurrencyProducts.h"
#include "ShopTransactionCurrencyCustomData.generated.h"

USTRUCT()
struct FShopTransactionCurrencyCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FShopTransactionCurrencyProducts productsReceived;

	UPROPERTY()
	FString transactionName;

	UPROPERTY()
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionCurrencyCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionCurrencyCustomData) { return 0; }
