#pragma once

#include "CoreMinimal.h"
#include "RangeToActorsTrackerStrategy.h"
#include "Templates/SubclassOf.h"
#include "RangeToActorsTrackerDefaultStrategy.generated.h"

class AActor;

UCLASS(EditInlineNew)
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _actorClass;

public:
	URangeToActorsTrackerDefaultStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URangeToActorsTrackerDefaultStrategy) { return 0; }
