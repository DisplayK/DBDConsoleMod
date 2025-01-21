#pragma once

#include "CoreMinimal.h"
#include "ETallyListPageID.generated.h"

UENUM(BlueprintType)
enum class ETallyListPageID : uint8
{
	Scoreboard,
	Bloodpoints,
	Rank,
	PlayerLevel,
	CharacterLevel,
	NumberOfPages,
};
