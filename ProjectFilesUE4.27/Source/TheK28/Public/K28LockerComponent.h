#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28TeleportTarget.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "AnimationMontageDescriptor.h"
#include "CustomLockerOutlineOverride.h"
#include "K28LockerComponent.generated.h"

class AK28LockerCosmeticHelperActor;
class UBaseLockerInteraction;
class UK28SurvivorLockerAbductionInteraction;
class ASlasherPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK28LockerComponent : public UActorComponent, public IK28TeleportTarget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	AK28LockerCosmeticHelperActor* _lockerCosmeticHelper;

	UPROPERTY(EditDefaultsOnly)
	float WarningSoundTimeInterval;

	UPROPERTY(EditDefaultsOnly)
	float WarningSoundRange;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeToTriggerWarningReveal;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromHookedSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromKillerForTeleportationEligibility;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _lockerShakeTeleportAnimation;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _lockerTeleportCompletedAnimation;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _lockerTeleportationAbductionAnimation;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UBaseLockerInteraction>> _lockerInteractionClasses;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK28LockerCosmeticHelperActor> _lockerCosmeticHelperClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28SurvivorLockerAbductionInteraction> _lockerGrabOverridingClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UBaseLockerInteraction>> _lockerInteractionClassesToOverride;

	UPROPERTY(EditDefaultsOnly)
	TArray<FCustomLockerOutlineOverride> _lockedOutlineOverrides;

	UPROPERTY(EditDefaultsOnly)
	float _maxSqrtDistanceForCluster;

	UPROPERTY(EditDefaultsOnly)
	float _minDotProductForCluster;

	UPROPERTY(EditDefaultsOnly)
	FVector _lockerLineTraceOffset;

	UPROPERTY(EditDefaultsOnly)
	float _abductionCameraOffset;

	UPROPERTY(Transient)
	ASlasherPlayer* _killer;

public:
	UK28LockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockerComponent) { return 0; }
