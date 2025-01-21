#include "IllusionaryPalletComponent.h"

float UIllusionaryPalletComponent::GetGlitchEffectRange() const
{
	return 0.0f;
}

void UIllusionaryPalletComponent::DeactivateIllusionaryPallet()
{

}

bool UIllusionaryPalletComponent::CanLocallyObservedPlayerSeeIllusionaryPallet() const
{
	return false;
}

void UIllusionaryPalletComponent::ActivateIllusionaryPallet(const bool isPalletDown)
{

}

UIllusionaryPalletComponent::UIllusionaryPalletComponent()
{
	this->_illusionaryPalletTriggerZone = NULL;
	this->_glitchEffectRange = 1600.000000;
	this->_illusionaryPalletStaticMeshComponent = NULL;
}
