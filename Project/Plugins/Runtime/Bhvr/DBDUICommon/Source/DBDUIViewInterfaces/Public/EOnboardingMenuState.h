#pragma once

#include "CoreMinimal.h"
#include "EOnboardingMenuState.generated.h"

UENUM(BlueprintType)
enum class EOnboardingMenuState : uint8
{
	Tutorial,
	GameManual,
};
