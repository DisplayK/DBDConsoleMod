#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChainHuntState.h"
#include "ChainHuntStateData.generated.h"

USTRUCT()
struct FChainHuntStateData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FDateTime StartTime;

	UPROPERTY()
	EChainHuntState ChainHuntState;

public:
	THEK25_API FChainHuntStateData();
};

FORCEINLINE uint32 GetTypeHash(const FChainHuntStateData) { return 0; }
