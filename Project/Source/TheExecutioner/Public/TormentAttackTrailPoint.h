#pragma once

#include "CoreMinimal.h"
#include "BaseTormentTrailPoint.h"
#include "DBDTunableRowHandle.h"
#include "TormentAttackTrailPoint.generated.h"

class USplineComponent;

UCLASS()
class ATormentAttackTrailPoint : public ABaseTormentTrailPoint
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _attackPointDelayToEnableCollision;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void DisplayTrailSplineMesh(const USplineComponent* splinemesh, const int32 indexInTrail);

public:
	ATormentAttackTrailPoint();
};

FORCEINLINE uint32 GetTypeHash(const ATormentAttackTrailPoint) { return 0; }
