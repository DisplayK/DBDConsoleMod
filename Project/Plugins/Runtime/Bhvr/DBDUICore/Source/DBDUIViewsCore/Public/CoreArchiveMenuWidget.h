#pragma once

#include "CoreMinimal.h"
#include "ArchiveSlotSelectionSelectedDelegate.h"
#include "ArchiveMenuTabSelectedDelegate.h"
#include "ArchiveBackActionDelegate.h"
#include "ArchiveMenuViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "ArchiveChallengeReminderClickedDelegate.h"
#include "ArchiveInfoClicked.h"
#include "ArchiveSlotSelectorClosed.h"
#include "EPlayerRole.h"
#include "EArchiveMenuState.h"
#include "CoreArchiveMenuWidget.generated.h"

class UCoreTabContainerWidget;
class UCoreArchiveSlotSelectorWidget;
class UCoreInputSwitcherWidget;
class UCoreArchiveChallengeReminderSlotWidget;
class UCoreButtonWidget;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveMenuWidget : public UCoreBaseUserWidget, public IArchiveMenuViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Export)
	UCoreTabContainerWidget* ArchiveMenuTabs;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreArchiveChallengeReminderSlotWidget* SurvivorChallengeSlot;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreArchiveChallengeReminderSlotWidget* KillerChallengeSlot;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreArchiveSlotSelectorWidget* SlotSelector;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(BlueprintReadWrite, Export)
	UCoreButtonWidget* InfoButton;

protected:
	UPROPERTY()
	FArchiveBackActionDelegate _backActionDelegate;

	UPROPERTY()
	FArchiveInfoClicked _infoClickedDelegate;

	UPROPERTY()
	FArchiveSlotSelectorClosed _slotSelectorClosedDelegate;

	UPROPERTY()
	FArchiveMenuTabSelectedDelegate MenuTabSelectedDelegate;

	UPROPERTY()
	FArchiveChallengeReminderClickedDelegate _challengeReminderClickedDelegate;

	UPROPERTY()
	FArchiveSlotSelectionSelectedDelegate _slotSelectionSelectedDelegate;

	UPROPERTY(BlueprintReadOnly)
	FText _riftRemainingTimeText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetScrollData(const FText& vignetteListScrollPromptText, const FText& journalEntryScrollPromptText);

protected:
	UFUNCTION()
	void OnSlotSelectionCancelled();

	UFUNCTION()
	void OnSlotSelected(EPlayerRole role);

	UFUNCTION()
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION()
	void OnInfoButtonClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION()
	void OnChallengeReminderClick(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	FText GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState);

public:
	UCoreArchiveMenuWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveMenuWidget) { return 0; }
