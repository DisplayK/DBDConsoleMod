#include "AmbientOcclusionCasterSettings.h"

FAmbientOcclusionCasterSettings::FAmbientOcclusionCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->RaysPerPixel = 0;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->OcclusionFalloff = 0.0f;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->OcclusionMultiplier = 0.0f;
	this->UseSimpleOcclusionMode = false;
}
