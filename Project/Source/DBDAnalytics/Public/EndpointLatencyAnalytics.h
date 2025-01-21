#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EndpointLatencyData.h"
#include "EndpointLatencyAnalytics.generated.h"

USTRUCT()
struct FEndpointLatencyAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FEndpointLatencyData> Endpoints;

public:
	DBDANALYTICS_API FEndpointLatencyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEndpointLatencyAnalytics) { return 0; }
