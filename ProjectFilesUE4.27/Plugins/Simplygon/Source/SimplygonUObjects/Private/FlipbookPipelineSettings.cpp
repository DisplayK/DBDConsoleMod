#include "FlipbookPipelineSettings.h"

FFlipbookPipelineSettings::FFlipbookPipelineSettings()
{
	this->FlipbookSettings = FFlipbookSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
