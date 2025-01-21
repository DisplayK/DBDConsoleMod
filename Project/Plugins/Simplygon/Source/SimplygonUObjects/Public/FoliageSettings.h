#pragma once

#include "CoreMinimal.h"
#include "FoliageSettings.generated.h"

USTRUCT(BlueprintType)
struct FFoliageSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SeparateTrunkAndFoliage : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeparateFoliageTriangleRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SeparateFoliageTriangleThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeparateFoliageAreaThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeparateFoliageSizeThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TrunkReductionRatio;

public:
	SIMPLYGONUOBJECTS_API FFoliageSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFoliageSettings) { return 0; }
