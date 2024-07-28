#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K26PathData.generated.h"

USTRUCT()
struct FK26PathData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool IsInUse;

	UPROPERTY()
	bool IsVisibleToKiller;

	UPROPERTY()
	bool IsVisibleForSurvivors;

	UPROPERTY()
	int32 MaxVisibleIndex;

	UPROPERTY()
	TArray<FVector> PathPartLocations;

	UPROPERTY()
	TArray<FRotator> PathPartRotations;

	UPROPERTY()
	FVector PathEndLocation;

	UPROPERTY()
	FRotator PathEndRotation;

public:
	THEK26_API FK26PathData();
};

FORCEINLINE uint32 GetTypeHash(const FK26PathData) { return 0; }
