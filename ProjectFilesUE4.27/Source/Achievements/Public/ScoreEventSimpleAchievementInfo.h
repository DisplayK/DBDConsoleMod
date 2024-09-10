#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "ScoreEventSimpleAchievementInfo.generated.h"

USTRUCT(BlueprintType)
struct FScoreEventSimpleAchievementInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EDBDScoreTypes> scoreTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> profileStats;

public:
	ACHIEVEMENTS_API FScoreEventSimpleAchievementInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScoreEventSimpleAchievementInfo) { return 0; }
