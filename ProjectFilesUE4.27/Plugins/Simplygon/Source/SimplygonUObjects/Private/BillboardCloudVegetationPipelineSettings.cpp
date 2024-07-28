#include "BillboardCloudVegetationPipelineSettings.h"

FBillboardCloudVegetationPipelineSettings::FBillboardCloudVegetationPipelineSettings()
{
	this->BillboardCloudSettings = FBillboardCloudSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
