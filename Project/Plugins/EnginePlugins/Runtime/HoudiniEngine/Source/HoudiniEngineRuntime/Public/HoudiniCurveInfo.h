#pragma once

#include "CoreMinimal.h"
#include "HoudiniCurveInfo.generated.h"

USTRUCT()
struct FHoudiniCurveInfo
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniCurveInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniCurveInfo) { return 0; }
