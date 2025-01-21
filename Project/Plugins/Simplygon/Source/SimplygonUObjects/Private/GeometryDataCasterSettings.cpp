#include "GeometryDataCasterSettings.h"

FGeometryDataCasterSettings::FGeometryDataCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->GeometryDataFieldType = EGeometryDataFieldType::Coords;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->GeometryDataFieldIndex = 0;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->MappingLayerIndex = 0;
	this->MappingInf = FVector4{};
	this->MappingSup = FVector4{};
}
