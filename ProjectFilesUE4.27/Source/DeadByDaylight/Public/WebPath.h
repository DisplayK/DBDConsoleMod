#pragma once

#include "CoreMinimal.h"
#include "WebPath.generated.h"

USTRUCT()
struct FWebPath
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FWebPath();
};

FORCEINLINE uint32 GetTypeHash(const FWebPath) { return 0; }
