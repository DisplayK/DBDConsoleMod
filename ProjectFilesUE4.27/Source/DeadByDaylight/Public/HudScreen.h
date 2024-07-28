#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "InteractionProgressViewData.h"
#include "UObject/ScriptInterface.h"
#include "ItemBundleViewData.h"
#include "PowerBundleViewData.h"
#include "PlayerStatusViewData.h"
#include "HudScreen.generated.h"

class IPlayerStatusViewInterface;
class UCoreHudRootWidget;
class ATutorialsUtilities;

UCLASS()
class DEADBYDAYLIGHT_API UHudScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCoreHudRootWidget* _rootWidget;

	UPROPERTY(Transient)
	ATutorialsUtilities* _tutorialsUtilities;

	UPROPERTY(Transient)
	TArray<TScriptInterface<IPlayerStatusViewInterface>> _playerStatusInterfaces;

	UPROPERTY(Transient)
	FInteractionProgressViewData _interactionProgressViewData;

	UPROPERTY(Transient)
	FItemBundleViewData _itemBundleViewData;

	UPROPERTY(Transient)
	FPowerBundleViewData _powerBundleViewData;

	UPROPERTY(Transient)
	TArray<FPlayerStatusViewData> _playerStatusViewData;

private:
	UFUNCTION()
	void OnTutorialHudFadeOutTriggered();

	UFUNCTION()
	void OnTutorialHudFadeInTriggered();

	UFUNCTION()
	void OnSpectateRightArrowClicked();

	UFUNCTION()
	void OnSpectateLeftArrowClicked();

	UFUNCTION()
	void OnSpectateLeaveButtonClicked();

	UFUNCTION()
	void OnNotifTutoConfirmButtonClicked();

	UFUNCTION()
	void OnHUDWidgetFadeOutCompleted();

	UFUNCTION()
	void OnHideStartSequenceCompleted();

	UFUNCTION()
	void OnHemorrhageAnimationComplete();

public:
	UHudScreen();
};

FORCEINLINE uint32 GetTypeHash(const UHudScreen) { return 0; }
