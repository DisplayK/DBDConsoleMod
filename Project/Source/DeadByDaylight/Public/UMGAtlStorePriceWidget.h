#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlStorePriceWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlStorePriceWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta=(BindWidgetOptional))
	UTextBlock* PriceText;

public:
	UUMGAtlStorePriceWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlStorePriceWidget) { return 0; }
