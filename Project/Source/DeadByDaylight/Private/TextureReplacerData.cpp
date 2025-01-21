#include "TextureReplacerData.h"

FTextureReplacerData::FTextureReplacerData()
{
	this->BaseMaterial = NULL;
	this->ReplacementTexture = NULL;
	this->TextureParameterName = NAME_None;
	this->ExplicitMaterialSlot = 0;
}
