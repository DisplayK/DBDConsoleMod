#pragma once

#include "CoreMinimal.h"
#include "TileSpawnPoint.h"
#include "Templates/SubclassOf.h"
#include "SearchableSpawnPoint.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class USearchableSpawnPoint : public UTileSpawnPoint
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ActorToSpawn;

public:
	USearchableSpawnPoint();
};

FORCEINLINE uint32 GetTypeHash(const USearchableSpawnPoint) { return 0; }
