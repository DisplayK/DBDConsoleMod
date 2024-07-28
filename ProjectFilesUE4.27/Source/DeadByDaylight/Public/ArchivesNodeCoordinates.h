#pragma once

#include "CoreMinimal.h"
#include "ArchivesNodeCoordinates.generated.h"

USTRUCT()
struct FArchivesNodeCoordinates
{
	GENERATED_BODY()

public:
	UPROPERTY()
	double X;

	UPROPERTY()
	double Y;

public:
	DEADBYDAYLIGHT_API FArchivesNodeCoordinates();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesNodeCoordinates) { return 0; }
