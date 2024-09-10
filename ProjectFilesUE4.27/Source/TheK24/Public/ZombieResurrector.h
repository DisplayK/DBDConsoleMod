#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ZombieResurrector.generated.h"

class AZombieCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieResurrector : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _powerLevelToSpawnZombie;

	UPROPERTY(Transient)
	TArray<AZombieCharacter*> _delayedSpawnZombies;

private:
	UFUNCTION()
	void Authority_OnKillerPowerLevelChanged(int32 powerLevel);

public:
	UZombieResurrector();
};

FORCEINLINE uint32 GetTypeHash(const UZombieResurrector) { return 0; }
