#pragma once

#include "CoreMinimal.h"
#include "CoreTabContainerWidget.h"
#include "TabWidgetData.h"
#include "Input/Events.h"
#include "DBDDropDownListWidget.generated.h"

class UCoreSelectableButtonWidget;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class UDBDDropDownListWidget : public UCoreTabContainerWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedOptionDelegate, FTabWidgetData, buttonData);

public:
	UPROPERTY(BlueprintAssignable)
	FOnSelectedOptionDelegate OnSelectedOptionDelegate;

private:
	UPROPERTY(Export)
	UCoreButtonWidget* _triggerButton;

public:
	UFUNCTION(BlueprintCallable)
	void UnbindFromTrigger();

protected:
	UFUNCTION()
	void OnUserClicked(const FPointerEvent& mouseEvent);

private:
	UFUNCTION()
	void OnTriggerClicked(UCoreButtonWidget* buttonTarget);

protected:
	UFUNCTION()
	void OnOptionSelected(UCoreSelectableButtonWidget* selectedButton);

private:
	UFUNCTION(BlueprintCallable)
	void HideDropDownList();

public:
	UFUNCTION(BlueprintCallable)
	void BindToTrigger(UCoreButtonWidget* triggerButton);

public:
	UDBDDropDownListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDropDownListWidget) { return 0; }
