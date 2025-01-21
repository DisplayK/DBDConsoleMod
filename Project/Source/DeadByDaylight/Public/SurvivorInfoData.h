#pragma once

#include "CoreMinimal.h"
#include "SurvivorInfoData.generated.h"

USTRUCT()
struct FSurvivorInfoData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FSurvivorInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorInfoData) { return 0; }
