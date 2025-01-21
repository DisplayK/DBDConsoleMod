#pragma once

#include "CoreMinimal.h"
#include "RedEnvelopeData.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "RedEnvelope.generated.h"

class URedEnvelopeInteraction;
class ULunar2022EventComponent;
class ADBDPlayerState;
class UInteractor;
class UChargeableComponent;
class UDBDOutlineComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UStaticMeshComponent;
class URedEnvelopeOutlineUpdateStrategy;

UCLASS()
class LUNAR2022_API ARedEnvelope : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_OwnerPlayerState, Transient)
	ADBDPlayerState* _ownerPlayerState;

private:
	UPROPERTY(ReplicatedUsing=OnRep_RedEnvelopeData)
	FRedEnvelopeData _redEnvelopeData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeInteraction* _redEnvelopeInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeInteraction* _redEnvelopeInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _redEnvelopeInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _redEnvelopeInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _redEnvelopeInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _redEnvelopeInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _redEnvelopeMesh;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _redEnvelopeInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _redEnvelopeInteractionSecondsToChargeKiller;

	UPROPERTY(Transient, Export)
	TWeakObjectPtr<ULunar2022EventComponent> _eventComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	URedEnvelopeOutlineUpdateStrategy* _redEnvelopeOutlineUpdateStrategy;

private:
	UFUNCTION()
	void OnRep_RedEnvelopeData();

	UFUNCTION()
	void OnRep_OwnerPlayerState();

public:
	UFUNCTION()
	void OnLocallyObservedChanged();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetBackgroundVFX(bool isOwner);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTriggerDisappearingVFX(const ADBDPlayer* interactingPlayer, bool isOwner, bool isJackpot);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionUpdate(const ADBDPlayer* interactingPlayer, const float chargePercent, bool isOwner);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStopped(const ADBDPlayer* interactingPlayer, bool isOwner);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionStart(const ADBDPlayer* interactingPlayer, bool isOwner);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddEmberEffect(const ADBDPlayer* owningPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ARedEnvelope();
};

FORCEINLINE uint32 GetTypeHash(const ARedEnvelope) { return 0; }
