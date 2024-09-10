#pragma once

#include "CoreMinimal.h"
#include "RankGroupData.generated.h"

USTRUCT()
struct FRankGroupData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<double> EmblemThreshold;

	UPROPERTY()
	int32 RankThreshold;

public:
	S3COMMAND_API FRankGroupData();
};

FORCEINLINE uint32 GetTypeHash(const FRankGroupData) { return 0; }
