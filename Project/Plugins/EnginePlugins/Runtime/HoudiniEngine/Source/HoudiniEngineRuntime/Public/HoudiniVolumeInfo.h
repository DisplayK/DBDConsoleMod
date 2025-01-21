#pragma once

#include "CoreMinimal.h"
#include "HoudiniVolumeInfo.generated.h"

USTRUCT()
struct FHoudiniVolumeInfo
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniVolumeInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniVolumeInfo) { return 0; }
