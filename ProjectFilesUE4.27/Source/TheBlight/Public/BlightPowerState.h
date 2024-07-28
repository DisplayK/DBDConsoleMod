#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "BlightPowerState.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, Abstract)
class UBlightPowerState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _stateSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _stateDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cameraPitchRecenterTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wallDashCollisionRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wallDashCollisionHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wallDashCollisionRange;

	UPROPERTY(EditDefaultsOnly)
	bool _playerCanCancelEarly;

	UPROPERTY(EditDefaultsOnly)
	bool _displayCollisionIndicator;

public:
	UFUNCTION(BlueprintPure)
	float GetStateDuration() const;

public:
	UBlightPowerState();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerState) { return 0; }
