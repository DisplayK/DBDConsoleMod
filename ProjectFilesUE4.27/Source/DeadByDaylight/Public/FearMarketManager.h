#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FearMarketItemInstance.h"
#include "FearMarketOfferingInstance.h"
#include "FearMarketManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API UFearMarketManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FFearMarketItemInstance PendingPurchaseFearMarketItem;

private:
	UPROPERTY()
	FFearMarketOfferingInstance _existingFearMarket;

	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

private:
	UFUNCTION()
	void ReceivedFearMarketData(bool success);

public:
	UFearMarketManager();
};

FORCEINLINE uint32 GetTypeHash(const UFearMarketManager) { return 0; }
