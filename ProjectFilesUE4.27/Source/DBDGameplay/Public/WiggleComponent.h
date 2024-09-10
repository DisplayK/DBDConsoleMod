#pragma once

#include "CoreMinimal.h"
#include "ChargeableProgressSource.h"
#include "Components/ActorComponent.h"
#include "BlueprintAudioEvent.h"
#include "ESkillCheckCustomType.h"
#include "WiggleComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UInputComponent;
class UChargeableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleComponent : public UActorComponent, public IChargeableProgressSource
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintAssignable)
	FBlueprintAudioEvent OnFailSkillCheckAudioEvent;

	UPROPERTY(BlueprintAssignable)
	FBlueprintAudioEvent OnMissSkillCheckAudioEvent;

	UPROPERTY(EditDefaultsOnly)
	FString AUDIO_EVENT_SKILL_CHECK_WARNING;

	UPROPERTY(EditDefaultsOnly)
	FString AUDIO_EVENT_SKILL_CHECK_GOOD;

	UPROPERTY(EditDefaultsOnly)
	FString AUDIO_EVENT_SKILL_CHECK_GREAT;

private:
	UPROPERTY(Transient, Export)
	UChargeableComponent* _wiggleProgress;

	UPROPERTY(Transient)
	TWeakObjectPtr<ASlasherPlayer> _killerWigglingFrom;

	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UInputComponent> _inputComponent;

	UPROPERTY(EditDefaultsOnly)
	float _wiggleInputLockTime;

private:
	UFUNCTION(Server, Reliable)
	void Server_OnWiggleEnd();

	UFUNCTION()
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION()
	void OnWiggleInput();

	UFUNCTION()
	void OnWiggleEnd();

	UFUNCTION()
	void OnPlayerPickedUpStart(ADBDPlayer* picker);

	UFUNCTION()
	void OnPlayerPickedUpEnd(ADBDPlayer* picker);

	UFUNCTION()
	void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnKeyBindingsChanged();

	UFUNCTION()
	void OnHideWiggleSkillCheck(ESkillCheckCustomType type);

public:
	UFUNCTION(BlueprintPure)
	UChargeableComponent* GetWiggleChargeable() const;

	UFUNCTION(Exec)
	void DBD_SetWiggleProgress(const float progressPercent) const;

	UFUNCTION(BlueprintCallable)
	void Authority_TutorialEndWiggle();

	UFUNCTION(BlueprintCallable)
	void Authority_AddWiggleCharge(float chargeAmount);

public:
	UWiggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleComponent) { return 0; }
