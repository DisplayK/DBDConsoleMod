#pragma once

#include "CoreMinimal.h"
#include "ECustomMatchTab.generated.h"

UENUM(BlueprintType)
enum class ECustomMatchTab : uint8
{
	Perks,
	ItemsAndAddons,
	Offerings,
	Maps,
	BotDifficulty,
	BotCharacter,
	Count,
};
