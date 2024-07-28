#pragma once

#include "CoreMinimal.h"
#include "HoudiniObjectInfo.generated.h"

USTRUCT()
struct FHoudiniObjectInfo
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniObjectInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniObjectInfo) { return 0; }
