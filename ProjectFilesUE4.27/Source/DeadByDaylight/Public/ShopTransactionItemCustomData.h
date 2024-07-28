#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemProducts.h"
#include "ShopTransactionItemCustomData.generated.h"

USTRUCT()
struct FShopTransactionItemCustomData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FShopTransactionItemProducts productsReceived;

	UPROPERTY()
	FString transactionName;

	UPROPERTY()
	FString transactionType;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemCustomData();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemCustomData) { return 0; }
