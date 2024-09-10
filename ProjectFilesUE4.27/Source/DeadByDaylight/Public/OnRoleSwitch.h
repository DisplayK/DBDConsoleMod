#pragma once

#include "CoreMinimal.h"
#include "OnRoleSwitch.generated.h"

class UUMGRoleSwitcherWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRoleSwitch, UUMGRoleSwitcherWidget*, switcher, bool, swiped);
