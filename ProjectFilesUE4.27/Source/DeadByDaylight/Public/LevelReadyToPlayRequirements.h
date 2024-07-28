#pragma once

#include "CoreMinimal.h"
#include "LevelReadyToPlayRequirements.generated.h"

class ADBDPlayer;

USTRUCT()
struct FLevelReadyToPlayRequirements
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ADBDPlayer* player;

	UPROPERTY()
	uint8 perkCount;

	UPROPERTY()
	uint8 itemCount;

	UPROPERTY()
	uint8 addonCount;

public:
	DEADBYDAYLIGHT_API FLevelReadyToPlayRequirements();
};

FORCEINLINE uint32 GetTypeHash(const FLevelReadyToPlayRequirements) { return 0; }
