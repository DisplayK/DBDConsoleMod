#pragma once

#include "CoreMinimal.h"
#include "OnHealerSkillCheckResponseAesthetic.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealerSkillCheckResponseAesthetic, bool, success, ADBDPlayer*, healer);
