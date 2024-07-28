#pragma once

#include "CoreMinimal.h"
#include "K25SurvivorTeleportationData.generated.h"

USTRUCT()
struct FK25SurvivorTeleportationData
{
	GENERATED_BODY()

public:
	THEK25_API FK25SurvivorTeleportationData();
};

FORCEINLINE uint32 GetTypeHash(const FK25SurvivorTeleportationData) { return 0; }
