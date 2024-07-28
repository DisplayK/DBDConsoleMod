#include "DisplacementCasterSettings.h"

FDisplacementCasterSettings::FDisplacementCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->OpacityChannel = TEXT("");
	this->UseMultisampling = false;
	this->DistanceScaling = 0.0f;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->Dilation = 0;
	this->GenerateScalarDisplacement = false;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->GenerateTangentSpaceDisplacement = false;
	this->NormalMapTexCoordLevel = 0;
}
