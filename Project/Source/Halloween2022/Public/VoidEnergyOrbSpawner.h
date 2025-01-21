#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "OrbProperties.h"
#include "EVoidEnergyType.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "VoidEnergyOrbSpawner.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UVoidEnergyOrbSpawner : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeBetweenEachSpawn;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _totalDistanceForOrbs;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxDistanceDown;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeOrbMoves;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeOrbHovers;

	UPROPERTY(EditDefaultsOnly)
	float _downedSurviorSpawnOffsetHeight;

	UPROPERTY(EditDefaultsOnly)
	float _palletSpawnHeightOfOrbs;

	UPROPERTY(EditDefaultsOnly)
	float _lockerSpawnForwardOffset;

	UPROPERTY(EditDefaultsOnly)
	float _lockerSpawnUpwardOffset;

	UPROPERTY(EditDefaultsOnly)
	float _slasherSpawnOffset;

	UPROPERTY(EditDefaultsOnly)
	float _slasherSpawnOffsetFarDown;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _voidEnergyOrbClass;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SpawnVoidEnergyOrb(const FOrbProperties& orbProperties, const bool isLargeOrb);

	UFUNCTION()
	void Authority_TimerSpawnVoidEnergyOrb(const FOrbProperties orbProperties, const bool isLargeOrb);

	UFUNCTION()
	void Authority_SurvivorStunOnKiller(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithPallet(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithHeadOn(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_SurvivorStunKillerWithFlashLight(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION()
	void Authority_SpawnVoidEnergyOrbs(const FOrbProperties& orbProperties, const int32 numberOfOrbsToSpawn, const int32 numberOfOrbsThatCanBeAbsorbed);

private:
	UFUNCTION()
	void Authority_KillerDownSurvivor(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_GiveVoidEnergyToPlayer(const EVoidEnergyType voidEnergyType, const int32 voidEnergyToAdd);

public:
	UVoidEnergyOrbSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyOrbSpawner) { return 0; }
