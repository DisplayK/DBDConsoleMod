#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieEscapeDoorPointsActor.generated.h"

class UArrowComponent;

UCLASS()
class AZombieEscapeDoorPointsActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<UArrowComponent*> _availablePoints;

public:
	AZombieEscapeDoorPointsActor();
};

FORCEINLINE uint32 GetTypeHash(const AZombieEscapeDoorPointsActor) { return 0; }
