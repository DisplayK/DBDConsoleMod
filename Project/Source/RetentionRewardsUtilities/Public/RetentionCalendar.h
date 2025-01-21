#pragma once

#include "CoreMinimal.h"
#include "EClaimType.h"
#include "UObject/NoExportTypes.h"
#include "RetentionReward.h"
#include "RetentionCalendar.generated.h"

USTRUCT()
struct FRetentionCalendar
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Id;

	UPROPERTY(Transient)
	FDateTime StartTime;

	UPROPERTY(Transient)
	FDateTime EndTime;

	UPROPERTY(Transient)
	EClaimType ClaimType;

	UPROPERTY(Transient)
	TArray<FRetentionReward> Rewards;

public:
	RETENTIONREWARDSUTILITIES_API FRetentionCalendar();
};

FORCEINLINE uint32 GetTypeHash(const FRetentionCalendar) { return 0; }
