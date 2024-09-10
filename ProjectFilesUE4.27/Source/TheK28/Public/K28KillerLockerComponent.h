#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28KillerLockerState.h"
#include "Templates/SubclassOf.h"
#include "K28KillerLockerComponent.generated.h"

class ADBDPlayer;
class UCurveFloat;
class AAnimationFollowerActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28KillerLockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _targetLockerFOV;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _fovChangeTeleportationCurve;

	UPROPERTY(EditDefaultsOnly)
	float _fovChangeTime;

	UPROPERTY(ReplicatedUsing=OnRep_LockerState_Replicated, Transient)
	FK28KillerLockerState _lockerState_replicated;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAnimationFollowerActor> _extraArmsAnimationFollowerActorClass;

	UPROPERTY(Transient)
	AAnimationFollowerActor* _extraArmsAnimationFollowerActor;

	UPROPERTY(EditDefaultsOnly)
	float _timeBetweenAttemptTrigger;

private:
	UFUNCTION()
	void OnRep_LockerState_Replicated();

	UFUNCTION()
	void OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28KillerLockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerLockerComponent) { return 0; }
