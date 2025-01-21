#pragma once

#include "CoreMinimal.h"
#include "EChartAggregatorMode.h"
#include "GenerateLightmapTexCoordSettings.generated.h"

USTRUCT(BlueprintType)
struct FGenerateLightmapTexCoordSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 GenerateLightmapTexCoord : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LightmapTexCoordLevel;

	UPROPERTY()
	FString LightmapTexCoordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChartAggregatorMode ChartAggregatorMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GutterSpace;

public:
	SIMPLYGONUOBJECTS_API FGenerateLightmapTexCoordSettings();
};

FORCEINLINE uint32 GetTypeHash(const FGenerateLightmapTexCoordSettings) { return 0; }
