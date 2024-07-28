#pragma once

#include "CoreMinimal.h"
#include "CharacterToolSpawnParameters.generated.h"

USTRUCT(BlueprintType)
struct FCharacterToolSpawnParameters
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool IsAnimated;

	UPROPERTY(BlueprintReadWrite)
	bool ShowPower;

	UPROPERTY(BlueprintReadWrite)
	bool UseMasterPoseForItems;

public:
	DEADBYDAYLIGHT_API FCharacterToolSpawnParameters();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterToolSpawnParameters) { return 0; }
