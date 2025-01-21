#pragma once

#include "CoreMinimal.h"
#include "ECameraFadeState.generated.h"

UENUM(BlueprintType)
enum class ECameraFadeState : uint8
{
	FadedIn,
	FadingOut,
	FadedOut,
	FadingIn,
};
