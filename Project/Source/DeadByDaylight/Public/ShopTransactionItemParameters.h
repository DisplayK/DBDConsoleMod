#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionItemParameters.generated.h"

USTRUCT()
struct FShopTransactionItemParameters
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 itemAmount;

	UPROPERTY()
	FString itemName;

	UPROPERTY()
	FString itemType;

public:
	DEADBYDAYLIGHT_API FShopTransactionItemParameters();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionItemParameters) { return 0; }
