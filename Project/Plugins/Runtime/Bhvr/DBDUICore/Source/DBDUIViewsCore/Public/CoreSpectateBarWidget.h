#pragma once

#include "CoreMinimal.h"
#include "SpectateLeftArrowTriggeredDelegate.h"
#include "SpectateBarViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "SpectateLeaveTriggeredDelegate.h"
#include "SpectateRightArrowTriggeredelegate.h"
#include "CoreSpectateBarWidget.generated.h"

class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSpectateBarWidget : public UCoreBaseHudWidget, public ISpectateBarViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeaveInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrowInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrowInputSwitcher;

private:
	UPROPERTY(BlueprintAssignable)
	FSpectateLeaveTriggeredDelegate _leaveTriggeredDelegate;

	UPROPERTY(BlueprintAssignable)
	FSpectateLeftArrowTriggeredDelegate _leftArrowTriggeredDelegate;

	UPROPERTY(BlueprintAssignable)
	FSpectateRightArrowTriggeredelegate _rightArrowTriggeredDelegate;

private:
	UFUNCTION()
	void OnRightArrowTriggered();

	UFUNCTION()
	void OnLeftArrowTriggered();

	UFUNCTION()
	void OnLeaveTriggered();

public:
	UCoreSpectateBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSpectateBarWidget) { return 0; }
