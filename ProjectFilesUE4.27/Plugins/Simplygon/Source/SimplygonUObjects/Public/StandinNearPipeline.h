#pragma once

#include "CoreMinimal.h"
#include "SimplygonStandinPipeline.h"
#include "AggregationPipelineSettings.h"
#include "StandinNearPipeline.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UStandinNearPipeline : public USimplygonStandinPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAggregationPipelineSettings Settings;

public:
	UStandinNearPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UStandinNearPipeline) { return 0; }
