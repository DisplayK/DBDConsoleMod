#include "CharacterAnimation.h"

FCharacterAnimation::FCharacterAnimation()
{
	this->Label = NAME_None;
	this->Data = FCharacterAnimationDropdown{};
	this->OutfitOverrides = TArray<FCharacterAnimationAssetOutfitOverride>();
}
