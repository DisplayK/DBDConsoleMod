#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourInteractable.h"
#include "EPumpkinType.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Pumpkin.generated.h"

class UPrimitiveComponent;
class UStatusEffect;
class ADBDPlayer;
class UInteractor;
class UChargeableComponent;
class UPumpkinInteraction;

UCLASS()
class HALLOWEEN2021_API APumpkin : public ASpecialBehaviourInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName _specialBehaviourId;

	UPROPERTY(BlueprintReadOnly, Replicated)
	EPumpkinType _pumpkinType;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPumpkinInteraction* _pumpkinInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPumpkinInteraction* _pumpkinInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _pumpkinInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _pumpkinInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _pumpkinInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _pumpkinInteractionZone;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorWhileInteracting;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinTreatChance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinTrickChance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinTreatDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinTrickDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinSpeedBoost;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pumpkinSpeedDebuff;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _pumpkinTreatEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _pumpkinTrickEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _pumpkinStatusEffect;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIntroCompleted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	APumpkin();
};

FORCEINLINE uint32 GetTypeHash(const APumpkin) { return 0; }
