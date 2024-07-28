#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "Firecracker.generated.h"

class ACollectable;
class AActor;
class ADBDPlayer;
class UGameplayModifierContainer;
class USphereComponent;

UCLASS()
class DEADBYDAYLIGHT_API AFirecracker : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _effectArea;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Transient)
	bool DebugDisplayEnabled;

	UPROPERTY(BlueprintReadWrite, Export)
	TArray<UGameplayModifierContainer*> _effectModifiers;

	UPROPERTY(Transient)
	ADBDPlayer* _playerOwner;

private:
	UPROPERTY(Transient)
	bool _isExploding;

	UPROPERTY(Transient)
	TArray<AActor*> _actorsInRange;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldDeafen(const ADBDPlayer* player, float& outDuration) const;

	UFUNCTION(BlueprintPure)
	bool ShouldBlind(const ADBDPlayer* player, float& outDuration) const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnFuseBurnUpdate(float deltaSeconds, float fuseTimeLeftPercent);

	UFUNCTION(BlueprintImplementableEvent)
	void OnFuseBurnExit();

	UFUNCTION(BlueprintImplementableEvent)
	void OnFuseBurnEnter();

	UFUNCTION(BlueprintImplementableEvent)
	void OnExplode();

	UFUNCTION(BlueprintNativeEvent)
	void OnEffectsInitialized();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_InitFromSpawner(ACollectable* spawner);

	UFUNCTION(BlueprintPure)
	bool HasModifierOfType(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	bool HasFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure)
	float GetModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	float GetExplosionRange() const;

	UFUNCTION(BlueprintPure)
	float GetExplosionEffectDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExplosionDelay() const;

	UFUNCTION(BlueprintPure)
	bool GetExploded() const;

protected:
	UFUNCTION(BlueprintPure)
	TArray<UGameplayModifierContainer*> GetEffects() const;

public:
	UFUNCTION(BlueprintPure)
	float GetDeafnessEffectDuration(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetBlindnessEffectDuration(const AActor* player) const;

public:
	AFirecracker();
};

FORCEINLINE uint32 GetTypeHash(const AFirecracker) { return 0; }
