#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WalletHandler.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UWalletHandler : public UObject
{
	GENERATED_BODY()

public:
	UWalletHandler();
};

FORCEINLINE uint32 GetTypeHash(const UWalletHandler) { return 0; }
