#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "OnTooltipTriggeredOnCurrencyEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTooltipTriggeredOnCurrencyEvent, const FTooltipPressedData&, tooltipPressedData, const ECurrencyType, currencyType);
