#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "StatProperty.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "K29Power.generated.h"

class UK29RushChargesHandlerComponent;
class UK29PowerStatusHandlerComponent;
class UK29PowerChargePresentationItemProgressComponent;
class UInteractor;
class UK29PowerChargePresentationPowerFadeComponent;
class UChargeableComponent;
class UBoxPlayerOverlapComponent;
class UStaticMeshComponent;
class UK29PathingCalculatorComponent;
class UStatusEffect;
class AAnimationFollowerActor;
class UInteractionDefinition;
class UK29RushCooldownInteraction;
class UK29RushChargeableInteraction;

UCLASS()
class AK29Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UChargeableComponent* _rushChargeableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UInteractor* _interactor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK29PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK29PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK29PowerStatusHandlerComponent> _powerStatusHandlerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK29RushChargesHandlerComponent> _rushChargesHandlerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK29PathingCalculatorComponent> _pathingCalculatorComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessProtectionStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _rushChargeTime;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _scorePercent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAnimationFollowerActor> _moriTentaclesAnimationFollowerActorClass;

private:
	UPROPERTY(Replicated, Transient, Export)
	UK29PowerStatusHandlerComponent* _powerStatusHandlerComponent;

	UPROPERTY(Replicated, Transient, Export)
	UK29RushChargesHandlerComponent* _rushChargesHandlerComponent;

	UPROPERTY(Transient, Export)
	UK29PathingCalculatorComponent* _pathingCalculatorComponent;

public:
	UFUNCTION(BlueprintImplementableEvent)
	UInteractionDefinition* GetSlashSurvivorInteraction();

	UFUNCTION(BlueprintImplementableEvent)
	UInteractionDefinition* GetSlashBreakableInteraction();

	UFUNCTION(BlueprintPure)
	float GetScorePercent() const;

	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushVaultCooldownInteraction();

	UFUNCTION(BlueprintImplementableEvent)
	UStaticMeshComponent* GetRushSurvivorDetectionBox();

	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteSurvivorThrowCooldownInteraction();

	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteSurvivorHitCooldownInteraction();

	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushCompleteNoSurvivorCooldownInteraction();

	UFUNCTION(BlueprintCallable)
	UK29RushChargesHandlerComponent* GetRushChargesHandlerComponent();

	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushChargeCancelCooldownInteraction();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	UK29RushChargeableInteraction* GetRushChargeableInteraction();

public:
	UFUNCTION(BlueprintImplementableEvent)
	UK29RushCooldownInteraction* GetRushBreakableCooldownInteraction();

	UFUNCTION(BlueprintImplementableEvent)
	UInteractionDefinition* GetPushSurvivorOverLedgeInteraction();

	UFUNCTION(BlueprintCallable)
	UK29PowerStatusHandlerComponent* GetPowerStatusHandlerComponent();

private:
	UFUNCTION()
	void Authority_OnStun(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK29Power();
};

FORCEINLINE uint32 GetTypeHash(const AK29Power) { return 0; }
