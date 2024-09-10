#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "LoadoutSlotFloatingWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class ULoadoutSlotFloatingWidget : public UBaseTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* Message;

public:
	ULoadoutSlotFloatingWidget();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutSlotFloatingWidget) { return 0; }
