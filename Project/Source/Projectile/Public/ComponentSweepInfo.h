#pragma once

#include "CoreMinimal.h"
#include "ComponentSweepInfo.generated.h"

USTRUCT(BlueprintType)
struct FComponentSweepInfo
{
	GENERATED_BODY()

public:
	PROJECTILE_API FComponentSweepInfo();
};

FORCEINLINE uint32 GetTypeHash(const FComponentSweepInfo) { return 0; }
