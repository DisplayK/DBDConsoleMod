#pragma once

#include "CoreMinimal.h"
#include "RankResetDateData.h"
#include "RankGlobalData.generated.h"

USTRUCT()
struct FRankGlobalData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 NoPipLossRankThreshold;

	UPROPERTY()
	int32 NoRankLossThreshold;

	UPROPERTY()
	int32 BaseTrialPips;

	UPROPERTY()
	int32 MaxPips;

	UPROPERTY()
	TArray<FRankResetDateData> RankResetDates;

public:
	S3COMMAND_API FRankGlobalData();
};

FORCEINLINE uint32 GetTypeHash(const FRankGlobalData) { return 0; }
