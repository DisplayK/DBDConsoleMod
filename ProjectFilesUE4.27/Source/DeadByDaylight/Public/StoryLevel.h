#pragma once

#include "CoreMinimal.h"
#include "ArchivesNodeDefinition.h"
#include "RewardResponseItem.h"
#include "StoryLevel.generated.h"

USTRUCT()
struct FStoryLevel
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FString> Start;

	UPROPERTY()
	TArray<FString> End;

	UPROPERTY()
	FString StartDate;

	UPROPERTY()
	TMap<FString, FArchivesNodeDefinition> Nodes;

	UPROPERTY()
	TArray<FRewardResponseItem> EndNodeRewards;

	UPROPERTY(SkipSerialization)
	bool EndNodeRewards_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> LevelRewards;

	UPROPERTY(SkipSerialization)
	bool LevelRewards_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> TaskRewards;

	UPROPERTY(SkipSerialization)
	bool TaskRewards_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> ChallengeRewards;

	UPROPERTY(SkipSerialization)
	bool ChallengeRewards_IsSet;

public:
	DEADBYDAYLIGHT_API FStoryLevel();
};

FORCEINLINE uint32 GetTypeHash(const FStoryLevel) { return 0; }
