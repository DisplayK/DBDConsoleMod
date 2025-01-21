#pragma once

#include "CoreMinimal.h"
#include "ActorsInRangeBool.generated.h"

class UActorPairQueryEvaluatorComponent;
class AActor;

USTRUCT()
struct FActorsInRangeBool
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UActorPairQueryEvaluatorComponent* _actorPairQueryComponent;

	UPROPERTY()
	AActor* _sourceActor;

	UPROPERTY()
	AActor* _otherActor;

	UPROPERTY()
	float _range;

	UPROPERTY()
	bool _inRange;

public:
	QUERYSERVICE_API FActorsInRangeBool();
};

FORCEINLINE uint32 GetTypeHash(const FActorsInRangeBool) { return 0; }
