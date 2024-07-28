#pragma once

#include "CoreMinimal.h"
#include "ShopTransactionVirtualCurrencyParameters.generated.h"

USTRUCT()
struct FShopTransactionVirtualCurrencyParameters
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 virtualCurrencyAmount;

	UPROPERTY()
	FString virtualCurrencyName;

	UPROPERTY()
	FString virtualCurrencyType;

public:
	DEADBYDAYLIGHT_API FShopTransactionVirtualCurrencyParameters();
};

FORCEINLINE uint32 GetTypeHash(const FShopTransactionVirtualCurrencyParameters) { return 0; }
