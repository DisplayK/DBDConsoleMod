#pragma once

#include "CoreMinimal.h"
#include "AkSurfaceEdgeInfo.generated.h"

USTRUCT()
struct FAkSurfaceEdgeInfo
{
	GENERATED_BODY()

public:
	AKAUDIO_API FAkSurfaceEdgeInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkSurfaceEdgeInfo) { return 0; }
