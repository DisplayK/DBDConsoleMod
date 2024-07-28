#pragma once

#include "CoreMinimal.h"
#include "OnRoleSwitcherPressed.generated.h"

class UUMGRoleSwitcherWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoleSwitcherPressed, UUMGRoleSwitcherWidget*, switcher);
