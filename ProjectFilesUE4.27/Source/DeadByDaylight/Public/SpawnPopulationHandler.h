#pragma once

#include "CoreMinimal.h"
#include "SpawnPopulationHandler.generated.h"

class USceneComponent;

USTRUCT()
struct FSpawnPopulationHandler
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<USceneComponent*> _allAvailableSpawners;

public:
	DEADBYDAYLIGHT_API FSpawnPopulationHandler();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnPopulationHandler) { return 0; }
