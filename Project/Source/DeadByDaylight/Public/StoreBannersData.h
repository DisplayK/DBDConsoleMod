#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "StoreFeaturedBannerData.h"
#include "EStoreBannerLocation.h"
#include "StoreBannersData.generated.h"

USTRUCT(BlueprintType)
struct FStoreBannersData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName BannerId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FStoreFeaturedBannerData BannerData;

	UPROPERTY(EditAnywhere)
	bool UseAsDefault;

	UPROPERTY(EditAnywhere)
	EStoreBannerLocation DefaultLocation;

public:
	DEADBYDAYLIGHT_API FStoreBannersData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreBannersData) { return 0; }
