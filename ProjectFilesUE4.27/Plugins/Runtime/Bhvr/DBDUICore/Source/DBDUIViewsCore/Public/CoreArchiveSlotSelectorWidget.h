#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreArchiveSlotSelectorWidget.generated.h"

class UArchiveNodeTooltipWidget;
class UCoreKeyListenerInputPromptWidget;
class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveSlotSelectorWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UArchiveNodeTooltipWidget* NodeTooltip;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* SurvivorSlotPromptWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* BothSlotPromptWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* KillerSlotPromptWidget;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* CancelPromptWidget;

private:
	UFUNCTION()
	void OnSurvivorSelection();

	UFUNCTION()
	void OnKillerSelection();

	UFUNCTION()
	void OnCancelSelection();

	UFUNCTION()
	void OnBothSelection();

public:
	UCoreArchiveSlotSelectorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveSlotSelectorWidget) { return 0; }
