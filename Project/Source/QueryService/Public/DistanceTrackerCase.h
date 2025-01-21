#pragma once

#include "CoreMinimal.h"
#include "ActorPairQueryHeightRange.h"
#include "DistanceTrackerCase.generated.h"

USTRUCT()
struct FDistanceTrackerCase
{
	GENERATED_BODY()

private:
	UPROPERTY()
	float _distanceToTrackSquared;

	UPROPERTY()
	FActorPairQueryHeightRange _heightRange;

	UPROPERTY()
	bool _inRange;

public:
	QUERYSERVICE_API FDistanceTrackerCase();
};

FORCEINLINE uint32 GetTypeHash(const FDistanceTrackerCase) { return 0; }
