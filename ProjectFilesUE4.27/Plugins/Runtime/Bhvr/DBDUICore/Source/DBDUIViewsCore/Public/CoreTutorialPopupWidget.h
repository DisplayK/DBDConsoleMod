#pragma once

#include "CoreMinimal.h"
#include "TutorialPopupViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "NotifTutoConfirmButtonClickDelegate.h"
#include "CoreTutorialPopupWidget.generated.h"

class UAkAudioEvent;
class UCoreInputSwitcherWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTutorialPopupWidget : public UCoreBaseHudWidget, public ITutorialPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* ProgressionInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAkAudioEvent* ClosePopupSfx;

private:
	UPROPERTY()
	FNotifTutoConfirmButtonClickDelegate _notifTutoConfirmButtonClickDelegate;

public:
	UCoreTutorialPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTutorialPopupWidget) { return 0; }
