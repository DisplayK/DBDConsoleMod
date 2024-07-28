#pragma once

#include "CoreMinimal.h"
#include "OnboardingTutorialViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PendingStepData.h"
#include "TutorialSelectedDelegate.h"
#include "CoreOnboardingTutorialPanelWidget.generated.h"

class UUserWidget;
class UCoreOnboardingTutorialButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget, public IOnboardingTutorialViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UCoreOnboardingTutorialButtonWidget*> TutorialButtons;

	UPROPERTY(BlueprintAssignable)
	FTutorialSelectedDelegate TutorialSelectedDelegate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUserWidget* LoadingWidget;

private:
	UPROPERTY(Transient)
	TArray<FPendingStepData> _pendingData;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTutorialSeparators(const FString& completedStepId);

	UFUNCTION(BlueprintImplementableEvent)
	void SetTutorialDescription(const FText& description, bool isWarning);

private:
	UFUNCTION()
	void NextPendingButtonUpdated();

	UFUNCTION()
	void CheckNextPendingButtonUpdate();

public:
	UCoreOnboardingTutorialPanelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreOnboardingTutorialPanelWidget) { return 0; }
