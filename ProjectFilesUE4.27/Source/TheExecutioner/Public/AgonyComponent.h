#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "SurvivorStatusInterface.h"
#include "TormentAttackDamageCooldownInterface.h"
#include "GameEventData.h"
#include "AgonyDisplayFxEvent.h"
#include "AgonyComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAgonyComponent : public UActorComponent, public ISurvivorStatusInterface, public ITormentAttackDamageCooldownInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInAgony)
	FTagStateBool _isInAgony;

	UPROPERTY(Replicated)
	FTagStateBool _isAgonyMoriable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _agonyNumberOfHookForMiniMori;

	UPROPERTY(Replicated)
	bool _inAttackTrailDamageCooldown;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _attackTrailDamageCooldownTime;

	UPROPERTY(EditAnywhere)
	TArray<FAgonyDisplayFxEvent> _showAgonyFXEvents;

	UPROPERTY(EditAnywhere)
	TArray<FAgonyDisplayFxEvent> _hideAgonyFXEvents;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ShowAgonyBarbWireFX_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTrailEffectStop_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTrailEffectStart_Cosmetic();

private:
	UFUNCTION()
	void OnShowBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnRep_IsInAgony();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnLocallyObservedChanged(bool isLocallyObserved);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHitInAgony_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHitByTormentAttackTrail_Cosmetic();

private:
	UFUNCTION()
	void OnHideBarbWireFXOnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAgonyChanged_Cosmetic(const bool isInAgony);

public:
	UFUNCTION(BlueprintPure)
	bool IsInAgony() const;

	UFUNCTION(BlueprintPure)
	bool IsAgonyMoriable() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void HideAgonyBarbWireFX_Cosmetic();

private:
	UFUNCTION()
	void Authority_OnDrainStageChanged(const int32 drainStage, ADBDPlayer* target);

	UFUNCTION()
	void Authority_OnAttackTrailDamageCooldownTimerDone();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAgonyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAgonyComponent) { return 0; }
