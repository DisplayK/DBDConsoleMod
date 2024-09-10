#pragma once

#include "CoreMinimal.h"
#include "ESoundIndicatorType.generated.h"

UENUM(BlueprintType)
enum class ESoundIndicatorType : uint8
{
	None,
	CloseNoiseIndicator,
	ExitOpenedIndicator,
	GeneratorIndicator,
	HatchIndicator,
	HookedIndicator,
	KillerCuesIndicator,
	GlobalSoundIndicator,
	DirectionalTerrorRadiusIndicator,
};
