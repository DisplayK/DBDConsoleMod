#pragma once

#include "CoreMinimal.h"
#include "ArchiveRewardsData.generated.h"

USTRUCT()
struct FArchiveRewardsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 XpRequirement;

	UPROPERTY()
	int32 StarsEarnedPerLevel;

	UPROPERTY()
	FString PreStartDate;

	UPROPERTY()
	FString StartDate;

	UPROPERTY()
	FString EndDate;

	UPROPERTY()
	FString PostEndDate;

public:
	DEADBYDAYLIGHT_API FArchiveRewardsData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveRewardsData) { return 0; }
