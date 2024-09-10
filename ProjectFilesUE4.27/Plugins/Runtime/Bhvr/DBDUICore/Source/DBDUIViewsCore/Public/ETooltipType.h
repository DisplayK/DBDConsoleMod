#pragma once

#include "CoreMinimal.h"
#include "ETooltipType.generated.h"

UENUM(BlueprintType)
enum class ETooltipType : uint8
{
	None,
	ArchiveCompendium,
	ArchiveNode,
	ArchiveRewardNode,
	Character,
	CurrencyProgression,
	Customization,
	Label,
	Loadout,
};
