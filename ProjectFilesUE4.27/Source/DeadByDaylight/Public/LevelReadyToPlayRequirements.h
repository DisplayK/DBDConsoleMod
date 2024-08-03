#pragma once

#include "CoreMinimal.h"
#include "LevelReadyToPlayRequirements.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FLevelReadyToPlayRequirements
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ADBDPlayer* player;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 perkCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 itemCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 addonCount;

public:
	DEADBYDAYLIGHT_API FLevelReadyToPlayRequirements();
};

FORCEINLINE uint32 GetTypeHash(const FLevelReadyToPlayRequirements) { return 0; }
