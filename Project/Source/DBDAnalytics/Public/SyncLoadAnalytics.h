#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SyncLoadAnalytics.generated.h"

USTRUCT()
struct FSyncLoadAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString AssetName;

	UPROPERTY()
	float LoadTimeMilliseconds;

	UPROPERTY()
	FString DeviceProfileName;

	UPROPERTY()
	FString BuildConfiguration;

	UPROPERTY()
	int32 ChangelistNumber;

	UPROPERTY()
	FString MapName;

	UPROPERTY()
	FString GameFlowContext;

public:
	DBDANALYTICS_API FSyncLoadAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSyncLoadAnalytics) { return 0; }
