#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TeleportToDemogorgonPortalInteraction.generated.h"

class UDemogorgonPortalTargetingComponent;
class ADBDPlayer;
class ASlasherPlayer;
class UDemogorgonPortalPlacerStateComponent;
class ADemogorgonPortal;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float TeleportToPortalSoundRange;

private:
	UPROPERTY(EditAnywhere)
	float _enterPortalPhaseDuration;

	UPROPERTY(EditAnywhere)
	float _cancelTeleportingPhaseDuration;

	UPROPERTY(Transient, Export)
	UDemogorgonPortalTargetingComponent* _portalTargetingComponent;

	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(Transient)
	ADemogorgonPortal* _startingPortal;

	UPROPERTY(Transient)
	ADemogorgonPortal* _targetedPortal;

	UPROPERTY(Transient)
	ADBDPlayer* _interactingPlayer;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTeleportInteractionCanceledVFX();

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* killer);

	UFUNCTION()
	void OnLocallyObservedChanged(const bool isKillerLocallyObserved);

public:
	UTeleportToDemogorgonPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTeleportToDemogorgonPortalInteraction) { return 0; }
