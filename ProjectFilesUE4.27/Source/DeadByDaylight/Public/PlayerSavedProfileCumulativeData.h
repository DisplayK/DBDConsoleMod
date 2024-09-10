#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSavedProfileCumulativeData.generated.h"

USTRUCT()
struct FPlayerSavedProfileCumulativeData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool FirstTimePlaying;

	UPROPERTY()
	int32 CumulativeMatches;

	UPROPERTY()
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY()
	int32 CumulativeMatchesAsKiller;

	UPROPERTY()
	int32 CumulativeMatchesAsSurvivorNoFriends;

	UPROPERTY()
	int32 CumulativeMatchesAsKillerNoFriends;

	UPROPERTY()
	FDateTime LastMatchTimestamp;

	UPROPERTY()
	FDateTime LastSessionTimestamp;

	UPROPERTY()
	int32 CumulativeSessions;

	UPROPERTY()
	FTimespan CumulativePlaytime;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileCumulativeData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileCumulativeData) { return 0; }
