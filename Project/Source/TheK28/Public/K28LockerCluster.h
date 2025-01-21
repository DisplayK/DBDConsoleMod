#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K28LockerCluster.generated.h"

class UK28LockerComponent;

USTRUCT()
struct FK28LockerCluster
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	TArray<UK28LockerComponent*> _lockersInCluster;

	UPROPERTY()
	FVector _centerLocation;

	UPROPERTY()
	FVector _teleportIndicatorLocation;

public:
	THEK28_API FK28LockerCluster();
};

FORCEINLINE uint32 GetTypeHash(const FK28LockerCluster) { return 0; }
