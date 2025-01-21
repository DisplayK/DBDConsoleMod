#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "DBDTunableRowHandle.h"
#include "UnstableRift.generated.h"

class UUnstableRiftInteraction;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UUnstableRiftOutlineStrategy;
class UStaticMeshComponent;
class UNearTrackedActorComponent;
class UUnstableRiftTeleportationComponent;
class UAkAudioEvent;

UCLASS()
class AUnstableRift : public ASpecialBehaviourInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isInitialized;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UUnstableRiftInteraction* _unstableRiftInteractionSurvivor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UUnstableRiftInteraction* _unstableRiftInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _unstableRiftInteractionChargeableSurvivor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _unstableRiftInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _unstableRiftInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _unstableRiftInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UUnstableRiftOutlineStrategy* _outlineStrategy;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _unstableRiftMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UUnstableRiftTeleportationComponent* _unstableRiftTeleportationComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UNearTrackedActorComponent* _nearTrackedActorComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _unstableRiftInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _unstableRiftInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _unstableRiftSecondsBeforeTeleport;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _offeringDirectionalAudioCueDistance;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _offeringAudioEvent;

private:
	UFUNCTION()
	void OnIntroCompleted();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportStart(const bool hadPlayerInteraction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportFinished();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTeleportDelayStarted();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ChangeUnstableVisibility(bool isVisible);

public:
	AUnstableRift();
};

FORCEINLINE uint32 GetTypeHash(const AUnstableRift) { return 0; }
