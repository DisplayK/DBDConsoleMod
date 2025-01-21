#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/EngineTypes.h"
#include "EStatusEffectType.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "GameplayNotificationData.h"
#include "StatusEffectInitializationData.h"
#include "StatusEffect.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStatusEffect : public UGameplayModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ModifierData)
	FGameplayModifierData ModifierData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_ShouldDisplay)
	bool ShouldDisplay;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	float CustomParam;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _removeOnRemainingLifetimeEnded;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastAsStatusEffectWhenApplicable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastAsStatusEffectByActivationTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastAsStatusEffectWhenLifeRemains;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastAsStatusEffectByFunction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastAsStatusEffectAlways;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool BroadcastOriginatorGameEventNotificationWhenFirstApplicable;

private:
	UPROPERTY(ReplicatedUsing=OnRep_StatusInitializationData, Transient)
	FStatusEffectInitializationData _statusInitializationData;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftClassPtr<UStatusEffect>> _nonStackingEffects;

protected:
	UFUNCTION(BlueprintNativeEvent)
	bool ShouldDisplayStatusEffectIcon() const;

public:
	UFUNCTION(BlueprintCallable)
	void SetStatusEffectIconPercentage(float value);

	UFUNCTION(BlueprintCallable)
	void SetShouldDisplay(bool on);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnShouldOriginatingPlayerChange();

	UFUNCTION(BlueprintNativeEvent)
	void OnShouldDisplayChanged(bool currentValue);

private:
	UFUNCTION()
	void OnRep_StatusInitializationData();

protected:
	UFUNCTION()
	void OnRep_ShouldOriginatingPlayerChange();

	UFUNCTION()
	void OnRep_ShouldDisplay();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetRemainingLifetimeInitialized(bool remainingLifetimeInitialized);

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetRemainingLifetime(float lifetime);

public:
	UFUNCTION(BlueprintPure)
	bool IsOriginatorHooked() const;

	UFUNCTION(BlueprintPure)
	bool IsOriginatorAlive() const;

	UFUNCTION(BlueprintPure)
	bool IsKillerInOriginatorRange(float AdditiveRangeModifier) const;

	UFUNCTION(BlueprintPure)
	bool IsInOriginatorRange() const;

	UFUNCTION(BlueprintCallable)
	void InitializeLifetime(float lifetime);

	UFUNCTION(BlueprintPure)
	EStatusEffectType GetStatusEffectType() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetStatusEffectCooldownRate() const;

public:
	UFUNCTION(BlueprintNativeEvent)
	bool GetShouldDisplay() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOriginatingPlayer() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetLifetimeDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetCustomParam() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void FireActiveStatusEffectEvent(float percentage, int32 levelToDisplay) const;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOriginatorGameEventNotification();

	UFUNCTION(BlueprintCallable)
	void BroadcastGameEventNotification(FGameplayNotificationData notificationData, bool addToHistory);

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetRemainingLifetime(float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveSelf();

private:
	UFUNCTION()
	void Authority_OnOriginatingPlayerEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintAuthorityOnly)
	void Authority_EndSelf();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffect) { return 0; }
