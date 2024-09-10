#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "BillboardCloudSettings.h"
#include "MappingImageSettings.h"
#include "BillboardCloudPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FBillboardCloudPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBillboardCloudSettings BillboardCloudSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FBillboardCloudPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FBillboardCloudPipelineSettings) { return 0; }
