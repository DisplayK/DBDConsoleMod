#pragma once

#include "CoreMinimal.h"
#include "K25ChainTraceData.generated.h"

USTRUCT()
struct FK25ChainTraceData
{
	GENERATED_BODY()

public:
	THEK25_API FK25ChainTraceData();
};

FORCEINLINE uint32 GetTypeHash(const FK25ChainTraceData) { return 0; }
