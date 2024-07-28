#pragma once

#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "UniquelyIdentifiedAnalytic.generated.h"

USTRUCT()
struct FUniquelyIdentifiedAnalytic: public FBaseSingleStructIndexAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Version;

	UPROPERTY()
	FString Branch;

	UPROPERTY()
	FString Changelist;

	UPROPERTY()
	FString Configuration;

	UPROPERTY()
	FString MirrorsId;

	UPROPERTY()
	FString ClientId;

	UPROPERTY()
	FString Platform;

	UPROPERTY()
	FString BackendEnv;

	UPROPERTY()
	FString DataContentVersion;

public:
	DBDANALYTICS_API FUniquelyIdentifiedAnalytic();
};

FORCEINLINE uint32 GetTypeHash(const FUniquelyIdentifiedAnalytic) { return 0; }
