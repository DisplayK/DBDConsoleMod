#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "ReductionPipelineSettings.h"
#include "ReductionPipeline.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API UReductionPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FReductionPipelineSettings Settings;

public:
	UReductionPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UReductionPipeline) { return 0; }
