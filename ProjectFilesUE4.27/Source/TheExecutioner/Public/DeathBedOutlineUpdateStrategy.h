#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DeathBedOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDeathBedOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UDeathBedOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDeathBedOutlineUpdateStrategy) { return 0; }
