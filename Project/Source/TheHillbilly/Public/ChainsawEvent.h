#pragma once

#include "CoreMinimal.h"
#include "ChainsawEvent.generated.h"

USTRUCT()
struct FChainsawEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	float ElapsedMatchTime;

public:
	THEHILLBILLY_API FChainsawEvent();
};

FORCEINLINE uint32 GetTypeHash(const FChainsawEvent) { return 0; }
