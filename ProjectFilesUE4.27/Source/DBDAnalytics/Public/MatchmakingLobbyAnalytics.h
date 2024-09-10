#pragma once

#include "CoreMinimal.h"
#include "MatchmakingAnalytics.h"
#include "MatchmakingLobbyAnalytics.generated.h"

USTRUCT()
struct FMatchmakingLobbyAnalytics: public FMatchmakingAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString LobbyStartTime;

	UPROPERTY()
	FString LobbyEndTime;

	UPROPERTY()
	FString LobbyResult;

	UPROPERTY()
	FString KrakenMatchId;

public:
	DBDANALYTICS_API FMatchmakingLobbyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingLobbyAnalytics) { return 0; }
