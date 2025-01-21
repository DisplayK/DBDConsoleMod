#pragma once

#include "CoreMinimal.h"
#include "PerPlatformProperties.h"
#include "DBDCullDistanceSizePair.generated.h"

USTRUCT(BlueprintType)
struct FDBDCullDistanceSizePair
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformFloat Size;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat CullDistance;

public:
	GFXUTILITIES_API FDBDCullDistanceSizePair();
};

FORCEINLINE uint32 GetTypeHash(const FDBDCullDistanceSizePair) { return 0; }
