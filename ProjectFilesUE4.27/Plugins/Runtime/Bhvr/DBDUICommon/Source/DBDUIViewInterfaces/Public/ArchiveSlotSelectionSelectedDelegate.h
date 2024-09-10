#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ArchiveSlotSelectionSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveSlotSelectionSelectedDelegate, EPlayerRole, role);
