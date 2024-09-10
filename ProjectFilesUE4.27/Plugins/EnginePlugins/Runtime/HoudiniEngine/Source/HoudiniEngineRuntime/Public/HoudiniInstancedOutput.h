#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInstancedOutput.generated.h"

class UObject;

USTRUCT()
struct FHoudiniInstancedOutput
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TSoftObjectPtr<UObject> OriginalObject;

	UPROPERTY()
	int32 OriginalObjectIndex;

	UPROPERTY()
	TArray<FTransform> OriginalTransforms;

	UPROPERTY()
	TArray<TSoftObjectPtr<UObject>> VariationObjects;

	UPROPERTY()
	TArray<FTransform> VariationTransformOffsets;

	UPROPERTY()
	TArray<int32> TransformVariationIndices;

	UPROPERTY()
	TArray<int32> OriginalInstanceIndices;

	UPROPERTY()
	bool bChanged;

	UPROPERTY()
	bool bStale;

public:
	HOUDINIENGINERUNTIME_API FHoudiniInstancedOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniInstancedOutput) { return 0; }
