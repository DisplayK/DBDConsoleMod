#pragma once

#include "CoreMinimal.h"
#include "AkSurfaceEdgeVerts.generated.h"

USTRUCT()
struct FAkSurfaceEdgeVerts
{
	GENERATED_BODY()

public:
	AKAUDIO_API FAkSurfaceEdgeVerts();
};

FORCEINLINE uint32 GetTypeHash(const FAkSurfaceEdgeVerts) { return 0; }
