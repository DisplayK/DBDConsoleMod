#pragma once

#include "CoreMinimal.h"
#include "SimplygonStandinPipeline.h"
#include "BillboardCloudPipelineSettings.h"
#include "BillboardCloudPipeline.generated.h"

UCLASS(EditInlineNew)
class SIMPLYGONUOBJECTS_API UBillboardCloudPipeline : public USimplygonStandinPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FBillboardCloudPipelineSettings Settings;

public:
	UBillboardCloudPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UBillboardCloudPipeline) { return 0; }
