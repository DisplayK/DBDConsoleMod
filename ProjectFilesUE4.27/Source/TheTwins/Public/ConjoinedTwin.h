#pragma once

#include "CoreMinimal.h"
#include "DBDPlayer.h"
#include "FastTimer.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "FirecrackerEffectData.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ConjoinedTwin.generated.h"

class UHitValidatorComponent;
class UDBDAttackerComponent;
class UTwinOutlineUpdateStrategy;
class UCustomizedAudioComponent;
class UHitValidatorConfigurator;
class UBlindFlashlightTargetFXComponent;
class URangeToActorsTrackerComponent;
class UKillerBlindingFXComponent;
class UAkComponent;
class UAnimationMontageSlave;
class UStatusEffect;
class UTwinFirstPersonViewComponent;
class UFlashlightableComponent;
class UTwinPossessNegationEffectComponent;
class UFirecrackerEffectHandlerComponent;

UCLASS()
class AConjoinedTwin : public ADBDPlayer
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	URangeToActorsTrackerComponent* _restrictedPossessionAreaTracker;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UTwinOutlineUpdateStrategy* _twinOutlineUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAkComponent* _twinLullabyAudioComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UKillerBlindingFXComponent* _twinBlindingFX;

private:
	UPROPERTY(VisibleAnywhere, Export)
	UCustomizedAudioComponent* _customizedAudio;

	UPROPERTY(VisibleAnywhere, Export)
	UDBDAttackerComponent* _attackerComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxWalkSpeed;

	UPROPERTY(VisibleAnywhere, Export)
	UHitValidatorComponent* _hitValidator;

	UPROPERTY(VisibleAnywhere, Export)
	UHitValidatorConfigurator* _hitValidationConfigurator;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gravityScale;

	UPROPERTY(Transient, Export)
	UAnimationMontageSlave* _animationFollower;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _revealDurationOnAttached;

	UPROPERTY(Transient, Export)
	UTwinFirstPersonViewComponent* _firstPersonViewComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UFlashlightableComponent* _eyesFlashlightable;

	UPROPERTY(VisibleAnywhere, Transient, Export)
	UBlindFlashlightTargetFXComponent* _blindFlashlightTargetFXComponent;

	UPROPERTY(VisibleAnywhere, Transient, Export)
	UFirecrackerEffectHandlerComponent* _firecrackerEffectHandlerComponent;

	UPROPERTY(Transient)
	FFastTimer _flashlightBlindEvasionScoreTimer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _flashlightEvasionScoreCooldown;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _twinsBloodhoundEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _twinsRevealKillerAuraEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _twinsDormantKillerInstinctEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _twinsRevealAuraOnAttachedToSurvivorEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _twinsRevealAuraOnRecallReadyEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timeDeafenedOnTriggerEffect;

	UPROPERTY(VisibleAnywhere, Transient, Export)
	UTwinPossessNegationEffectComponent* _twinPossessNegationEffectComponent;

public:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendAttackInput(bool pressed);

private:
	UFUNCTION()
	void OnFinishedPlayingEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);

	UFUNCTION()
	void Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData);

public:
	AConjoinedTwin();
};

FORCEINLINE uint32 GetTypeHash(const AConjoinedTwin) { return 0; }
