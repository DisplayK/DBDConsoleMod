#pragma once

#include "CoreMinimal.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.generated.h"

USTRUCT()
struct FHoudiniPDGWorkResultObjectBakedOutput
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FHoudiniBakedOutput> BakedOutputs;

public:
	HOUDINIENGINERUNTIME_API FHoudiniPDGWorkResultObjectBakedOutput();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniPDGWorkResultObjectBakedOutput) { return 0; }
