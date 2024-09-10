#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EInputSwitcherDisplayRule.h"
#include "Framework/Text/TextLayout.h"
#include "CoreBaseUserWidget.h"
#include "InputSwitcherTriggeredDelegate.h"
#include "EUIActionType.h"
#include "CoreInputSwitcherWidget.generated.h"

class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;

UCLASS(EditInlineNew)
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EInputSwitcherDisplayRule ButtonDisplayRule;

	UPROPERTY(EditDefaultsOnly)
	EInputSwitcherDisplayRule InputPromptDisplayRule;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreKeyListenerInputPromptWidget* InputPrompt;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreButtonWidget* Button;

	UPROPERTY(EditInstanceOnly)
	bool _shouldRegisterForInputInConstruct;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<ETextJustify::Type> _alignment;

	UPROPERTY(EditInstanceOnly)
	bool _isEnabled;

private:
	UPROPERTY(BlueprintAssignable)
	FInputSwitcherTriggeredDelegate _onInputSwitcherTriggeredDelegate;

	UPROPERTY(EditInstanceOnly)
	bool SendAnalyticsData;

	UPROPERTY(EditInstanceOnly)
	FString AnalyticsName;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetAlignment(ETextJustify::Type newAlignment);

private:
	UFUNCTION()
	void OnInputPromptTriggered();

	UFUNCTION()
	void OnButtonClicked(UCoreButtonWidget* target);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnAlignmentChanged(ETextJustify::Type newAlignment);

public:
	UFUNCTION(BlueprintCallable)
	UCoreKeyListenerInputPromptWidget* GetInputPrompt();

	UFUNCTION(BlueprintCallable)
	UCoreButtonWidget* GetButton();

public:
	UCoreInputSwitcherWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreInputSwitcherWidget) { return 0; }
