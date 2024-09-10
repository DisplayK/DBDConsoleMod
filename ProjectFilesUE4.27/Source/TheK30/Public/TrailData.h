#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailData.generated.h"

class ATrailNode;
class AActor;

USTRUCT()
struct FTrailData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<ATrailNode*> _visualNodes;

	UPROPERTY()
	TArray<FVector> _navigationWaypoints;

	UPROPERTY()
	AActor* _owner;

	UPROPERTY()
	bool _isCompleted;

public:
	THEK30_API FTrailData();
};

FORCEINLINE uint32 GetTypeHash(const FTrailData) { return 0; }
