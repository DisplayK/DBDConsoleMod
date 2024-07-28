#pragma once

#include "CoreMinimal.h"
#include "TormentTrailPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FTormentTrailPointInfo
{
	GENERATED_BODY()

public:
	THEEXECUTIONER_API FTormentTrailPointInfo();
};

FORCEINLINE uint32 GetTypeHash(const FTormentTrailPointInfo) { return 0; }
