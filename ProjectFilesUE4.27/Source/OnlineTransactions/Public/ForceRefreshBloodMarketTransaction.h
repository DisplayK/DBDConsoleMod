#pragma once

#include "CoreMinimal.h"
#include "OnlineTransaction.h"
#include "UObject/NoExportTypes.h"
#include "ForceRefreshBloodMarketTransaction.generated.h"

UCLASS()
class ONLINETRANSACTIONS_API UForceRefreshBloodMarketTransaction : public UObject, public IOnlineTransaction
{
	GENERATED_BODY()

public:
	UForceRefreshBloodMarketTransaction();
};

FORCEINLINE uint32 GetTypeHash(const UForceRefreshBloodMarketTransaction) { return 0; }
