#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageDensityContainer.generated.h"

class AFoliageActor;
class UFoliageDensityHISM;
class UDBDMapFoliageDensityTunables;

UCLASS()
class DEADBYDAYLIGHT_API AFoliageDensityContainer : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<FName, AFoliageActor*> _foliageActors;

	UPROPERTY(Transient, Export)
	TMap<FName, UFoliageDensityHISM*> _foliageHISMs;

	UPROPERTY(Transient)
	UDBDMapFoliageDensityTunables* _mapFoliageDensityTunables;

public:
	AFoliageDensityContainer();
};

FORCEINLINE uint32 GetTypeHash(const AFoliageDensityContainer) { return 0; }
