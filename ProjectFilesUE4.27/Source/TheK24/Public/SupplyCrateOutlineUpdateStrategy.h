#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "SupplyCrateOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	USupplyCrateOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USupplyCrateOutlineUpdateStrategy) { return 0; }
