#pragma once

#include "CoreMinimal.h"
#include "ActorPairQueryCrowPair.generated.h"

class AK26CrowProjectile;

USTRUCT()
struct FActorPairQueryCrowPair
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	AK26CrowProjectile* CrowProjectile;

public:
	THEK26_API FActorPairQueryCrowPair();
};

FORCEINLINE uint32 GetTypeHash(const FActorPairQueryCrowPair) { return 0; }
