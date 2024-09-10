#pragma once

#include "CoreMinimal.h"
#include "EndpointLatencyData.generated.h"

USTRUCT()
struct FEndpointLatencyData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	uint32 Latency;

public:
	DBDANALYTICS_API FEndpointLatencyData();
};

FORCEINLINE uint32 GetTypeHash(const FEndpointLatencyData) { return 0; }
