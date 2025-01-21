#include "DialogHandlerComponent.h"

UDialogHandlerComponent::UDialogHandlerComponent()
{
	this->_minimumDelayBetweenDialog = 3.000000;
	this->_maxSubtitleDistance = 1600.000000;
	this->_dialogEvents = TArray<FDialogEventSettings>();
	this->_stopAudioGameplayEvents = TArray<FGameplayTag>();
	this->_stopAudioClip = NULL;
}
