#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "StaticBlast.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UStaticBlast : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _staticBlastActivationDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _staticBlastMadnessGain;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _staticBlastSecondsToCharge;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StaticBlastShockSurvivors(const TArray<ACamperPlayer*>& survivorsToShock);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStaticBlastChargeEnd(ADBDPlayer* player, bool charged);

public:
	UStaticBlast();
};

FORCEINLINE uint32 GetTypeHash(const UStaticBlast) { return 0; }
