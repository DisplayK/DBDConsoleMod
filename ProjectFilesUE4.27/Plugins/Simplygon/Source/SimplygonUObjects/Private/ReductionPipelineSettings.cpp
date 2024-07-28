#include "ReductionPipelineSettings.h"

FReductionPipelineSettings::FReductionPipelineSettings()
{
	this->ReductionSettings = FReductionSettings{};
	this->RepairSettings = FRepairSettings{};
	this->NormalCalculationSettings = FNormalCalculationSettings{};
	this->VisibilitySettings = FVisibilitySettings{};
	this->BoneSettings = FBoneSettings{};
	this->VertexWeightSettings = FVertexWeightSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
