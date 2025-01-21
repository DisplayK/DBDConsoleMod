#include "AggregationPipelineSettings.h"

FAggregationPipelineSettings::FAggregationPipelineSettings()
{
	this->AggregationSettings = FAggregationSettings{};
	this->VisibilitySettings = FVisibilitySettings{};
	this->GeometryCullingSettings = FGeometryCullingSettings{};
	this->VertexWeightSettings = FVertexWeightSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->GenerateLightmapTexCoordSettings = FGenerateLightmapTexCoordSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
