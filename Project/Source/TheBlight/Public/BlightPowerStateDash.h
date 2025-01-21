#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "BlightPowerState.h"
#include "TunableStat.h"
#include "BlightPowerStateDash.generated.h"

class UCurveFloat;

UCLASS()
class UBlightPowerStateDash : public UBlightPowerState, public IViewRotationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _vectorInterpToSpeed;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _noDashTimeLimitSpeedCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _lookAngleToTurnRateCurveController;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _lookAngleToTurnRateCurveMouse;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _lookAngleToMaxTurnRateCurveMouse;

public:
	UBlightPowerStateDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateDash) { return 0; }
