#include "HudScreen.h"

void UHudScreen::OnTutorialHudFadeOutTriggered()
{

}

void UHudScreen::OnTutorialHudFadeInTriggered()
{

}

void UHudScreen::OnSpectateRightArrowClicked()
{

}

void UHudScreen::OnSpectateLeftArrowClicked()
{

}

void UHudScreen::OnSpectateLeaveButtonClicked()
{

}

void UHudScreen::OnNotifTutoConfirmButtonClicked()
{

}

void UHudScreen::OnHUDWidgetFadeOutCompleted()
{

}

void UHudScreen::OnHideStartSequenceCompleted()
{

}

void UHudScreen::OnHemorrhageAnimationComplete()
{

}

UHudScreen::UHudScreen()
{
	this->_rootWidget = NULL;
	this->_tutorialsUtilities = NULL;
	this->_playerStatusInterfaces = TArray<TScriptInterface<IPlayerStatusViewInterface>>();
	this->_playerStatusViewData = TArray<FPlayerStatusViewData>();
}
