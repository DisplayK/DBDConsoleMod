#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EACAnalytics.generated.h"

USTRUCT()
struct FEACAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString LogMessage;

public:
	DBDANALYTICS_API FEACAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEACAnalytics) { return 0; }
