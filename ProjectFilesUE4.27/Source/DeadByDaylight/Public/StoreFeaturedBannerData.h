#pragma once

#include "CoreMinimal.h"
#include "ETextBannerPosition.h"
#include "StoreFeaturedBannerData.generated.h"

USTRUCT(BlueprintType)
struct FStoreFeaturedBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ImagePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssociatedDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssociatedCombinedItemId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString AssociatedCombinedOutfitId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ETextBannerPosition TextPosition;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedBannerData) { return 0; }
