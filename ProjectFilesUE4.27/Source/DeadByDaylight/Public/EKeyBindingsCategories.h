#pragma once

#include "CoreMinimal.h"
#include "EKeyBindingsCategories.generated.h"

UENUM()
enum class EKeyBindingsCategories : int64
{
	None = -1,
	Movement,
	Interactions,
	Camera,
	Gestures,
};
