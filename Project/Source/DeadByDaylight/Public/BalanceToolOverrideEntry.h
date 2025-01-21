#pragma once

#include "CoreMinimal.h"
#include "BalanceToolOverrideEntry.generated.h"

USTRUCT()
struct FBalanceToolOverrideEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString DbName;

	UPROPERTY()
	FString RowName;

	UPROPERTY()
	FString Value;

public:
	DEADBYDAYLIGHT_API FBalanceToolOverrideEntry();
};

FORCEINLINE uint32 GetTypeHash(const FBalanceToolOverrideEntry) { return 0; }
