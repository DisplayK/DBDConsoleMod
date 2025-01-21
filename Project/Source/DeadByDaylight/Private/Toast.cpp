#include "Toast.h"

FToast::FToast()
{
	this->DisplayDuration = 0.0f;
	this->Lifetime = 0.0f;
	this->ToastText = FText::GetEmpty();
	this->ButtonsData = TMap<EToastInputType, FToastButton>();
	this->DelayBeforeInteraction = 0.0f;
	this->ToastIcon = NULL;
}
