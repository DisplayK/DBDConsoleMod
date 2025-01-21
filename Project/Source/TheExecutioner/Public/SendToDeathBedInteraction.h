#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SendToDeathBedInteraction.generated.h"

class ACamperPlayer;
class ADeathBedInteractable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USendToDeathBedInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADeathBedInteractable* _deathBed;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SendCamperToDeathBed(ADeathBedInteractable* deathBed);

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_InteractionStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void FX_InteractionCancel();

public:
	USendToDeathBedInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USendToDeathBedInteraction) { return 0; }
