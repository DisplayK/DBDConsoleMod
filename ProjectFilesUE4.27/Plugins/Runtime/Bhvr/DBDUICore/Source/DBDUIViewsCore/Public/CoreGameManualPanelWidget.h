#pragma once

#include "CoreMinimal.h"
#include "EHelpType.h"
#include "GameManualViewInterface.h"
#include "EGameManualMenuState.h"
#include "CoreBaseUserWidget.h"
#include "OnSetOnboardingMenuSubtitleDelegate.h"
#include "OnResetOnboardingMenuSubtitleDelegate.h"
#include "CoreGameManualPanelWidget.generated.h"

class UDBDTextBlock;
class UPanelWidget;
class UCoreGameManualCategoryButton;
class UCoreTabContainerWidget;
class UDBDRichTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGameManualPanelWidget : public UCoreBaseUserWidget, public IGameManualViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite)
	EGameManualMenuState _currentSelectedManualMenu;

	UPROPERTY(BlueprintReadWrite)
	EHelpType _currentGameManualTopic;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* CategoryPanel;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreGameManualCategoryButton* GameCategoryButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreGameManualCategoryButton* SurvivorCategoryButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreGameManualCategoryButton* KillerCategoryButton;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* TopicsPanel;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreTabContainerWidget* GameManualTopicsTabs;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* GameManualContentTitle;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* GameManualContentSubtitle;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* GameManualContentText;

private:
	UPROPERTY(BlueprintAssignable)
	FOnSetOnboardingMenuSubtitleDelegate _onSetOnboardingMenuSubtitleDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnResetOnboardingMenuSubtitleDelegate _onResetOnboardingMenuSubtitleDelegate;

private:
	UFUNCTION(BlueprintCallable)
	void ToggleGameManualMenuState();

	UFUNCTION(BlueprintCallable)
	void ShowHelpTopics(EHelpType categoryType);

	UFUNCTION(BlueprintCallable)
	void SetGameManualMenuState(EGameManualMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void SetCurrentOnbardingMenuSubtitle();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ResetScrolls(bool resetTopicsScroll);

private:
	UFUNCTION()
	void OnTopicsTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreGameManualPanelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGameManualPanelWidget) { return 0; }
