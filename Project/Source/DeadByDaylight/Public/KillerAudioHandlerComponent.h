#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "DBDPlayerAudioHandlerComponent.h"
#include "EAttackType.h"
#include "KillerAudioHandlerComponent.generated.h"

class ACamperPlayer;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerAudioHandlerComponent : public UDBDPlayerAudioHandlerComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _killerMovingShockTime;

	UPROPERTY(EditAnywhere)
	FString _shockEvent;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _movingShockCondition;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerSurvivorDamageHitAudioSFX(ACamperPlayer* camper, EAttackType attackType, bool causedKO, bool isWeaponHit, bool isLightHit);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void TriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper);

private:
	UFUNCTION()
	void OnChaseStart(ADBDPlayer* chasedSurvivor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void HitImpactOnSurvivorSFX(ACamperPlayer* camper, EAttackType attackType, bool isWeaponHit);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ChaseTriggerKillerReactionSpecificSurvivorSFX(ADBDPlayer* camper);

public:
	UKillerAudioHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerAudioHandlerComponent) { return 0; }
