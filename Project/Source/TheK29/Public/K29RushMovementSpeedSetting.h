#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "K29RushMovementSpeedSetting.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK29RushMovementSpeedSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	bool InUse;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* SpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle PitchTurnRateMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle YawTurnRateLimit;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle YawTurnRateMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat Duration;

	UPROPERTY(EditDefaultsOnly)
	bool IsMovementAllowed;

public:
	THEK29_API FK29RushMovementSpeedSetting();
};

FORCEINLINE uint32 GetTypeHash(const FK29RushMovementSpeedSetting) { return 0; }
