#pragma once

#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.h"
#include "SurvivorMadnessEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorMadnessEffect : public UStatusEffect, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_MadnessAmount)
	float _madnessAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxMadnessTier;

	UPROPERTY(EditDefaultsOnly)
	TArray<FDBDTunableRowHandle> _madnessThresholds;

	UPROPERTY(EditDefaultsOnly)
	TArray<FDBDTunableRowHandle> _insaneSkillCheckChances;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _screamDelayMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _screamDelayMax;

	UPROPERTY(EditDefaultsOnly)
	FName madnessStatusViewId;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _survivorOperatingLockerSemanticTags;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnMadnessBubbleIndicator();

private:
	UFUNCTION()
	void OnRep_MadnessAmount();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnMadnessTierChanged(const int32 newMadnessTier, const int32 oldMadnessTier);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_MadnessIntermittentScream();

	UFUNCTION(BlueprintPure)
	int32 GetMadnessTier() const;

	UFUNCTION(BlueprintCallable)
	void Authority_AddMadness(float amountToAdd);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ActivateMadnessBubbleIndicator();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorMadnessEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorMadnessEffect) { return 0; }
