#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "RemeshingPipelineSettings.h"
#include "RemeshingPipeline.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API URemeshingPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRemeshingPipelineSettings Settings;

public:
	URemeshingPipeline();
};

FORCEINLINE uint32 GetTypeHash(const URemeshingPipeline) { return 0; }
