#include "ImpostorFromSingleViewPipelineSettings.h"

FImpostorFromSingleViewPipelineSettings::FImpostorFromSingleViewPipelineSettings()
{
	this->ImpostorFromSingleViewSettings = FImpostorFromSingleViewSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
