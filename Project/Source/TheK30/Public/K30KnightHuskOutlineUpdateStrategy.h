#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "K30KnightHuskOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK30KnightHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UK30KnightHuskOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK30KnightHuskOutlineUpdateStrategy) { return 0; }
