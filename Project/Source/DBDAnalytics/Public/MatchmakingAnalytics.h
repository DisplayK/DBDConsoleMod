#pragma once

#include "CoreMinimal.h"
#include "EGameType.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "MatchmakingAnalytics.generated.h"

USTRUCT()
struct FMatchmakingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchmakingSessionGuid;

	UPROPERTY()
	EPlayerRole PlayerRole;

	UPROPERTY()
	EGameType GameType;

	UPROPERTY()
	int32 PartySize;

	UPROPERTY()
	int32 Rank;

	UPROPERTY()
	FString CharacterName;

public:
	DBDANALYTICS_API FMatchmakingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingAnalytics) { return 0; }
