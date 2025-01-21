#pragma once

#include "CoreMinimal.h"
#include "EChartAggregatorMode.h"
#include "ESurfaceAreaScale.h"
#include "ChartAggregatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FChartAggregatorSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChartAggregatorMode ChartAggregatorMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurfaceAreaScale SurfaceAreaScale;

	UPROPERTY()
	int32 OriginalTexCoordLevel;

	UPROPERTY()
	FString OriginalTexCoordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 SeparateOverlappingCharts : 1;

	UPROPERTY()
	FString OriginalChartProportionsChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 LockUVRotation : 1;

public:
	SIMPLYGONUOBJECTS_API FChartAggregatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FChartAggregatorSettings) { return 0; }
