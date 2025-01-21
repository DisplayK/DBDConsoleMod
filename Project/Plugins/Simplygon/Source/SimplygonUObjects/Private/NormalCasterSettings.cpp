#include "NormalCasterSettings.h"

FNormalCasterSettings::FNormalCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->FlipBackfacingNormals = false;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->GenerateTangentSpaceNormals = false;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->FlipGreen = false;
	this->CalculateBitangentPerFragment = false;
	this->NormalizeInterpolatedTangentSpace = false;
}
