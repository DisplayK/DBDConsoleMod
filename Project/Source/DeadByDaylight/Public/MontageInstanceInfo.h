#pragma once

#include "CoreMinimal.h"
#include "MontageInstanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FMontageInstanceInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FMontageInstanceInfo();
};

FORCEINLINE uint32 GetTypeHash(const FMontageInstanceInfo) { return 0; }
