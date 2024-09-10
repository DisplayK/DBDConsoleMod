#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "HatchetLauncher.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHatchetLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FRotator _angleOffset;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _angleOffsetCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _speedCurve;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _hatchetSpeedWhenThrowFullyCharged;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _hatchetPitchCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetMinAngleOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetMaxAngleOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetMinSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetMaxSpeed;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetLaunchPitchMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _hatchetLaunchPitchMax;

protected:
	UFUNCTION(BlueprintPure)
	bool IsLaunchedHatchetFullyCharged() const;

public:
	UHatchetLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UHatchetLauncher) { return 0; }
