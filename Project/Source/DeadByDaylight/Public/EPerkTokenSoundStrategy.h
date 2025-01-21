#pragma once

#include "CoreMinimal.h"
#include "EPerkTokenSoundStrategy.generated.h"

UENUM(BlueprintType)
enum class EPerkTokenSoundStrategy : uint8
{
	NoSound,
	SoundOnEveryTokenChange,
	SoundOnReachMaxTokens,
};
