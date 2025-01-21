#pragma once

#include "CoreMinimal.h"
#include "EArchiveTomeMenuState.h"
#include "ArchiveTomeMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveTomeMenuTabSelectedDelegate, const EArchiveTomeMenuState, menuState);
