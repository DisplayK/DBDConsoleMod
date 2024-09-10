#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChartAggregatorSettings.h"
#include "SimplygonStandinPipeline.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonStandinPipeline : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FChartAggregatorSettings ChartAggregatorSettings;

public:
	USimplygonStandinPipeline();
};

FORCEINLINE uint32 GetTypeHash(const USimplygonStandinPipeline) { return 0; }
