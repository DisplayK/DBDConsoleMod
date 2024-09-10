#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionProducts.h"
#include "ShopTransactionCustomData.generated.h"

USTRUCT()
struct FShopTransactionCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FShopTransactionProducts productsReceived;

	UPROPERTY()
	FString transactionName;

	UPROPERTY()
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionCustomData) { return 0; }
