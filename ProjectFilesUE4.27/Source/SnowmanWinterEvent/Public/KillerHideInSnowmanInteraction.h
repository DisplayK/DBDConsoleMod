#pragma once

#include "CoreMinimal.h"
#include "HideInSnowmanInteraction.h"
#include "DBDTunableRowHandle.h"
#include "KillerHideInSnowmanInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKillerHideInSnowmanInteraction : public UHideInSnowmanInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	bool _shouldAttackOutOfSnowman;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minimumTimeToAttackAndExit;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _mousePitchScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _mouseYawScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _gamepadPitchScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _gamepadYawScaleMultiplier;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _gamepadPitchCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _gamepadYawCurve;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _rotationScaleAdjustmentTime;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKillerHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UKillerHideInSnowmanInteraction) { return 0; }
