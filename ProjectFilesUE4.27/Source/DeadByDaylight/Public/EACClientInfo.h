#pragma once

#include "CoreMinimal.h"
#include "EACClientInfo.generated.h"

USTRUCT()
struct FEACClientInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FEACClientInfo();
};

FORCEINLINE uint32 GetTypeHash(const FEACClientInfo) { return 0; }
