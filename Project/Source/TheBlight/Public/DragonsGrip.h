#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "DragonsGrip.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDragonsGrip : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	AGenerator* _kickedGenerator;

	UPROPERTY(EditDefaultsOnly)
	float _activationDuration;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	float _exposedEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	bool _onlyExposeFirstSurvivor;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _loudNoiseRange;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnRevealSurvivor(ADBDPlayer* instigator);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnRevealSurvivor(ADBDPlayer* survivor);

public:
	UDragonsGrip();
};

FORCEINLINE uint32 GetTypeHash(const UDragonsGrip) { return 0; }
