#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LogMirrorsAnalytics.generated.h"

USTRUCT()
struct FLogMirrorsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString LogMirrors;

public:
	DBDANALYTICS_API FLogMirrorsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLogMirrorsAnalytics) { return 0; }
