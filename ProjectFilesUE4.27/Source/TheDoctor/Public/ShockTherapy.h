#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "ShockTherapy.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AShockTherapyAOE;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UShockTherapy : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AShockTherapyAOE> _shockTherapyConeAOEClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AShockTherapyAOE> _shockTherapyLineAOEClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AShockTherapyAOE> _shockTherapyCircleAOEClass;

	UPROPERTY(Transient)
	TArray<AShockTherapyAOE*> _shockTherapyZones;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _shockTherapyDetonationDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shockTherapyBlockActionDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shockTherapySecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _shockTherapyBlockAllInteractionsEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shockTherapyMadnessGain;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DetonateShockTherapy(const TArray<ACamperPlayer*>& shockedSurvivors, float madnessToAdd);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ActivateShockTherapyAOE(const FTransform& shockTherapyZoneTransform);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnShockTherapyChargeEnd(ADBDPlayer* player, bool charged);

public:
	UShockTherapy();
};

FORCEINLINE uint32 GetTypeHash(const UShockTherapy) { return 0; }
