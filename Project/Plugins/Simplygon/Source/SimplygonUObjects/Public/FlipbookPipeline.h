#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "FlipbookPipelineSettings.h"
#include "FlipbookPipeline.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UFlipbookPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FFlipbookPipelineSettings Settings;

public:
	UFlipbookPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UFlipbookPipeline) { return 0; }
