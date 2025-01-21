#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreRewardWidget.generated.h"

class UDBDImage;
class UCoreLockedOverlayWidget;
class UCoreOnHoverBorderWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreRewardWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* RewardIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreLockedOverlayWidget* LockedOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsLocked(bool isLocked, bool useAnimation);

	UFUNCTION(BlueprintCallable)
	UCoreLockedOverlayWidget* GetLockedOverlay();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearData();

public:
	UCoreRewardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreRewardWidget) { return 0; }
