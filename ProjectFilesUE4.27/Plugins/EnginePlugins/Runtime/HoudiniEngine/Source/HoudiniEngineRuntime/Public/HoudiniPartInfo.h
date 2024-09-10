#pragma once

#include "CoreMinimal.h"
#include "HoudiniPartInfo.generated.h"

USTRUCT()
struct FHoudiniPartInfo
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniPartInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniPartInfo) { return 0; }
