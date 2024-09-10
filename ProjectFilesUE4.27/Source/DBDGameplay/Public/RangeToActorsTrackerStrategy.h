#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "RangeToActorsTrackerStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class URangeToActorsTrackerStrategy : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _range;

private:
	UFUNCTION()
	void OnInRangeToTrackedActorsChanged(const bool inRange);

public:
	URangeToActorsTrackerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URangeToActorsTrackerStrategy) { return 0; }
