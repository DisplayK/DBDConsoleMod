#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "HeartbeatAnalytics.generated.h"

USTRUCT()
struct FHeartbeatAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString BeatTime;

public:
	DBDANALYTICS_API FHeartbeatAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHeartbeatAnalytics) { return 0; }
