#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "K28InteractionPreventingTagsModification.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K28Power.generated.h"

class UK28KillerPlayerViewComponent;
class UK28KillerTeleportationComponent;
class UK28TeleportationStrategyComponent;
class UInteractor;
class UK28PowerPresentationItemProgressComponent;
class UK28DayNightComponent;
class UK28PowerChargePresentationPowerFadeComponent;
class UPowerChargeComponent;
class UK28KillerLockerComponent;
class AK28SecondaryCamera;
class AK28Remnant;
class AAnimationFollowerActor;
class UStatusEffect;
class UK28SurvivorAbductionCameraBehaviourComponent;

UCLASS()
class AK28Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UInteractor* _interactor;

	UPROPERTY(VisibleAnywhere, Export)
	UPowerChargeComponent* _powerChargeComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UK28PowerChargePresentationPowerFadeComponent* _k28PowerChargePresentationPowerFadeComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UK28PowerPresentationItemProgressComponent* _k28PowerPresentationItemProgressComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28DayNightComponent> _dayNightComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28TeleportationStrategyComponent> _teleportationStrategyComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28KillerTeleportationComponent> _killerTeleportationComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28KillerPlayerViewComponent> _killerPlayerViewComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28KillerLockerComponent> _killerLockerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK28SecondaryCamera> _secondaryCameraClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK28Remnant> _k28RemnantClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AAnimationFollowerActor> _moriArmsAnimationFollowerActorClass;

	UPROPERTY(Replicated, Transient)
	AK28SecondaryCamera* _secondaryCamera;

	UPROPERTY(Transient, Export)
	UK28KillerLockerComponent* _killerLockerComponent;

	UPROPERTY(Replicated, Transient)
	AK28Remnant* _k28Remnant;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _killerStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _survivorStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28SurvivorAbductionCameraBehaviourComponent> _survivorAbductionCameraBehaviourClass;

	UPROPERTY(Replicated, Transient, Export)
	UK28DayNightComponent* _dayNightComponent;

	UPROPERTY(Replicated, Transient, Export)
	UK28TeleportationStrategyComponent* _teleportationStrategyComponent;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tokensWhenPowerIsFullyCharged;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _secondsRequiredToChargePowerStartOfMatch;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _secondsRequiredToChargePowerDayTime;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _secondsRequiredToChargePowerNightTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTrackedTimeSinceLockerOrRemnantExit;

	UPROPERTY(ReplicatedUsing=OnRep_TeleportTokens)
	int32 _teleportTokens;

	UPROPERTY(EditDefaultsOnly)
	TArray<FK28InteractionPreventingTagsModification> _survivorInteractionsPreventingTagModifications;

	UPROPERTY(Transient)
	bool _isTunableInit;

private:
	UFUNCTION()
	void OnRep_TeleportTokens();

	UFUNCTION()
	void OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK28Power();
};

FORCEINLINE uint32 GetTypeHash(const AK28Power) { return 0; }
