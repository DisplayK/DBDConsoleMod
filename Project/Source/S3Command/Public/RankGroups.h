#pragma once

#include "CoreMinimal.h"
#include "RankGroupData.h"
#include "RankGroups.generated.h"

USTRUCT()
struct FRankGroups
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FRankGroupData> KillerRankGroup;

	UPROPERTY()
	TArray<FRankGroupData> SurvivorRankGroup;

public:
	S3COMMAND_API FRankGroups();
};

FORCEINLINE uint32 GetTypeHash(const FRankGroups) { return 0; }
