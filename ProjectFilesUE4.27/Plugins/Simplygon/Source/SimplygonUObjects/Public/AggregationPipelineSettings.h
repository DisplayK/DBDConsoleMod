#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "VertexWeightSettings.h"
#include "AggregationSettings.h"
#include "VisibilitySettings.h"
#include "GeometryCullingSettings.h"
#include "MappingImageSettings.h"
#include "GenerateLightmapTexCoordSettings.h"
#include "AggregationPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FAggregationPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAggregationSettings AggregationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVisibilitySettings VisibilitySettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGeometryCullingSettings GeometryCullingSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVertexWeightSettings VertexWeightSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings;

	UPROPERTY(EditAnywhere, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FAggregationPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAggregationPipelineSettings) { return 0; }
