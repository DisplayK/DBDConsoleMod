#include "KillerIntroComponent.h"

void UKillerIntroComponent::OnLevelReadyToPlay()
{

}

void UKillerIntroComponent::OnIntroCompleted()
{

}

void UKillerIntroComponent::KillerCameraPanInUpdateNative(const float killerIntroCompletedPercent)
{

}

UKillerIntroComponent::UKillerIntroComponent()
{
	this->_percentOfCameraPanInProgressRequiredToHideKiller = 0.700000;
	this->_cameraPanInAmountToSquish = 3.000000;
	this->_cameraPanInHidingStrategy = EFPVTransitionStrategy::TurnInvisible;
	this->_startKillerIntroDelay = 0.000000;
}
