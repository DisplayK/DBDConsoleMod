#pragma once

#include "CoreMinimal.h"
#include "ArchivesObjective.h"
#include "ArchivesNodeCoordinates.h"
#include "RewardResponseItem.h"
#include "ArchivesNodeDefinition.generated.h"

USTRUCT()
struct FArchivesNodeDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ClientInfoId;

	UPROPERTY()
	FArchivesNodeCoordinates Coordinates;

	UPROPERTY()
	TArray<FString> Neighbors;

	UPROPERTY()
	FString NodeType;

	UPROPERTY()
	TMap<FString, FArchivesObjective> Objectives;

	UPROPERTY(SkipSerialization)
	bool Objectives_IsSet;

	UPROPERTY()
	TArray<FString> Journal;

	UPROPERTY(SkipSerialization)
	bool Journal_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> Reward;

	UPROPERTY(SkipSerialization)
	bool Reward_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesNodeDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesNodeDefinition) { return 0; }
