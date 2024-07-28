#include "BillboardCloudPipelineSettings.h"

FBillboardCloudPipelineSettings::FBillboardCloudPipelineSettings()
{
	this->BillboardCloudSettings = FBillboardCloudSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
