#pragma once

#include "CoreMinimal.h"
#include "DistanceTrackerCase.h"
#include "ActorPairQuery.generated.h"

USTRUCT()
struct FActorPairQuery
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<uint32, FDistanceTrackerCase> _distanceTrackerCases;

	UPROPERTY()
	uint32 _caseIndex;

	UPROPERTY()
	bool _usePlanarDistance;

	UPROPERTY()
	bool _isHeightRangeLimited;

public:
	QUERYSERVICE_API FActorPairQuery();
};

FORCEINLINE uint32 GetTypeHash(const FActorPairQuery) { return 0; }
