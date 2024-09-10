#pragma once

#include "CoreMinimal.h"
#include "Loadout.h"
#include "CustomGameBot.generated.h"

USTRUCT(BlueprintType)
struct FCustomGameBot
{
	GENERATED_BODY()

private:
	UPROPERTY()
	uint8 _role;

	UPROPERTY()
	uint8 _difficulty;

	UPROPERTY()
	int32 _characterIndex;

	UPROPERTY()
	FString _botGUID;

	UPROPERTY()
	FString _botName;

	UPROPERTY()
	FLoadout _loadout;

public:
	SOCIALPARTY_API FCustomGameBot();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGameBot) { return 0; }
