#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "SurvivorPlagueEffect.generated.h"

class AInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorPlagueEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SicknessAmount, meta=(AllowPrivateAccess=true))
	float _sicknessAmount;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _sicknessCap;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _vomitSlowDuration;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _vomitSlowAmount;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<float> _sicknessThresholds;

	UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
	bool _wasRecentlyHitByVomit;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TArray<FString> _nonNauseatingInteractions;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _sicknessGainPerSecondFromInfectedInteractable;

	UPROPERTY(BlueprintReadOnly, Replicated, meta=(AllowPrivateAccess=true))
	bool _debugMode;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposeMaximumSickSurvivorEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _brokenMaximumSickSurvivorEffect;

public:
	UFUNCTION(BlueprintCallable)
	void RefreshSicknessGainValues();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSurvivorVomit_Aesthetic();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSurvivorBecomesInfected_Aesthetic();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSicknessCured_Aesthetic();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSicknessChanged_Aesthetic(float newSickness);

public:
	UFUNCTION()
	void OnRep_SicknessAmount();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnMaxSicknessReached_Aesthetic();

public:
	UFUNCTION(BlueprintCallable)
	void OnHitByVomit(bool isSuperVomit);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSurvivorVomit();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSurvivorBecomesInfected();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSicknessCured();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSicknessChanged(float newSickness);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnMaxSicknessReached();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddOnScreenDebugMessage(uint64 key, float duration, FColor displayColor, const FString& debugMessage);

public:
	UFUNCTION(BlueprintPure)
	bool IsInfected() const;

	UFUNCTION(BlueprintPure)
	bool IsDebugModeActive() const;

	UFUNCTION(BlueprintPure)
	bool HasMaxLevelSickness() const;

	UFUNCTION(BlueprintPure)
	TArray<float> GetSicknessThresholds() const;

	UFUNCTION(BlueprintPure)
	float GetSicknessPercentage() const;

	UFUNCTION(BlueprintPure)
	uint8 GetSicknessLevel() const;

	UFUNCTION(BlueprintPure)
	float GetSicknessAmount() const;

	UFUNCTION(BlueprintPure)
	uint8 GetMaxSicknessLevel() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetSickness(float newSickness);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitByVomitProjectileAesthetic();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitByVomitProjectile(float sicknessToAdd);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnHitBySuperVomitProjectile();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Authority_InfectInteractable(AInteractable* interactable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddSickness(float sicknessToAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorPlagueEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorPlagueEffect) { return 0; }
