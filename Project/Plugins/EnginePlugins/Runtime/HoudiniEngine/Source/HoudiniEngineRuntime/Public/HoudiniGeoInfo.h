#pragma once

#include "CoreMinimal.h"
#include "HoudiniGeoInfo.generated.h"

USTRUCT()
struct FHoudiniGeoInfo
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniGeoInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGeoInfo) { return 0; }
