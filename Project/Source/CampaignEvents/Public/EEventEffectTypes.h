#pragma once

#include "CoreMinimal.h"
#include "EEventEffectTypes.generated.h"

UENUM(BlueprintType)
enum class EEventEffectTypes : uint8
{
	Bloodpoints,
	Experience,
	RetentionRewards,
	PromoPack,
	EventItemsPack,
	ProvingGroundCharacterRand,
	ProvingGroundStore,
};
