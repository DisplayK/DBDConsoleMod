#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "GuardPullSurvivorOutOfLocker.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardPullSurvivorOutOfLocker : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	ACamperPlayer* _targetSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _healthySurvivorUpdateMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _injuredSurvivorUpdateMontage;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pullOutOfLockerDuration;

public:
	UGuardPullSurvivorOutOfLocker();
};

FORCEINLINE uint32 GetTypeHash(const UGuardPullSurvivorOutOfLocker) { return 0; }
