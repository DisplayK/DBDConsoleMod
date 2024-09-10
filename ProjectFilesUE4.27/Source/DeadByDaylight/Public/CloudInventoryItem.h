#pragma once

#include "CoreMinimal.h"
#include "CloudInventoryItem.generated.h"

USTRUCT()
struct FCloudInventoryItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 DefinitionId;

	UPROPERTY()
	uint64 InstanceId;

public:
	DEADBYDAYLIGHT_API FCloudInventoryItem();
};

FORCEINLINE uint32 GetTypeHash(const FCloudInventoryItem) { return 0; }
