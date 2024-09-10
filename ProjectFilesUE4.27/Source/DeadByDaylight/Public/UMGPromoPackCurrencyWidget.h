#pragma once

#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGPromoPackCurrencyWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackCurrencyWidget : public UUMGPromoPackItemWidget
{
	GENERATED_BODY()

public:
	UUMGPromoPackCurrencyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackCurrencyWidget) { return 0; }
