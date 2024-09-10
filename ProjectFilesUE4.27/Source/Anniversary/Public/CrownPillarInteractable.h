#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "CrownPillarInteractable.generated.h"

class UCrownPickupInteraction;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UNearTrackedActorComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UStaticMeshComponent;
class UCrownPillarOutlineUpdateStrategy;

UCLASS()
class ANNIVERSARY_API ACrownPillarInteractable : public ARespawnableInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _crownPillarInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _crownPillarInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _offeringEnabledAuraVisibilityDistance;

private:
	UPROPERTY(EditDefaultsOnly)
	FName _anniversaryOfferingTag;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCrownPickupInteraction* _crownPillarInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCrownPickupInteraction* _crownPillarInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _crownPillarInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _crownPillarInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _crownPillarInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _crownPillarInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _crownPillarStaticMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UNearTrackedActorComponent* _nearTrackedActorComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UCrownPillarOutlineUpdateStrategy* _crownPillarOutlineUpdateStrategy;

private:
	UFUNCTION()
	void Local_OnIntroCompleted();

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocallyObservedPlayerEquippedWithAnniversaryOffering() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCancelled();

public:
	ACrownPillarInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ACrownPillarInteractable) { return 0; }
