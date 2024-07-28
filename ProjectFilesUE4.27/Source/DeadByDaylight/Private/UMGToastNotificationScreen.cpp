#include "UMGToastNotificationScreen.h"

void UUMGToastNotificationScreen::HandleOnPromptSelected(int32 notificationId)
{

}

void UUMGToastNotificationScreen::HandleOnNotificationDisplayEnd(int32 notificationId)
{

}

void UUMGToastNotificationScreen::HandleOnButtonSelected(int32 buttonId, int32 notificationId)
{

}

UUMGToastNotificationScreen::UUMGToastNotificationScreen()
{
	this->NotificationToast = NULL;
	this->InvitationPartyToast = NULL;
	this->ToastsContainer = NULL;
	this->_toastsDisplayedOnScreen = TMap<uint32, UUMGBaseToastWidget*>();
}
