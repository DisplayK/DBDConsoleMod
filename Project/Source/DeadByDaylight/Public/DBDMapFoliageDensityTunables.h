#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TypeFoliageToAutomateDensity.h"
#include "DBDMapFoliageDensityTunables.generated.h"

UCLASS(Transient)
class DEADBYDAYLIGHT_API UDBDMapFoliageDensityTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FTypeFoliageToAutomateDensity> FoliageToAutomateDensity;

public:
	UDBDMapFoliageDensityTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDMapFoliageDensityTunables) { return 0; }
