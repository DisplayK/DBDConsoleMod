#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "TrailPointOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTrailPointOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _tormentTrailRevealDistance;

public:
	UTrailPointOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTrailPointOutlineUpdateStrategy) { return 0; }
