#pragma once

#include "CoreMinimal.h"
#include "SettingsType.generated.h"

UENUM()
enum class SettingsType : int64
{
	None = -1,
	Button,
	PlayerId,
	NumericStepper,
	Dropdown,
	ColorBar,
	TextStepper,
	BoolTextStepper,
	Checkbox,
};
