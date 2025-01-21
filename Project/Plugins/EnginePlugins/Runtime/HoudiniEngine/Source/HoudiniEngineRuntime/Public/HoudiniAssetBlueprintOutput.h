#pragma once

#include "CoreMinimal.h"
#include "HoudiniOutputObject.h"
#include "HoudiniAssetBlueprintOutput.generated.h"

USTRUCT()
struct FHoudiniAssetBlueprintOutput
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 OutputIndex;

	UPROPERTY()
	FHoudiniOutputObject OutputObject;

public:
	HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniAssetBlueprintOutput) { return 0; }
