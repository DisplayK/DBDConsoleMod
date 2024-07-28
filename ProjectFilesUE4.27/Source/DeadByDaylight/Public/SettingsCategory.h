#pragma once

#include "CoreMinimal.h"
#include "SettingsCategory.generated.h"

UENUM()
enum class SettingsCategory : int64
{
	None = -1,
	General,
	Accessibility,
	Beta,
	Online,
	Graphics,
	Audio,
	Controls,
	Atlanta,
};
