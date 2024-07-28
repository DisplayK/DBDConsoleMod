#include "DBDOutlineComponent.h"
#include "UObject/NoExportTypes.h"

class UMaterialInterface;
class UTexture;

void UDBDOutlineComponent::SetTargetColor(FLinearColor color)
{

}

void UDBDOutlineComponent::SetOutlineIntensity(float outlineIntensity)
{

}

void UDBDOutlineComponent::SetMinimumOutlineDistance(float distance)
{

}

void UDBDOutlineComponent::SetMaterialCopyTarget(UMaterialInterface* inMaterialToCopy)
{

}

void UDBDOutlineComponent::SetIsOccludingOutlines(const bool isOccluding)
{

}

void UDBDOutlineComponent::SetFadeTexture(UTexture* inFadeTexture)
{

}

void UDBDOutlineComponent::SetFadeIntensity(float fadeIntensity)
{

}

void UDBDOutlineComponent::ResetToTransparent()
{

}

void UDBDOutlineComponent::RefreshOutlineComponent()
{

}

void UDBDOutlineComponent::OnLevelReadyToPlay()
{

}

void UDBDOutlineComponent::InitBatcher()
{

}

FLinearColor UDBDOutlineComponent::GetTargetColor() const
{
	return FLinearColor{};
}

UDBDOutlineComponent::UDBDOutlineComponent()
{
	this->InterpolationSpeed = 2.000000;
	this->ShouldBeAboveOutlines = false;
	this->ForceOutlineFarAway = false;
	this->LimitToCustomDepthObjects = false;
	this->FadeOutAsClosingIn = true;
	this->IsAlwaysVisible = false;
	this->MinimumOutlineDistance = 4096.000000;
	this->OutlineName = TEXT("");
	this->_batchMeshCommands = NULL;
	this->_renderingStrategy = NULL;
}
