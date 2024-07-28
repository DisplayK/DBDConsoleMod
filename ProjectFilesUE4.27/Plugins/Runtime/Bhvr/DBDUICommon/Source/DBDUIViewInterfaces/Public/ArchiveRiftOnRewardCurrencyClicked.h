#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "ArchiveRiftOnRewardCurrencyClicked.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchiveRiftOnRewardCurrencyClicked, ECurrencyType, currencyId);
