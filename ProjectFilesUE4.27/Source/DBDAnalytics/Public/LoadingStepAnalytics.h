#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LoadingStepAnalytics.generated.h"

USTRUCT()
struct FLoadingStepAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString match_id;

	UPROPERTY()
	FString lobby_id;

	UPROPERTY()
	FString step_change_timestamp;

	UPROPERTY()
	FString loading_step;

	UPROPERTY()
	float time_on_prev_step;

	UPROPERTY()
	float total_load_time;

	UPROPERTY()
	FString current_map_name;

	UPROPERTY()
	FString transition_id;

public:
	DBDANALYTICS_API FLoadingStepAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingStepAnalytics) { return 0; }
