#pragma once

#include "CoreMinimal.h"
#include "OnKeyListenerInputPromptTriggeredDelegate.h"
#include "CoreBaseUserWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"
#include "CoreKeyListenerInputPromptWidget.generated.h"

class UCoreInputPromptWidget;
class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputPromptWidget* InputPrompt;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* LabelTB;

private:
	UPROPERTY(BlueprintAssignable)
	FOnKeyListenerInputPromptTriggeredDelegate _onKeyListenerInputPromptTriggeredDelegate;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

public:
	UFUNCTION(BlueprintCallable)
	bool IsEnabled();

public:
	UCoreKeyListenerInputPromptWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreKeyListenerInputPromptWidget) { return 0; }
