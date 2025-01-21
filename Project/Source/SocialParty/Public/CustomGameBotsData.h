#pragma once

#include "CoreMinimal.h"
#include "CustomGameBot.h"
#include "CustomGameBotsData.generated.h"

USTRUCT(BlueprintType)
struct FCustomGameBotsData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<FCustomGameBot> _bots;

public:
	SOCIALPARTY_API FCustomGameBotsData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGameBotsData) { return 0; }
