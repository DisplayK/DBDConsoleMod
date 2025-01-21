#include "ColorCasterSettings.h"

FColorCasterSettings::FColorCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->BakeOpacityInAlpha = false;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->OutputOpacityType = EOutputOpacityType::Opacity;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->SkipCastingIfNoInputChannel = false;
	this->OutputSRGB = false;
}
