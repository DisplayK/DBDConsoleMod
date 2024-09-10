#pragma once

#include "CoreMinimal.h"
#include "BloodDecal.generated.h"

USTRUCT()
struct FBloodDecal
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FBloodDecal();
};

FORCEINLINE uint32 GetTypeHash(const FBloodDecal) { return 0; }
