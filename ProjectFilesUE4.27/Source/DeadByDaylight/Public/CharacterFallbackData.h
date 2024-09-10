#pragma once

#include "CoreMinimal.h"
#include "CharacterFallbackData.generated.h"

USTRUCT()
struct FCharacterFallbackData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString DefaultKiller;

	UPROPERTY()
	FString DefaultSurvivor;

public:
	DEADBYDAYLIGHT_API FCharacterFallbackData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterFallbackData) { return 0; }
