#pragma once

#include "CoreMinimal.h"
#include "ShopWalletUpdate.generated.h"

USTRUCT(BlueprintType)
struct FShopWalletUpdate
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FShopWalletUpdate();
};

FORCEINLINE uint32 GetTypeHash(const FShopWalletUpdate) { return 0; }
