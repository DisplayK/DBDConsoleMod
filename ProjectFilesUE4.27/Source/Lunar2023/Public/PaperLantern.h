#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "RespawnableInteractable.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "PaperLantern.generated.h"

class UStaticMeshComponent;
class UPaperLanternInteraction;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPrimitiveComponent;
class UStatusEffect;
class ADBDPlayer;

UCLASS()
class LUNAR2023_API APaperLantern : public ARespawnableInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPaperLanternInteraction* _paperLanternInteractionSurvivor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPaperLanternInteraction* _paperLanternInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _paperLanternInteractionChargeableSurvivor;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _paperLanternInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _paperLanternInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _paperLanternInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _paperLanternStaticMesh;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternInteractionSecondsToChargeSurvivor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternSpeedBoost;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternVaultSpeedBoost;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternBuffDuration;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorWhileInteracting;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _paperLanternSpeedEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _paperLanternVaultSpeedEffect;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCancelled(ADBDPlayer* interactingPlayer);

public:
	APaperLantern();
};

FORCEINLINE uint32 GetTypeHash(const APaperLantern) { return 0; }
