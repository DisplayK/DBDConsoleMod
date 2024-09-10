#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.h"
#include "ChainsawEventWhileCamping.generated.h"

USTRUCT()
struct FChainsawEventWhileCamping: public FChainsawEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	float DistanceFromClosestHook;

public:
	THEHILLBILLY_API FChainsawEventWhileCamping();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawEventWhileCamping) { return 0; }
