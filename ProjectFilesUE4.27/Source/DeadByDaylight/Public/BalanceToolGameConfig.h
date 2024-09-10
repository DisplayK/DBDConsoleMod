#pragma once

#include "CoreMinimal.h"
#include "BalanceToolOverrideEntry.h"
#include "BalanceToolGameConfig.generated.h"

USTRUCT()
struct FBalanceToolGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FBalanceToolOverrideEntry> Overrides;

public:
	DEADBYDAYLIGHT_API FBalanceToolGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FBalanceToolGameConfig) { return 0; }
