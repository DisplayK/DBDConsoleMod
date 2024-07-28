#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "VoidEnergyOrb.generated.h"

class ADBDPlayer;

UCLASS()
class AVoidEnergyOrb : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _characterBoneName;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeHoverDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeToMoveToTarget;

	UPROPERTY(EditDefaultsOnly)
	float _timeBeforeCollectionToPlaySound;

	UPROPERTY(EditDefaultsOnly)
	float _minAmplitudeAllowed;

	UPROPERTY(EditDefaultsOnly)
	float _maxAmplitudeAllowed;

private:
	UFUNCTION(BlueprintCallable)
	void PlaceOrbInQueue();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbSpawned(ADBDPlayer* playerGivingOrbTo, const bool isLargeOrb);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbDisappearWithoutCollection(const bool isLargeOrb);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOrbDisappearWithCollection(ADBDPlayer* playerGivingOrbTo);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_DelayBeforeCollection(ADBDPlayer* playerGivingOrbTo);

public:
	AVoidEnergyOrb();
};

FORCEINLINE uint32 GetTypeHash(const AVoidEnergyOrb) { return 0; }
