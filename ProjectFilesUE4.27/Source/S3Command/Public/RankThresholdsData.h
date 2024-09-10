#pragma once

#include "CoreMinimal.h"
#include "RankThresholdsData.generated.h"

USTRUCT()
struct FRankThresholdsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<int32> PipsRequired;

	UPROPERTY()
	TArray<int32> ResetStartingPips;

	UPROPERTY(SkipSerialization)
	bool ResetStartingPips_IsSet;

public:
	S3COMMAND_API FRankThresholdsData();
};

FORCEINLINE uint32 GetTypeHash(const FRankThresholdsData) { return 0; }
