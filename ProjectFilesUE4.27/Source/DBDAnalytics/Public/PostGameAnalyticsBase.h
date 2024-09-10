#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PostGameAnalyticsBase.generated.h"

USTRUCT()
struct FPostGameAnalyticsBase: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString KrakenMatchId;

	UPROPERTY()
	FString GameMode;

	UPROPERTY()
	int32 BloodwebPoints;

	UPROPERTY()
	float GameDuration;

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	int32 Rank;

	UPROPERTY()
	int32 PipsGainedOrLost;

	UPROPERTY()
	FString MatchEndReason;

	UPROPERTY()
	bool IsTutorialBotMatch;

public:
	DBDANALYTICS_API FPostGameAnalyticsBase();
};

FORCEINLINE uint32 GetTypeHash(const FPostGameAnalyticsBase) { return 0; }
