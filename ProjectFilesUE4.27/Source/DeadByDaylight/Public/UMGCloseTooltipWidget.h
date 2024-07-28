#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCloseTooltipWidget.generated.h"

class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGCloseTooltipWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* FullScreenButton;

private:
	UFUNCTION()
	void HandleCloseTooltipButton();

public:
	UUMGCloseTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCloseTooltipWidget) { return 0; }
