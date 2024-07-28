#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PortalRestrictedLocation.generated.h"

USTRUCT()
struct FPortalRestrictedLocation
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector Location;

	UPROPERTY()
	float DistanceSquared;

public:
	THEDEMOGORGON_API FPortalRestrictedLocation();
};

FORCEINLINE uint32 GetTypeHash(const FPortalRestrictedLocation) { return 0; }
