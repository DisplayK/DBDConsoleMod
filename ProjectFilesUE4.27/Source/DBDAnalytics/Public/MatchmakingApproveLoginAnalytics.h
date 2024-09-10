#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingApproveLoginAnalytics.generated.h"

USTRUCT()
struct FMatchmakingApproveLoginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 CurrentPlayers;

	UPROPERTY()
	bool Success;

	UPROPERTY()
	FString Error;

	UPROPERTY()
	FString JoiningUserID;

public:
	DBDANALYTICS_API FMatchmakingApproveLoginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingApproveLoginAnalytics) { return 0; }
