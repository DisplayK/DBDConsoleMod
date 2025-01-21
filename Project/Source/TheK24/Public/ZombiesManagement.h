#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ZombiesManagement.generated.h"

class UZombiesPatrolAreaManager;
class AZombieEscapeDoorPointsActor;
class AZombieCharacter;
class UAuthoritativeActorPoolComponent;

UCLASS()
class AZombiesManagement : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _zombiePool;

	UPROPERTY(VisibleAnywhere, Export)
	UZombiesPatrolAreaManager* _zombiesPatrolAreaManager;

	UPROPERTY(Transient)
	TArray<AZombieCharacter*> _spawnedZombiesArray;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _firstZombieSpawnTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numberOfZombieToSpawnAtStart;

	UPROPERTY(Transient)
	TArray<AZombieEscapeDoorPointsActor*> _zombieEscapeDoorPoints;

private:
	UFUNCTION()
	void Authority_OnIntroComplete();

public:
	AZombiesManagement();
};

FORCEINLINE uint32 GetTypeHash(const AZombiesManagement) { return 0; }
