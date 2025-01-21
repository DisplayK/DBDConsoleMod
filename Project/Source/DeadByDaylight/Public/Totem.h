#pragma once

#include "CoreMinimal.h"
#include "AIPointOfInterestTargetInterface.h"
#include "Interactable.h"
#include "ETotemState.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "Totem.generated.h"

class UChargeableInteractionDefinition;
class ATotem;
class UBlockableComponent;
class ADBDPlayer;
class USceneComponent;
class UTotemBoundPerk;
class UGameplayTagContainerComponent;
class UActivatorComponent;
class UAIPerceptionStimuliSourceComponent;
class ULocalPlayerTrackerComponent;
class UTotemOutlineUpdateStrategy;
class UInteractor;
class UAkComponent;

UCLASS()
class DEADBYDAYLIGHT_API ATotem : public AInteractable, public IAIPointOfInterestTargetInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBindingDelegate);

public:
	UPROPERTY(BlueprintAssignable)
	FBindingDelegate OnTotemBound;

protected:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _boonAuraRevealColor;

private:
	UPROPERTY(Replicated, Transient, Export)
	TArray<UTotemBoundPerk*> _boundPerks;

	UPROPERTY(ReplicatedUsing=OnRep_TotemState, Transient)
	ETotemState _totemState;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _baseBoonTotemBlessingRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _baseBoonTotemAuraRevealRange;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(Transient, Export)
	UBlockableComponent* _totemBlockableComponent;

	UPROPERTY(Transient, Export)
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(Export)
	UActivatorComponent* _activatorComponent;

	UPROPERTY(Export)
	UGameplayTagContainerComponent* _objectState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _interactionsAttachPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTotemOutlineUpdateStrategy* _totemOutlineUpdateStrategy;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canBeBoundToBoonPerk;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnUnblockTotemCosmetic(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnTotemStateChanged(const ETotemState oldTotemState, const ETotemState newTotemState);

private:
	UFUNCTION()
	void OnTotemBlockChanged();

	UFUNCTION()
	void OnRep_TotemState(const ETotemState oldTotemState);

	UFUNCTION()
	void OnLocallyObservedChanged();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCleanseTotem(ATotem* totem, const ETotemState oldTotemState);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBlockTotemCosmetic(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintPure)
	bool IsTotemBlockedForPlayer(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsBoundToPerk() const;

	UFUNCTION(BlueprintPure)
	ETotemState GetTotemState() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	UInteractor* GetMainInteractor() const;

public:
	UFUNCTION(BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetCleanseTotemInteraction() const;

	UFUNCTION(BlueprintPure)
	float GetBoonTotemBlessingRange() const;

	UFUNCTION(BlueprintPure)
	float GetBoonTotemAuraRevealRange() const;

	UFUNCTION(BlueprintPure)
	FLinearColor GetBoonAuraRevealColor() const;

	UFUNCTION(BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetBlessTotemInteraction() const;

	UFUNCTION(BlueprintImplementableEvent)
	UAkComponent* GetAkAudioComponent() const;

	UFUNCTION(BlueprintCallable)
	void Authority_UnbindFromPerk(UTotemBoundPerk* perk);

	UFUNCTION(BlueprintCallable)
	void Authority_UnbindFromAllPerks();

	UFUNCTION(BlueprintCallable)
	void Authority_Cleanse();

	UFUNCTION(BlueprintCallable)
	void Authority_BindToPerk(UTotemBoundPerk* perk);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATotem();
};

FORCEINLINE uint32 GetTypeHash(const ATotem) { return 0; }
