#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementInstance.h"
#include "K29SurvivorThrowableComponent.generated.h"

class ACamperPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK29_API UK29SurvivorThrowableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _throwDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _capsuleHeightOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumThrowDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _throwMovementSpeedInCmPerSecond;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _movingDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _throwDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _throwLedgeDropDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _throwLedgeDropTime;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _throwMovementSpeedMultiplierCurve;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _throwAccelerationMultiplier;

private:
	UFUNCTION(Server, Reliable)
	void Server_EndThrow();

	UFUNCTION(Server, Reliable)
	void Server_CancelThrowOnOtherSurvivorCollision(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision);

	UFUNCTION()
	void OnWalkingAllowedAfterFall();

	UFUNCTION()
	void OnThrowTimeout();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCurrentThrow(FK29GuidedMovementInstance throwInstance, ACamperPlayer* thrownSurvivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_InstantlyLetGoSurvivor(const bool hasDealtDamage);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_EndThrow();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_CancelThrowOnOtherSurvivorCollision(const FVector collisionPosition, ACamperPlayer* survivorUsedAsCollision);

	UFUNCTION()
	void EndThrow();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorUsedAsCollision(ACamperPlayer* survivor);

public:
	UK29SurvivorThrowableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorThrowableComponent) { return 0; }
