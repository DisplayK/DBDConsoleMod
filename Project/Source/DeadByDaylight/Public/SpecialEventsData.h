#pragma once

#include "CoreMinimal.h"
#include "SPecialEventMiscRewards.h"
#include "RewardResponseItem.h"
#include "ScoreEventRewards.h"
#include "SpecialEventsData.generated.h"

USTRUCT()
struct FSpecialEventsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString EventId;

	UPROPERTY()
	TArray<FSPecialEventMiscRewards> MiscRewards;

	UPROPERTY(SkipSerialization)
	bool MiscRewards_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> OwnerRewards;

	UPROPERTY(SkipSerialization)
	bool OwnerRewards_IsSet;

	UPROPERTY()
	TArray<FScoreEventRewards> ScoreEventRewards;

	UPROPERTY(SkipSerialization)
	bool ScoreEventRewards_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventsData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventsData) { return 0; }
