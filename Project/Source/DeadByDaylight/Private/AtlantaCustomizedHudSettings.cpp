#include "AtlantaCustomizedHudSettings.h"

FAtlantaCustomizedHudSettings::FAtlantaCustomizedHudSettings()
{
	this->Id = FGameplayTag{};
	this->NormalizedOffset = FVector2D{};
	this->Scale = 0.0f;
	this->RenderOpacity = 0.0f;
	this->Version = 0;
	this->OverlapWrapperIds = FGameplayTagContainer{};
}
