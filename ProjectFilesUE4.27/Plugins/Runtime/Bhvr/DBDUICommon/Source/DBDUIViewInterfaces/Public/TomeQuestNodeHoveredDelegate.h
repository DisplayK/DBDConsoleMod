#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "TomeQuestNodeHoveredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTomeQuestNodeHoveredDelegate, EPlayerRole, role);
