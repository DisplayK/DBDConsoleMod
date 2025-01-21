#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "VoidEnergyProducer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UVoidEnergyProducer : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle _maxEnergyCanAward;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle _energyToGiveOnEvent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTagContainer _gameEventToRewardEnergy;

	UPROPERTY(ReplicatedUsing=OnRep_TotalEnergyGiven, Transient)
	int32 _totalEnergyGiven;

	UPROPERTY(EditDefaultsOnly)
	FName _voidEnergySpawnObjectName;

	UPROPERTY(EditDefaultsOnly)
	FName _voidEnergyHoverObjectName;

protected:
	UFUNCTION()
	void OnRep_TotalEnergyGiven(int32 lastTotalEnergyGivenValue);

public:
	UFUNCTION(BlueprintPure)
	bool HasEnergyLeftToGive() const;

	UFUNCTION(BlueprintPure)
	int32 GetRemainingEnergy() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVoidOrbsSpawned(const int32 orbsSpawned);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UVoidEnergyProducer();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyProducer) { return 0; }
