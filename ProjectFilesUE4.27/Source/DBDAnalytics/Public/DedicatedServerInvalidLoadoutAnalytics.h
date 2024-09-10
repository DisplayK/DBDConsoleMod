#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerInvalidLoadoutAnalytics.generated.h"

USTRUCT()
struct FDedicatedServerInvalidLoadoutAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerMirrorsId;

	UPROPERTY()
	FString ItemType;

	UPROPERTY()
	FString Items;

	UPROPERTY()
	FString Reason;

	UPROPERTY()
	FString PlayerRole;

	UPROPERTY()
	int32 CharacterId;

public:
	DBDANALYTICS_API FDedicatedServerInvalidLoadoutAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerInvalidLoadoutAnalytics) { return 0; }
