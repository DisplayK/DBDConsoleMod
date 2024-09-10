#include "MappingImageSettings.h"

FMappingImageSettings::FMappingImageSettings()
{
	this->GenerateMappingImage = false;
	this->GenerateTexCoords = false;
	this->GenerateTangents = false;
	this->InputMaterialCount = 0;
	this->UseFullRetexturing = false;
	this->ApplyNewMaterialIds = false;
	this->OutputMaterialCount = 0;
	this->ReplaceMappingImages = false;
	this->MaximumLayers = 0;
	this->AllowTransparencyMapping = false;
	this->UseAutomaticTextureSize = false;
	this->AutomaticTextureSizeMultiplier = 0.0f;
	this->ForcePower2Texture = false;
	this->OnlyParameterizeInvalidUVs = false;
	this->TexCoordLevel = 0;
	this->TexCoordName = TEXT("");
	this->TexCoordGeneratorType = ETexCoordGeneratorType::Parameterizer;
	this->InputMaterialSettings = TArray<FInputMaterialSettings>();
	this->OutputMaterialSettings = TArray<FOutputMaterialSettings>();
	this->ChartAggregatorSettings = FChartAggregatorSettings{};
	this->ParameterizerSettings = FParameterizerSettings{};
}
