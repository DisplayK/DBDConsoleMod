#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShopManager.generated.h"

class URecommendationsGenerator;
class UDBDGameInstance;
class UBannerDataProcessor;

UCLASS()
class DEADBYDAYLIGHT_API UShopManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(Transient)
	UBannerDataProcessor* _bannerDataProcessor;

	UPROPERTY(Transient)
	URecommendationsGenerator* _recommendationsGenerator;

public:
	UShopManager();
};

FORCEINLINE uint32 GetTypeHash(const UShopManager) { return 0; }
