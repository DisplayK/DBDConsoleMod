#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZombiesPatrolAreaManager.generated.h"

class AMeatHook;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombiesPatrolAreaManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AMeatHook*> _availablePatrolAreas;

	UPROPERTY(Transient)
	TArray<AMeatHook*> _usedPatrolAreas;

	UPROPERTY(EditAnywhere)
	float _maxDistanceBetweenMeatHookAndPlayers;

public:
	UZombiesPatrolAreaManager();
};

FORCEINLINE uint32 GetTypeHash(const UZombiesPatrolAreaManager) { return 0; }
