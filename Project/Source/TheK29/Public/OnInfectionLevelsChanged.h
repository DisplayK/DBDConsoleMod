#pragma once

#include "CoreMinimal.h"
#include "OnInfectionLevelsChanged.generated.h"

class ACamperPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInfectionLevelsChanged, ACamperPlayer*, survivor, bool, isActive);
