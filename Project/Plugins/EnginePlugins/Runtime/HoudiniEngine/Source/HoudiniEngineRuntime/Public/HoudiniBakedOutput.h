#pragma once

#include "CoreMinimal.h"
#include "HoudiniBakedOutputObject.h"
#include "HoudiniBakedOutputObjectIdentifier.h"
#include "HoudiniBakedOutput.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniBakedOutput
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;

public:
	HOUDINIENGINERUNTIME_API FHoudiniBakedOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniBakedOutput) { return 0; }
