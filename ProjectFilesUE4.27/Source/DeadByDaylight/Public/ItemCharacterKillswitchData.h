#pragma once

#include "CoreMinimal.h"
#include "CharacterFallbackData.h"
#include "ItemCharacterKillswitchData.generated.h"

USTRUCT()
struct FItemCharacterKillswitchData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FCharacterFallbackData CharacterFallback;

	UPROPERTY()
	TArray<FString> DisabledItems;

	UPROPERTY(SkipSerialization)
	bool DisabledItems_IsSet;

public:
	DEADBYDAYLIGHT_API FItemCharacterKillswitchData();
};

FORCEINLINE uint32 GetTypeHash(const FItemCharacterKillswitchData) { return 0; }
