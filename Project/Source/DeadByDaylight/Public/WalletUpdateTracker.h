#pragma once

#include "CoreMinimal.h"
#include "WalletUpdateTracker.generated.h"

USTRUCT()
struct FWalletUpdateTracker
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<FString, int32> _walletChangeMap;

public:
	DEADBYDAYLIGHT_API FWalletUpdateTracker();
};

FORCEINLINE uint32 GetTypeHash(const FWalletUpdateTracker) { return 0; }
