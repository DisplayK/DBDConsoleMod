#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnappingData.generated.h"

USTRUCT(BlueprintType)
struct FSnappingData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool DoSnapPosition;

	UPROPERTY()
	bool DoSnapRotation;

	UPROPERTY()
	bool DoSnapRoll;

	UPROPERTY()
	bool UseZCoord;

	UPROPERTY()
	bool SweepOnFinalSnap;

	UPROPERTY()
	FVector TargetPosition;

	UPROPERTY()
	FRotator TargetRotation;

	UPROPERTY()
	float Duration;

public:
	DEADBYDAYLIGHT_API FSnappingData();
};

FORCEINLINE uint32 GetTypeHash(const FSnappingData) { return 0; }
