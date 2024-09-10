#pragma once

#include "CoreMinimal.h"
#include "EInteractionSkillInputModes.generated.h"

UENUM(BlueprintType)
enum class EInteractionSkillInputModes : uint8
{
	Once,
	Hold,
	Toggle,
	ToggleHold,
	OneClickHold,
};
