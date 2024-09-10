#pragma once

#include "CoreMinimal.h"
#include "RankResetStartingPips.generated.h"

USTRUCT()
struct FRankResetStartingPips
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 NewPipAmount;

public:
	DEADBYDAYLIGHT_API FRankResetStartingPips();
};

FORCEINLINE uint32 GetTypeHash(const FRankResetStartingPips) { return 0; }
