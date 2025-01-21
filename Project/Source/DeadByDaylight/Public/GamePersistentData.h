#pragma once

#include "CoreMinimal.h"
#include "GamePresetData.h"
#include "GamePersistentData.generated.h"

USTRUCT()
struct FGamePersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PlayerCount;

	UPROPERTY()
	int32 SpectatorCount;

	UPROPERTY()
	FGamePresetData GamePresetData;

public:
	DEADBYDAYLIGHT_API FGamePersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FGamePersistentData) { return 0; }
