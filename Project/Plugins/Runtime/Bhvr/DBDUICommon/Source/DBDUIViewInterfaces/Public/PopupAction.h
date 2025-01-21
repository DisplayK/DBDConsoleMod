#pragma once

#include "CoreMinimal.h"
#include "EPopupButtonType.h"
#include "PopupAction.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPopupAction, EPopupButtonType, popupAction);
