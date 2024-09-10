#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MemoryUsageAnalytics.generated.h"

USTRUCT()
struct FMemoryUsageAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString GameFlowStep;

	UPROPERTY()
	int64 TotalPhysical;

	UPROPERTY()
	int64 TotalVirtual;

	UPROPERTY()
	int64 PeakUsedPhysical;

	UPROPERTY()
	int64 PeakUsedVirtual;

	UPROPERTY()
	int64 AvailablePhysical;

	UPROPERTY()
	int64 AvailableVirtual;

public:
	DBDANALYTICS_API FMemoryUsageAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMemoryUsageAnalytics) { return 0; }
