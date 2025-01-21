#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "ECurrencyType.h"
#include "UMGCurrencyWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGCurrencyWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType currencyType;

protected:
	UFUNCTION()
	void HandleTooltipLongPressEvent();

public:
	UUMGCurrencyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCurrencyWidget) { return 0; }
