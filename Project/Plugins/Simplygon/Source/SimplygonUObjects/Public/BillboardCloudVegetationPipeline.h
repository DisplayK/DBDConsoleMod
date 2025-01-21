#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "BillboardCloudVegetationPipelineSettings.h"
#include "BillboardCloudVegetationPipeline.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UBillboardCloudVegetationPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FBillboardCloudVegetationPipelineSettings Settings;

public:
	UBillboardCloudVegetationPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UBillboardCloudVegetationPipeline) { return 0; }
