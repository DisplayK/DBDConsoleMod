#pragma once

#include "CoreMinimal.h"
#include "SurvivorQueryPair.generated.h"

USTRUCT()
struct FSurvivorQueryPair
{
	GENERATED_BODY()

public:
	THEK28_API FSurvivorQueryPair();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorQueryPair) { return 0; }
