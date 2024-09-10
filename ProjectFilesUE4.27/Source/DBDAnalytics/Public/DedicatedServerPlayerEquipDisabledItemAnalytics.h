#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerPlayerEquipDisabledItemAnalytics.generated.h"

USTRUCT()
struct FDedicatedServerPlayerEquipDisabledItemAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerMirrorsId;

	UPROPERTY()
	FString EquipedDisabledItemIds;

public:
	DBDANALYTICS_API FDedicatedServerPlayerEquipDisabledItemAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedServerPlayerEquipDisabledItemAnalytics) { return 0; }
