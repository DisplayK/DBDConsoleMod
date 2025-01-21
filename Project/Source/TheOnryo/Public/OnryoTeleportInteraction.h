#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "StatProperty.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "OnryoTeleportInteraction.generated.h"

class UCurveFloat;
class ASlasherPlayer;
class AOnryoTelevision;
class UConeAroundDirectionCameraStrategy;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOnryoTeleportInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ASlasherPlayer* _cachedOwningKiller;

	UPROPERTY()
	AOnryoTelevision* _currentTargetTelevision;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportExitAnimDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportCancelledAnimDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _rangeToApplyCondemn;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _postTeleportSpeedDuration;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _postTeleportSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _scorePercent;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _postTeleportAlternateSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	float _offsetHeight;

	UPROPERTY(EditDefaultsOnly)
	float _raycastLength;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UConeAroundDirectionCameraStrategy> _cameraStrategyClass;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _cameraMaximumAngleFactorCurve;

	UPROPERTY(Transient)
	UConeAroundDirectionCameraStrategy* _cameraStrategy;

public:
	UOnryoTeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTeleportInteraction) { return 0; }
