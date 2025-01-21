#pragma once

#include "CoreMinimal.h"
#include "BaseBannerData.h"
#include "MarketingBannerData.generated.h"

USTRUCT()
struct FMarketingBannerData: public FBaseBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FText SubTitleId;

	UPROPERTY(Transient)
	FString DeepLink;

public:
	DYNAMICCONTENT_API FMarketingBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FMarketingBannerData) { return 0; }
