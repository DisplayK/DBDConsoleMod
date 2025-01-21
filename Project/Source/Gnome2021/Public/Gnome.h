#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "UObject/NoExportTypes.h"
#include "Gnome.generated.h"

class UGnomeInteraction;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class USkeletalMeshComponent;

UCLASS()
class AGnome : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGnomeInteraction* _gnomeInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGnomeInteraction* _gnomeInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _gnomeInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _gnomeInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _gnomeInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _gnomeInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _gnomeSkeletalMesh;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gnomeInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gnomeInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorWhileInteracting;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

public:
	AGnome();
};

FORCEINLINE uint32 GetTypeHash(const AGnome) { return 0; }
