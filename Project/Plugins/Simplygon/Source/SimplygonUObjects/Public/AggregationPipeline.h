#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "AggregationPipelineSettings.h"
#include "AggregationPipeline.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API UAggregationPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAggregationPipelineSettings Settings;

public:
	UAggregationPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UAggregationPipeline) { return 0; }
