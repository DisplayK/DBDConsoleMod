#pragma once

#include "CoreMinimal.h"
#include "BloodOrbDropParams.generated.h"

USTRUCT()
struct FBloodOrbDropParams
{
	GENERATED_BODY()

public:
	THEONI_API FBloodOrbDropParams();
};

FORCEINLINE uint32 GetTypeHash(const FBloodOrbDropParams) { return 0; }
