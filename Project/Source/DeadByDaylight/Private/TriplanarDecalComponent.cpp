#include "TriplanarDecalComponent.h"

UTriplanarDecalComponent::UTriplanarDecalComponent()
{
	this->MinHeight = 0.500000;
	this->Height = 0.005000;
	this->MaskIntensity = 100.000000;
	this->TopTexture = NULL;
	this->BottomTexture = NULL;
	this->MaskTexture = NULL;
	this->MinQualitySetting = DM_High;
	this->_triPlanarDecal = NULL;
	this->_triPlanarDecalClass = NULL;
	this->_decalMaterial = NULL;
}
