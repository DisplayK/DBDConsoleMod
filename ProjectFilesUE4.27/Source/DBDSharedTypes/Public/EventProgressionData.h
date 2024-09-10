#pragma once

#include "CoreMinimal.h"
#include "EventProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FEventProgressionData
{
	GENERATED_BODY()

public:
	DBDSHAREDTYPES_API FEventProgressionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventProgressionData) { return 0; }
