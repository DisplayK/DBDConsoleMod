#pragma once

#include "CoreMinimal.h"
#include "SettingsSubCategory.generated.h"

UENUM()
enum class SettingsSubCategory : int64
{
	None = -1,
	Language,
	Tutorial,
	Privacy,
	Accessibility,
	InGameText,
	ColorBlindMode,
	MotionSickness,
	Social,
	GameplayPrivacy,
	Graphics,
	UIHud,
	Audio,
	CommonControls,
	SurvivorControls,
	KillerControls,
	Atlanta,
};
