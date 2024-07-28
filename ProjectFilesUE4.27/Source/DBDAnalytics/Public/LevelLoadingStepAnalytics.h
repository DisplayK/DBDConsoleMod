#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LevelLoadingStepAnalytics.generated.h"

USTRUCT()
struct FLevelLoadingStepAnalytics: public FUniquelyIdentifiedAnalytic
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

	UPROPERTY()
	bool IsTimeout;

public:
	DBDANALYTICS_API FLevelLoadingStepAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLevelLoadingStepAnalytics) { return 0; }
