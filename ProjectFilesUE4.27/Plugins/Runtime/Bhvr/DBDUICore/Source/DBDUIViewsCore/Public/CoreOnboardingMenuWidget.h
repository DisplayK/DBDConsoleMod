#pragma once

#include "CoreMinimal.h"
#include "OnboardingMenuTabSelectedDelegate.h"
#include "OnboardingMenuViewInterface.h"
#include "MenuTabSelectedAgainDelegate.h"
#include "CoreBaseUserWidget.h"
#include "BackActionDelegate.h"
#include "CoreOnboardingMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreOnboardingMenuTitleWidget;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingMenuWidget : public UCoreBaseUserWidget, public IOnboardingMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UCoreTabContainerWidget* OnboardingMenuTabs;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreOnboardingMenuTitleWidget* MenuTitle;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* BackInputSwitcher;

private:
	UPROPERTY()
	FBackActionDelegate BackActionDelegate;

	UPROPERTY()
	FOnboardingMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY()
	FMenuTabSelectedAgainDelegate MenuTabSelectedAgainDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void SetTitleText(const bool isInTutorial);

	UFUNCTION(BlueprintCallable)
	void SetBackButton(const bool isFTUE);

	UFUNCTION()
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreOnboardingMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingMenuWidget) { return 0; }
