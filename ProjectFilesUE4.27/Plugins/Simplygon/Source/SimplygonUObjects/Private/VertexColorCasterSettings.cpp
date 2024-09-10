#include "VertexColorCasterSettings.h"

FVertexColorCasterSettings::FVertexColorCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->OutputColorLevel = 0;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->OutputColorName = TEXT("");
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->ColorSpaceEdgeThreshold = 0.0f;
}
