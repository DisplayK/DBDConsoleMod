#pragma once

#include "CoreMinimal.h"
#include "VaultData.generated.h"

USTRUCT(BlueprintType)
struct FVaultData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FVaultData();
};

FORCEINLINE uint32 GetTypeHash(const FVaultData) { return 0; }
