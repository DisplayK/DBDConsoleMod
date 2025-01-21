#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDAggregateCullDistanceVolumes.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDAggregateCullDistanceVolumes : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void SpawnCullDistanceVolumes();

public:
	ADBDAggregateCullDistanceVolumes();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAggregateCullDistanceVolumes) { return 0; }
