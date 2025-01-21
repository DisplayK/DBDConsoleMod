#include "ScreenshotToolDataAsset.h"

UScreenshotToolDataAsset::UScreenshotToolDataAsset()
{
	this->GenderViewOverrides = TArray<FGenderViewSetting>();
	this->CharacterViewOverrides = TArray<FCharacterItemCategoryViewSetting>();
	this->ItemViewOverrides = TArray<FItemViewSetting>();
	this->OutfitView = TArray<FRoleGenderViewSetting>();
	this->OutfitCharacterOverrides = TArray<FCharacterViewSetting>();
	this->OutfitTwoPartsView = TArray<FRoleGenderViewSetting>();
	this->OutfitOverrides = TArray<FOutfitViewSetting>();
	this->AnimationOverrides = TArray<FCharacterAnimation>();
	this->CharmsCategoryOverrides = TArray<FCharmCategorySetting>();
	this->CharmOverrides = TArray<FCharmViewSetting>();
}
