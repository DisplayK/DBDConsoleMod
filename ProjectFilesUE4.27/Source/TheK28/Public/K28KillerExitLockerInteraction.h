#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "EK28ExitLockerCameraBehaviour.h"
#include "DBDTunableRowHandle.h"
#include "K28KillerExitLockerInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerExitLockerInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	EK28ExitLockerCameraBehaviour _cameraBehaviour;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeSearchLockerInteractionBlocked;

	UPROPERTY(EditDefaultsOnly)
	float _minDotProductFadeOutThreshold;

	UPROPERTY(EditDefaultsOnly)
	float _rotationMaxTime;

	UPROPERTY(EditDefaultsOnly)
	float _fadeOutTime;

	UPROPERTY(EditDefaultsOnly)
	float _fovChangeTime;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _fovChangeTeleportationCurve;

public:
	UK28KillerExitLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerExitLockerInteraction) { return 0; }
