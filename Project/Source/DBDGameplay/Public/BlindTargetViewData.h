#pragma once

#include "CoreMinimal.h"
#include "BlindTargetViewData.generated.h"

USTRUCT()
struct FBlindTargetViewData
{
	GENERATED_BODY()

public:
	DBDGAMEPLAY_API FBlindTargetViewData();
};

FORCEINLINE uint32 GetTypeHash(const FBlindTargetViewData) { return 0; }
