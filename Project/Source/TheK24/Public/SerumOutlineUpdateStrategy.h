#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "SerumOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USerumOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	USerumOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USerumOutlineUpdateStrategy) { return 0; }
