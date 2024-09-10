#include "StatusView.h"
#include "StatusViewSource.h"

class ADBDPlayer;

void AStatusView::ResetView_Implementation(const ADBDPlayer* dbdPlayer)
{

}

void AStatusView::FireNotification(const FStatusViewSource statusViewSource)
{

}

AStatusView::AStatusView()
{
	this->IsActive = false;
	this->Level = -1;
	this->PercentageFill = 0.000000;
	this->IsClockwiseTimer = false;
	this->_localDBDPlayer = NULL;
}
