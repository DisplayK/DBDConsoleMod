#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageActor.generated.h"

class UFoliageDensityHISM;

UCLASS()
class AFoliageActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UFoliageDensityHISM* _foliageHISM;

public:
	AFoliageActor();
};

FORCEINLINE uint32 GetTypeHash(const AFoliageActor) { return 0; }
