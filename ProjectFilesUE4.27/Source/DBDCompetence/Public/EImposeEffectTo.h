#pragma once

#include "CoreMinimal.h"
#include "EImposeEffectTo.generated.h"

UENUM(BlueprintType)
enum class EImposeEffectTo : uint8
{
	EventInstigator,
	EventTarget,
	AddonOwner,
	AllSurvivors,
};
