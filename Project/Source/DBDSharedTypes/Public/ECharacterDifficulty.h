#pragma once

#include "CoreMinimal.h"
#include "ECharacterDifficulty.generated.h"

UENUM(BlueprintType)
enum class ECharacterDifficulty : uint8
{
	VE_None,
	VE_Easy,
	VE_Intermediate,
	VE_Hard,
	VE_VeryHard,
};
