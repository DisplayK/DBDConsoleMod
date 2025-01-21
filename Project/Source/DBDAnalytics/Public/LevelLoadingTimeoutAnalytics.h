#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingTimeoutAnalytics.generated.h"

USTRUCT()
struct FLevelLoadingTimeoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString MapName;

	UPROPERTY()
	int32 Seed;

	UPROPERTY()
	float TimeElapsed;

	UPROPERTY()
	float TimeElapsedInStep;

	UPROPERTY()
	FString LoadingStep;

public:
	DBDANALYTICS_API FLevelLoadingTimeoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLevelLoadingTimeoutAnalytics) { return 0; }
