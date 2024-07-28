#include "RemeshingPipelineSettings.h"

FRemeshingPipelineSettings::FRemeshingPipelineSettings()
{
	this->RemeshingSettings = FRemeshingSettings{};
	this->BoneSettings = FBoneSettings{};
	this->GeometryCullingSettings = FGeometryCullingSettings{};
	this->VisibilitySettings = FVisibilitySettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
