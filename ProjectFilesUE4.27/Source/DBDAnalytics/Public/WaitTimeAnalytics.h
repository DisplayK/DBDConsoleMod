#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "WaitTimeAnalytics.generated.h"

USTRUCT()
struct FWaitTimeAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float EnterLobbyWaitTime;

	UPROPERTY()
	float EnterMatchWaitTime;

	UPROPERTY()
	FString MatchWaitStartUtc;

	UPROPERTY()
	FString MatchWaitStopUtc;

	UPROPERTY()
	FString LobbyWaitStartUtc;

	UPROPERTY()
	FString LobbyWaitStopUtc;

	UPROPERTY()
	FString LobbyWaitStopReason;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	EGameType GameMode;

	UPROPERTY()
	EPlayerRole Role;

	UPROPERTY()
	int32 PartySize;

	UPROPERTY()
	int32 Rank;

	UPROPERTY()
	int32 RankDifference;

	UPROPERTY()
	int32 DaysSinceReset;

public:
	DBDANALYTICS_API FWaitTimeAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FWaitTimeAnalytics) { return 0; }
