#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlineTransactionResponseBase.generated.h"

UCLASS()
class UOnlineTransactionResponseBase : public UObject
{
	GENERATED_BODY()

public:
	UOnlineTransactionResponseBase();
};

FORCEINLINE uint32 GetTypeHash(const UOnlineTransactionResponseBase) { return 0; }
