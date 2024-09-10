#pragma once

#include "CoreMinimal.h"
#include "RankThresholdsData.h"
#include "RankGroups.h"
#include "RankGlobalData.h"
#include "RankDefinitionData.generated.h"

USTRUCT()
struct FRankDefinitionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FRankThresholdsData RankThreshold;

	UPROPERTY()
	FRankGroups RankGroupDefinition;

	UPROPERTY()
	FRankGlobalData GlobalData;

public:
	S3COMMAND_API FRankDefinitionData();
};

FORCEINLINE uint32 GetTypeHash(const FRankDefinitionData) { return 0; }
