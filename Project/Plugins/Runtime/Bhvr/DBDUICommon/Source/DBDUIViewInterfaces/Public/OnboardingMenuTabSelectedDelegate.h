#pragma once

#include "CoreMinimal.h"
#include "EOnboardingMenuState.h"
#include "OnboardingMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnboardingMenuTabSelectedDelegate, EOnboardingMenuState, menuState);
