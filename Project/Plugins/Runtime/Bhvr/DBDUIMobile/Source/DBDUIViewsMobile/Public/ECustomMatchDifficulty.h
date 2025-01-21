#pragma once

#include "CoreMinimal.h"
#include "ECustomMatchDifficulty.generated.h"

UENUM(BlueprintType)
enum class ECustomMatchDifficulty : uint8
{
	Easy,
	Medium,
	Hard,
	Suggested,
	Random,
	None,
	Max,
};
