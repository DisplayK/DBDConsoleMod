#pragma once

#include "CoreMinimal.h"
#include "DDosGameConfigDS.generated.h"

USTRUCT()
struct FDDosGameConfigDS
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool DDoSDetection;

	UPROPERTY()
	bool DDoSDetectionAnalytics;

public:
	DEADBYDAYLIGHT_API FDDosGameConfigDS();
};

FORCEINLINE uint32 GetTypeHash(const FDDosGameConfigDS) { return 0; }
