#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogPresencePluginAnalytics.generated.h"

USTRUCT()
struct FLogPresencePluginAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Context;

	UPROPERTY()
	FString Message;

public:
	DBDANALYTICS_API FLogPresencePluginAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLogPresencePluginAnalytics) { return 0; }
