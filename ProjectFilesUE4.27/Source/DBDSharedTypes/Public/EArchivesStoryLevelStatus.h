#pragma once

#include "CoreMinimal.h"
#include "EArchivesStoryLevelStatus.generated.h"

UENUM(BlueprintType)
enum class EArchivesStoryLevelStatus : uint8
{
	Locked,
	Unavailable,
	Available,
	Completed,
	Mastered,
};
