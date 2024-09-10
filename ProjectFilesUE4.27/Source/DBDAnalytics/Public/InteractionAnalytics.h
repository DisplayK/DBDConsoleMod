#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "InteractionAnalytics.generated.h"

USTRUCT()
struct FInteractionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EPlayerRole Role;

	UPROPERTY()
	int32 InterruptionSuccessCount;

	UPROPERTY()
	int32 InterruptionFailureCount;

	UPROPERTY()
	int32 InteractionPredictedCount;

	UPROPERTY()
	int32 InteractionAuthorizedCount;

	UPROPERTY()
	int32 InteractionDeniedByRaceConditionCount;

	UPROPERTY()
	int32 InteractionDeniedByTimeoutCount;

	UPROPERTY()
	int32 InteractionDeniedByErrorCount;

public:
	DBDANALYTICS_API FInteractionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionAnalytics) { return 0; }
