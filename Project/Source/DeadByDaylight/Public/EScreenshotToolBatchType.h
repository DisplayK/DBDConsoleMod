#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolBatchType.generated.h"

UENUM(BlueprintType)
enum class EScreenshotToolBatchType : uint8
{
	SelectedItemOrOutfit,
	SelectedItemOrOutfitSeparated,
	SelectedCharacterItems,
	SelectedCharacterOutfits,
	SelectedCharacterAndCategory,
	ItemsMissingIcon,
	OutfitMissingIcon,
	CharmsMissingIcon,
	PerkCharmsMissingIcon,
	AllItems,
	AllOutfits,
	AllCharms,
	AllPerkCharms,
};
