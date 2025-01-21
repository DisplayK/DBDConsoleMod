#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "TomeQuestNodeSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTomeQuestNodeSelectedDelegate, const FName&, nodeId, EPlayerRole, role, const FVector2D&, position);
