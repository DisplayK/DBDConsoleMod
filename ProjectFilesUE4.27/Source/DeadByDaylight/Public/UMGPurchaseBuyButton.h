#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPurchaseBuyButton.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseBuyButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* PriceText;

public:
	UUMGPurchaseBuyButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseBuyButton) { return 0; }
