#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Region.h"
#include "RegionFinder.generated.h"

UCLASS(BlueprintType, Transient)
class DEADBYDAYLIGHT_API URegionFinder : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRegion> Regions;

	UPROPERTY()
	float Timeout;

public:
	URegionFinder();
};

FORCEINLINE uint32 GetTypeHash(const URegionFinder) { return 0; }
