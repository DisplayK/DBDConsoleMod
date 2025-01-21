#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedTrailItem.generated.h"

class ATormentTrailPoint;

USTRUCT(BlueprintType)
struct FReplicatedTrailItem: public FFastArraySerializerItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ATormentTrailPoint* TrailPoint;

	UPROPERTY()
	uint8 OrderInTrail;

	UPROPERTY()
	FVector_NetQuantize10 PointRelativeLocation;

	UPROPERTY()
	FRotator PointRotation;

public:
	THEEXECUTIONER_API FReplicatedTrailItem();
};

FORCEINLINE uint32 GetTypeHash(const FReplicatedTrailItem) { return 0; }
