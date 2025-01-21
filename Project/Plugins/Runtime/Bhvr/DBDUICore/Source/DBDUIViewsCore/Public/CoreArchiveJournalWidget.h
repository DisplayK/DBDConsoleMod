#pragma once

#include "CoreMinimal.h"
#include "VignetteEntrySelected.h"
#include "ArchiveJournalViewInterface.h"
#include "CoreTabContentWidget.h"
#include "VignetteVoiceOverPlayed.h"
#include "VignetteSelected.h"
#include "VignetteCinematicPlayed.h"
#include "VignetteVoiceOverAutoplay.h"
#include "CoreArchiveJournalWidget.generated.h"

class UCoreArchiveVignetteButtonContainerWidget;
class UCoreArchiveVignetteEntryContainerWidget;
class UCoreInputSwitcherWidget;
class UCoreArchiveVignetteCinematicContainerWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveJournalWidget : public UCoreTabContentWidget, public IArchiveJournalViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteButtonContainerWidget* VignetteButtonContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteEntryContainerWidget* VignetteEntryContainer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveVignetteCinematicContainerWidget* VignetteCinematicsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* LeftArrowInputSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* RightArrowInputSwitcher;

private:
	UPROPERTY()
	FVignetteSelected _vignetteSelectedDelegate;

	UPROPERTY()
	FVignetteEntrySelected _vignetteEntrySelectedDelegate;

	UPROPERTY()
	FVignetteCinematicPlayed _vignetteCinematicPlayedDelegate;

	UPROPERTY()
	FVignetteVoiceOverPlayed _vignetteVoiceOverPlayedDelegate;

	UPROPERTY()
	FVignetteVoiceOverAutoplay _vignetteVoiceOverAutoplayDelegate;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverText(const FText& playVoiceOverText, const FText& stopVoiceOverText, const FText& autoplayVoiceOverText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVoiceOverButtonsVisibility(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVignetteText(const FText& titleText, const FText& subtitleText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEntryText(const FText& titleText, const FText& descriptionText);

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverPlay();

	UFUNCTION(BlueprintCallable)
	void OnVoiceOverAutoPlay(bool autoplay);

	UFUNCTION()
	void OnVignetteEntrySelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnVignetteCinematicSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnVignetteButtonSelected(UCoreSelectableButtonWidget* selectedButton);

private:
	UFUNCTION()
	void OnRightArrowTriggered();

	UFUNCTION()
	void OnLeftArrowTriggered();

	UFUNCTION()
	void OnJournalEntriesUnlocked();

public:
	UCoreArchiveJournalWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveJournalWidget) { return 0; }
