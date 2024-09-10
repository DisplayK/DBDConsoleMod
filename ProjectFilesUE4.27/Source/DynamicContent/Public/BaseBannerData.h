#pragma once

#include "CoreMinimal.h"
#include "BaseBannerData.generated.h"

USTRUCT()
struct FBaseBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Priority;

	UPROPERTY(Transient)
	FText TitleId;

	UPROPERTY(Transient)
	FString BannerContentId;

public:
	DYNAMICCONTENT_API FBaseBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseBannerData) { return 0; }
