#pragma once

#include "CoreMinimal.h"
#include "ForceSpawnTileData.generated.h"

USTRUCT(BlueprintType)
struct FForceSpawnTileData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 matrixX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 matrixY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 rotation;

public:
	DEADBYDAYLIGHT_API FForceSpawnTileData();
};

FORCEINLINE uint32 GetTypeHash(const FForceSpawnTileData) { return 0; }
