#pragma once

#include "CoreMinimal.h"
#include "EArchiveMenuState.h"
#include "ArchiveMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArchiveMenuTabSelectedDelegate, EArchiveMenuState, menuState, bool, alreadySelected);
