#pragma once

#include "CoreMinimal.h"
#include "PrestigeRewardItemAnalytic.generated.h"

USTRUCT()
struct FPrestigeRewardItemAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Type;

	UPROPERTY()
	FString Id;

public:
	DBDANALYTICS_API FPrestigeRewardItemAnalytic();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeRewardItemAnalytic) { return 0; }
