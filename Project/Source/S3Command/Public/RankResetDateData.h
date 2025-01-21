#pragma once

#include "CoreMinimal.h"
#include "RankResetDateData.generated.h"

USTRUCT()
struct FRankResetDateData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 StartYear;

	UPROPERTY()
	int32 StartMonth;

	UPROPERTY()
	int32 ResetDay;

	UPROPERTY()
	int32 ResetHour;

public:
	S3COMMAND_API FRankResetDateData();
};

FORCEINLINE uint32 GetTypeHash(const FRankResetDateData) { return 0; }
